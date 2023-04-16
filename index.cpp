#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Cars{                                         //This class deals in 3D model
        public:
            string make;
            string model;
            int year;
            int speedX , speedY, speedZ, x, y, z;

            Cars(string Make, string Model, int Year, int SpeedX, int SpeedY, int SpeedZ, int X, int Y, int Z){
               make = Make;
               model = Model;
               year = Year;
               speedX = SpeedX;
               speedY = SpeedY;
               speedZ = SpeedZ;
               x = X;
               y = Y;
               z = Z;
            }

            void accelerate(int speed_incrementX, int speed_incrementY, int speed_incrementZ){
                speedX += speed_incrementX; 
                speedY += speed_incrementY;
                speedZ += speed_incrementZ;
                return;
            }

            void brake(int speed_decrementX, int speed_decrementY ,int speed_decrementZ){
                speedX -= speed_decrementX;
                speedY -= speed_decrementY;    
                speedZ += speed_decrementZ; 
                return;      
            }

            void move(){
                x += speedX;
                y += speedY;
                z += speedZ;
                return;
            }
            
            void detect_collision(Cars Car2){
                float xRel= x-Car2.x;              //calculating relative distances
                float yRel= y-Car2.y;
                float zRel= z-Car2.z;


                float speedX_Rel= speedX-Car2.speedX;           // calculating relative speeds
                float speedY_Rel= speedY-Car2.speedY;
                float speedZ_Rel= speedZ-Car2.speedZ;

                //cout << (xRel/speedX_Rel)<< endl << (yRel/speedY_Rel) << endl << (zRel/speedZ_Rel) <<endl;
                
                //Case 1: When there is relative motion in all directions
                if(speedX_Rel!=0 && speedY_Rel!=0 && speedZ_Rel!=0){
                    if((xRel/speedX_Rel)==(yRel/speedY_Rel) && (yRel/speedY_Rel)==(zRel/speedZ_Rel) && (xRel/speedX_Rel)==(zRel/speedZ_Rel)){
                        cout << "Collision Detected! :(" << endl;
                        cout << "The time to collision is " << fabs(xRel/speedX_Rel) << " hours ." << endl;  
                        cout << "Hope the damage is not severe <3"<< endl; 
                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 2: When there is no relative motion in x-axis
                else if(speedX_Rel==0 && speedY_Rel!=0 && speedZ_Rel!=0){
                    if(xRel==0){
                        if((yRel/speedY_Rel)==(zRel/speedZ_Rel)){
                            cout << "Collision Detected! :(" << endl;
                            cout << "The time to collision is " << fabs(yRel/speedY_Rel) << " hours ." << endl ;
                            cout << "Hope the damage is not severe <3"<< endl; 
                        }
                        else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 3: When there is no relative motion in Y-axis
                else if(speedX_Rel!=0 && speedY_Rel==0 && speedZ_Rel!=0){
                    if(yRel==0){
                        if((xRel/speedX_Rel)==(zRel/speedZ_Rel)){
                            cout << "Collision Detected! :(" << endl;
                            cout << "The time to collision is " << fabs(xRel/speedX_Rel) << " hours ." << endl;  
                            cout << "Hope the damage is not severe <3"<< endl; 
                        }
                        else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;

                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 4: When there is no relative motion in Z axis
                else if(speedX_Rel!=0 && speedY_Rel!=0 && speedZ_Rel==0){
                    if(zRel==0){
                        if((xRel/speedX_Rel)==(yRel/speedY_Rel)){
                            cout << "Collision Detected! :(" << endl;
                            cout << "The time to collision is " << fabs(xRel/speedX_Rel) << " hours ." << endl;  
                            cout << "Hope the damage is not severe <3"<< endl; 
                        }
                        else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;

                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 5: When there is relative motion only in Z-axis
                else if(speedX_Rel==0 && speedY_Rel==0 && speedZ_Rel!=0){
                    if(xRel==0 && yRel==0){
                        cout << "Collision Detected! :(" << endl;
                        cout << "The time to collision is " << fabs(zRel/speedZ_Rel) << " hours ." << endl;  
                        cout << "Hope the damage is not severe <3"<< endl; 
                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 6: when there is relative motion in only in X-axis
                else if(speedX_Rel!=0 && speedY_Rel==0 && speedZ_Rel==0){
                    if(yRel==0 && zRel==0){
                        cout << "Collision Detected! :(" << endl;
                        cout << "The time to collision is " << fabs(xRel/speedX_Rel) << " hours ." << endl;  
                        cout << "Hope the damage is not severe <3"<< endl; 
                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 7: when there is relative motion only in Y-axis
                else if(speedX_Rel==0 && speedY_Rel!=0 && speedZ_Rel==0){
                    if(xRel==0 && zRel==0){
                        cout << "Collision Detected! :(" << endl;
                        cout << "The time to collision is " << fabs(yRel/speedY_Rel) << " hours ." << endl;  
                        cout << "Hope the damage is not severe <3"<< endl; 
                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }

                //Case 8: when there is no relative motion in any axis
                else if(speedX_Rel==0 && speedY_Rel==0 && speedZ_Rel){
                    if(xRel==0 && yRel==0 && zRel==0){
                        cout << "Collision Detected! :(" << endl;
                        cout << "The time to collision is 0" << " hours ."<< endl; 
                        cout << "Hope the damage is not severe <3"<< endl; 
                    }
                    else cout << "No Collision happens :)" << endl << "Have a safe journey ahead <3" << endl;
                }
            }
            
};

int main(){

    Cars car1("Honda", "City", 2016, 10, 20, 30, 0, 0, 0);
    Cars car2("Maruti", "Alto", 2018, -10, -20, -30, 20, 40, 60);
    
    car1.detect_collision(car2);



    return 0;
}
