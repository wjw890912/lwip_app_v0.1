 #include "main.h"
 #include "smtp.h"

 #ifdef USED_SMTP
 

 void my_smtp_result_fn(void *arg, u8_t smtp_result, u16_t srv_err, err_t err)
  {
			   //·¢ËÍÍê³É
   /* printf("mail (%p) sent with results: 0x%02x, 0x%04x, 0x%08x\n", arg,
           smtp_result, srv_err, err); */
}
void my_smtp_test(char *str)
{

    smtp_set_server_addr("220.181.12.18"/*"192.168.0.163"*/);
  //  -> set both username and password as NULL if no auth needed
    smtp_set_auth("wjw890912@163.com","wjw86831414718");
    smtp_send_mail("wjw890912@163.com", "wjw890912@163.com", "I am from MCU pass the SMTP", (const char *) str/*"this mail is from STM32F107"*/, my_smtp_result_fn,
                   0);


}

#endif