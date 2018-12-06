     program loopcheck
     implicit none

     integer, dimension(16001,16001) :: x = 0
     integer :: i,j


     do i=1, 16000
        do j=1, 16000
           x(j,i) = i + i*j
        end do
     end do

     end program

