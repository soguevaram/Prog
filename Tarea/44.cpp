#include <iostream>

int main (void)

{
  
  int answer = 0;
  
  std::cout << "Is the number you are thinking of less than 50? 1 yes, 0 no" << "\n";
  std::cin >> answer;
  
  if (answer == 1)
    {
      std::cout << "Is the number you are thinking of less than 25? 1 yes, 0 no" << "\n";
      std::cin >> answer;
      
      if (answer == 1)
	{
	  std::cout << "Is the number you are thinking of less than 13? 1 yes, 0 no" << "\n";
	  std::cin >> answer;
	  
	  if (answer == 1)
	    {
	      std::cout << "Is the number you are thinking of less than 7? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
		
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 4? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		    
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 2? 1 yes, 0 no" << "\n";
		      std::cin >> answer;
			
		      if (answer == 1)
			{
			  std::cout << "Your number is 1" << "\n";
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 3? 1 yes, 0 no" << "\n";
			  std::cin >> answer;
			    
			  if (answer == 1)
			    {
			      std::cout << "Your number is 2" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 3" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 6? 1 yes, 0 no" << "\n";
		      std::cin >> answer;
			
		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 5? 1 yes, 0 no" << "\n";
			    std::cin >> answer;
			    
			    if (answer == 1)
			      {
				std::cout << "Your number is 4" << "\n";
			      }
			    else
			      {
				std::cout << "Your number is 5" << "\n";
			      } 
			    
			  }
			else
			  {
			    std::cout << "Is the number you are thinking of less than 7? 1 yes, 0 no" << "\n";
			    std::cin >> answer;
			    
			    if (answer == 1)
			      {
				std::cout << "Your number is 6" << "\n";
			      }
			    else
			      {
				std::cout << "Your number is 7" << "\n";
				
			      } 
			  } 
		      } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 10? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		    
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 9? 1 yes, 0 no" << "\n";
		      std::cin >> answer;
			
		      if (answer == 1)
			{
			  std::cout << "Your number is 8" << "\n";
			  }
			else
			  {
			    std::cout << "Your number is 9" << "\n";
			  } 
		      }
		    else
		      {
			std::cout << "Is the number you are thinking of less than 11? 1 yes, 0 no" << "\n";
			std::cin >> answer;
			
			if (answer == 1)
			  {
			    std::cout << "Your number is 10" << "\n";
			  }
			else
			  {
			    std::cout << "Your number is 11" << "\n";
			  } 
		      } 
		    
		    if (answer == 1)
		      {
			std::cout << "Is the number you are thinking of less than 13? 1 yes, 0 no" << "\n";
			std::cin >> answer;
			
			if (answer == 1)
			  {
			    std::cout << "Your number is 12" << "\n";
			  }
			
		      }
		    else
		      {
			std::cout << "Is the number you are thinking of less than 15? 1 yes, 0 no" << "\n";
			std::cin >> answer;
			
			if (answer == 1)
			  {
			    std::cout << "Is the number you are thinking of less than 14? 1 yes, 0 no" << "\n";
			    std::cin >> answer;
			    
			    if (answer == 1)
			      {
				std::cout << "Your number is 13" << "\n";
			      }
			    else
			      {
				std::cout << "Your number is 14" << "\n";
			      } 
			  }
			
		      } 
		  } 
	      }
	  else
	    {
	      std::cout << "Is the number you are thinking of less than 19? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
	      
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 17? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 16? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Your number is 15" << "\n";
			}
		      else
			{
			  std::cout << "Your number is 16" << "\n";
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 18? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Your number is 17" << "\n";
			}
		      else
			{
			  std::cout << "Your number is 18" << "\n";
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 21? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 20? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Your number is 19" << "\n";
			}
		      else
			{
			  std::cout << "Your number is 20" << "\n";
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 22? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Your number is 21" << "\n";
			}
		      else
			{
			  std::cout << "Your number is 22" << "\n";
			} 
		    } 
		} 
	    } 
	}
      else
	{
	  std::cout << "Is the number you are thinking of less than 38? 1 yes, 0 no" << "\n";
	  std::cin >> answer;
	  
	  if (answer == 1)
	    {
	      std::cout << "Is the number you are thinking of less than 32? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
		  
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 29? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 27? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 26? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Is the number you are thinking of less than 23? 1 yes, 0 no" << "\n";
			      std::cin >> answer;
			    }
			  else
			    {
			      std::cout << "Is the number you are thinking of less than 25? 1 yes, 0 no" << "\n";
			      std::cin >> answer;
			      
			      if (answer == 1)
				{
				  std::cout << "Is the number you are thinking of less than 24? 1 yes, 0 no" << "\n";
				  std::cin >> answer;

				  if (answer == 1)
				    {
				      std::cout << "Your number is 23" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 24" << "\n";
				    } 
				}
			      else
				{
				  std::cout << "Is the number you are thinking of less than 26? 1 yes, 0 no" << "\n";
				  std::cin >> answer;
				  if (answer == 1)
				    {
				      std::cout << "Your number is 25" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 26" << "\n";
				    } 
				} 
			    } 
			  
			  
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 28? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
				      std::cout << "Your number is 27" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 28" << "\n";
				    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 31? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 30? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 29" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 30" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 32? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 31" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 32" << "\n";
			    } 
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 35? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		      
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 34? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 33? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
				    {
				      std::cout << "Your number is 32" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 33" << "\n";
				    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 35? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
				      std::cout << "Your number is 34" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 35" << "\n";
				    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 37? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Is the number you are thinking of less than 36? 1 yes, 0 no" << "\n";
			      std::cin >> answer;

			      if (answer == 1)
				    {
				      std::cout << "Your number is 35" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 36" << "\n";
				    } 
			    }
			  else
			    {
			      std::cout << "Is the number you are thinking of less than 38? 1 yes, 0 no" << "\n";
			      std::cin >> answer;

			      if (answer == 1)
				{
				  std::cout << "Your number is 37" << "\n";
				}
			      else
				{
				  std::cout << "Your number is 38" << "\n";
				} 
			    } 
		    } 
		} 
	    }
	  else
	    {
	      std::cout << "Is the number you are thinking of less than 44? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
	      
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 41? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		      
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 40? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 39? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 38" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 39" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 41? 1 yes, 0 no" << "\n";
			  std::cin >> answer;
			  
			  if (answer == 1)
			    {
			      std::cout << "Your number is 40" << "\n";
			    }
			  else
			    {
				      std::cout << "Your number is 41" << "\n";
				    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 43? 1 yes, 0 no" << "\n";
		      std::cin >> answer;
		      
		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 42? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 41" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 42" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 44? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 43" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 44" << "\n";
			    } 
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 47? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		      
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 46? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 45? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 44" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 45" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 47? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 46" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 47" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 49? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 48? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 47" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 48" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 50? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 49" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 50" << "\n";
			    } 
			} 
		    } 
		} 
	    } 
	} 
    }
  else
    {
      std::cout << "Is the number you are thinking of less than 75? 1 yes, 0 no" << "\n";
      std::cin >> answer;
      
      if (answer == 1)
	{
	  std::cout << "Is the number you are thinking of less than 63? 1 yes, 0 no" << "\n";
	  std::cin >> answer;
	    
	  if (answer == 1)
	    {
	      std::cout << "Is the number you are thinking of less than 57? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
		  
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 54? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		      
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 52? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 51? 1 yes, 0 no" << "\n";
			  std::cin >> answer;
			  if (answer == 1)
			    {
			      std::cout << "Your number is 50" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 51" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 53? 1 yes, 0 no" << "\n";
			  std::cin >> answer;
			  if (answer == 1)
			    {
			      std::cout << "Your number is 52" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 53" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 56? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 55? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 54" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 55" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 57? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 56" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 57" << "\n";
			    } 
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 60? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		      
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 59? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 58? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 57" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 58" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 60? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 59" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 60" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 62? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 61? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 60" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 61" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 63? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 62" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 63" << "\n";
			    } 
			} 
		    } 
		      
		      
		} 
	    }
	  else
	    {
	      std::cout << "Is the number you are thinking of less than 69? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
		
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 66? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		    
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 65? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 64? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 63" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 64" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 66? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 65" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 66" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 68? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 67? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 66" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 67" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 69? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 68" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 69" << "\n";
			    } 
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 72? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		       
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 71? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 70? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 69" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 70" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 72? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
				    {
				      std::cout << "Your number is 71" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 72" << "\n";
				    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 74? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 73? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 72" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 73" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 75? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 74" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 75" << "\n";
			    } 
			} 
		    } 
		} 
	    } 
	}
      else
	{
	  std::cout << "Is the number you are thinking of less than 88? 1 yes, 0 no" << "\n";
	  std::cin >> answer;
	  
	  if (answer == 1)
	    {
	      std::cout << "Is the number you are thinking of less than 82? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
	      
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 79? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 77? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 76? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 75" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 76" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 78? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 77" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 78" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 81? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 80? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
				    {
				      std::cout << "Your number is 79" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 80" << "\n";
				    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 82? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 81" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 82" << "\n";
			    } 
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 85? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 84? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 83? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 82" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 83" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 85? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 84" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 85" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 87? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 86? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 85" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 86" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 88? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 87" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 88" << "\n";
			    } 
			} 
		    } 
		} 
	    }
	  else
	    {
	      std::cout << "Is the number you are thinking of less than 94? 1 yes, 0 no" << "\n";
	      std::cin >> answer;
	      
	      if (answer == 1)
		{
		  std::cout << "Is the number you are thinking of less than 91? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 90? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 89? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 88" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 89" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 91? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 90" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 91" << "\n";
				    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 93? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 92? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
				    {
				      std::cout << "Your number is 91" << "\n";
				    }
				  else
				    {
				      std::cout << "Your number is 92" << "\n";
				    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 94? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 93" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 94" << "\n";
			    } 
			} 
		    } 
		}
	      else
		{
		  std::cout << "Is the number you are thinking of less than 97? 1 yes, 0 no" << "\n";
		  std::cin >> answer;
		  
		  if (answer == 1)
		    {
		      std::cout << "Is the number you are thinking of less than 96? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 95? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 94" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 95" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 97? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 96" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 97" << "\n";
			    } 
			} 
		    }
		  else
		    {
		      std::cout << "Is the number you are thinking of less than 99? 1 yes, 0 no" << "\n";
		      std::cin >> answer;

		      if (answer == 1)
			{
			  std::cout << "Is the number you are thinking of less than 98? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 97" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 98" << "\n";
			    } 
			}
		      else
			{
			  std::cout << "Is the number you are thinking of less than 100? 1 yes, 0 no" << "\n";
			  std::cin >> answer;

			  if (answer == 1)
			    {
			      std::cout << "Your number is 99" << "\n";
			    }
			  else
			    {
			      std::cout << "Your number is 100" << "\n";
			    } 
			} 
		    } 
		} 
	      
	      
	    } 
	} 
    }    
  
}
