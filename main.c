#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    bck:;
    int secim1, secim2, cnt;
    long lgtspd=2.997925*pow(10,8);
    float convmass, kutle, mph, hali_a, diklik, a_i_2, a_j_2, b_i_2, b_j_2, d_i, d_j, d_k, e_i, e_j, e_k, vkt_fx, vkt_fy, vkt_fz, hata_a, hali_b, hata_b, yuzolchata, pq_val, p, q, pq, q_i, q_j, p_i, p_j, a_i, a_j, a_k, b_i, b_j, b_k, c_i, c_j, c_k, coe_i, coe_j, coe_k;
    double cos_3b_aci, cos_3b_pay, cos_3b_payda, cos_3b, vkt_a, aci_a, vkt_b, aci_b, vkt_c, aci_c, vkt_d, aci_d, r_i, r_j, crp_ax, crp_ay, crp_bx, crp_by, crp_cx, crp_cy, crp_dx, crp_dy, fx, fy, gx, gy, tan_f, tan_g, pi=3.141593;
    char *bolge="I. bolge", *bolge2="I. bolge";
    printf("        CBU - YAZILIM MUHENDISLIGI / FIZIK SORULARI BOLUMUNE HOS GELDINIZ!\n\n");
    printf("               BIRIM VE VEKTOR SORULARI '1'\n");
    printf("               DOGRUSAL HAREKET SORULARI '2'\n");
    printf("               IKI BOYUTTA HAREKET SORULARI '3'\n");
    printf("               NEWTON HAREKET YASALARI SORULARI '4'\n");
    printf("               IS-GUC-ENERJI SORULARI ICIN '5'\n");
    printf("               ISTEDIGINIZ ISLEM ICIN GIRIS YAPINIZ: ");
    scanf("%d",&secim1);
    bck1:;
    switch(secim1)
    {
    case 1:
        printf("\n               BIRIM SORULARI ");
        printf("\n\n               7 TEMEL BIRIM '1' ");
        printf("\n               USKATLAR VE ASKATLAR '2'");
        printf("\n               TURETILMIS BIRIMLER '3'");
        printf("\n               KUTLENIN ENERJIYE DONUSUMUNU HESAPLAMA '4'");
        printf("\n               MPH'i KM/SAAT VE M/S CINSINDEN HESAPLAMA '5'");
        printf("\n               HALININ YUZOLCUMUNU HATA PAYI ILE HESAPLAMA '6'");
        printf("\n\n               VEKTOR SORULARI");
        printf("\n\n               DORT VEKTORLE BILESENLERI HESAPLAMA '7'");
        printf("\n               BILESENLERLE SIDDET-YON HESAPLAMA '8'");
        printf("\n               BILESENLERLE TOPLAM-FARK BULMA '9'");
        printf("\n               IKI VEKTORLE SIDDET-YON BULMA '10'");
        printf("\n               UC VEKTORLE SKALER CARPIMLARI BULMA '11'");
        printf("\n               IKI VEKTORLE SKALER CARPIM VE ACIYI BULMA '12'");
        printf("\n               IKI VEKTORUN BIRBIRINE DIK OLMASI ICIN BILINMEYENI BULMA '13'");
        printf("\n               UC BOYUTLU IKI VEKTORUN VEKTOREL CARPIMINI-ACIYI BULMA '14'");
        printf("\n\n               ISTEDIGINIZ ISLEM ICIN GIRIS YAPINIZ: ");
        scanf("%d",&secim2);
        switch(secim2)
        {
        case 1:
            printf("\n               BOYUT           BIRIM     KISALTMA\n               __________________________________");
            printf("\n               Zaman           Saniye    sn");
            printf("\n               Uzunluk         Metre     m");
            printf("\n               Kutle           Kilogram  kg");
            printf("\n               Elektrik Akimi  Amper     A");
            printf("\n               Isik Siddeti    Candela   cd");
            printf("\n               Madde Miktari   Mol       mol\n");
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 2:
            printf("\n               USKATLAR");
            printf("\n\n               ADI       KISALTMA    MIKTARI\n               _____________________________");
            printf("\n               Kilo         k         10^3");
            printf("\n               Mega         M         10^6");
            printf("\n               Ciga         G         10^9");
            printf("\n               Tera         T         10^12");
            printf("\n\n               ASKATLAR");
            printf("\n\n               ADI       KISALTMA    MIKTARI\n               _____________________________");
            printf("\n               Santi        c        10^-2");
            printf("\n               Mili         m        10^-3");
            printf("\n               Mikro        ");printf("%c",(char)230);printf("        10^-6");
            printf("\n               Nano         n        10^-9\n");
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 3:
            printf("\n               NICELIK   TANIMI                 KISALTILMIS BIRIMI\n               ___________________________________________________");
            printf("\n               Alan      en x boy               m^2");
            printf("\n               Hacim     en x boy x yukseklik   m^3");
            printf("\n               Hiz       yol / zaman            m/s");
            printf("\n               Ivme      hiz / zaman            m/(s^2)");
            printf("\n               Kuvvet    kutle x ivme           kg x m/(s^2)");
            printf("\n               Is        kuvvet x yol           kg x (m/s)^2\n");
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 4:
            printf("\n               Kutleyi giriniz: ");
            scanf("%f",&kutle);
            convmass=(kutle*pow(10,-3) * pow((lgtspd*pow(10,8)),2));
            convmass=convmass/pow(10,16);
            printf("\n               Kutlenin Enerjiye Donusumu\n                  %.0f x 10^16 J\n",convmass);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 5:
            printf("\n               MPH(Mil/Saat) degerini giriniz: ");
            scanf("%f",&mph);
            mph=mph*1.609;
            printf("               %.0f km/saat\n",mph);
            mph=mph*1000/3600;
            printf("               %.0f m/s\n",mph);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 6:
            printf("\n               A kenari: ");
            scanf("%f",&hali_a);
            printf("               Hata payi: ");
            scanf("%f",&hata_a);
            printf("               B kenari: ");
            scanf("%f",&hali_b);
            printf("               Hata payi: ");
            scanf("%f",&hata_b);
            printf("\n               Halinin yuzolcumu: %.2f\n",hali_a*hali_b);
            yuzolchata=(hali_a*hali_b) * ((hata_a/hali_a) + (hata_b/hali_b));
            printf("               Yuzolcumu hatasi: %.0f\n",yuzolchata);
            printf("               A +- ");
            printf("%c",(char)30);
            printf("A = (%.0f +- %.0f)m^2",hali_a*hali_b,yuzolchata);
            printf("\n               Halinin yuzolcumu (Anlamli haneye gore) : %.0f\n",hali_a*hali_b);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 7:
            printf("\n               A vektorunun siddeti: ");
            scanf("%lf",&vkt_a);
            printf("               A vektorunun acisi: ");
            scanf("%lf",&aci_a);
            printf("               B vektorunun siddeti: ");
            scanf("%lf",&vkt_b);
            printf("               B vektorunun acisi: ");
            scanf("%lf",&aci_b);
            printf("               C vektorunun siddeti: ");
            scanf("%lf",&vkt_c);
            printf("               C vektorunun acisi: ");
            scanf("%lf",&aci_c);
            printf("               D vektorunun siddeti: ");
            scanf("%lf",&vkt_d);
            printf("               D vektorunun acisi: ");
            scanf("%lf",&aci_d);
            crp_ax=vkt_a*cos(aci_a*(pi/180.0));
            crp_bx=vkt_b*cos(aci_b*(pi/180.0));
            crp_cx=vkt_c*cos(aci_c*(pi/180.0));
            crp_dx=vkt_d*cos(aci_d*(pi/180.0));
            crp_ay=vkt_a*sin(aci_a*(pi/180.0));
            crp_by=vkt_b*sin(aci_b*(pi/180.0));
            crp_cy=vkt_c*sin(aci_c*(pi/180.0));
            crp_dy=vkt_d*sin(aci_d*(pi/180.0));
            printf("\n               Ax = %.0lf x cos%.0lf = %.1lf\n",vkt_a,aci_a,crp_ax);
            printf("               Ay = %.0lf x sin%.0lf = %.1lf\n",vkt_a,aci_a,crp_ay);
            printf("               Bx = %.0lf x cos%.0lf = %.1lf\n",vkt_b,aci_b,crp_bx);
            printf("               By = %.0lf x sin%.0lf = %.1lf\n",vkt_b,aci_b,crp_by);
            printf("               Cx = %.0lf x cos%.0lf = %.1lf\n",vkt_c,aci_c,crp_cx);
            printf("               Cy = %.0lf x sin%.0lf = %.1lf\n",vkt_c,aci_c,crp_cy);
            printf("               Dx = %.0lf x cos%.0lf = %.1lf\n",vkt_d,aci_d,crp_dx);
            printf("               Dy = %.0lf x sin%.0lf = %.1lf\n",vkt_d,aci_d,crp_dy);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 8:
            printf("\n               Fx= ");
            scanf("%lf",&fx);
            printf("               Fy= ");
            scanf("%lf",&fy);
            printf("               Gx= ");
            scanf("%lf",&gx);
            printf("               Gy= ");
            scanf("%lf",&gy);
            tan_f=sqrt(pow(fx,2)+pow(fy,2));
            tan_g=sqrt(pow(gx,2)+pow(gy,2));
            printf("\n               F= %.2f",tan_f);
            printf("\n               G= %.2f\n",tan_g);
            tan_f=fy/fx;
            tan_g=gy/gx;
            printf("\n               Ftan");
            printf(": %.1lf",tan_f);
            printf("\n               Gtan");
            printf(": %.1lf\n",tan_g);
            tan_f=atan(fy/fx)*(180/pi);
            tan_g=atan(gy/gx)*(180/pi);
            if (fx<0 && fy<0)
            {
                tan_f=tan_f+180;
                bolge="III. bolge";
            }
            else if (fx<0)
            {
                tan_f=180+tan_f;
                bolge="II. bolge";
            }
            else if (fy<0)
            {
                tan_f=360-(tan_f*-1);
                bolge="IV. bolge";
            }
            printf("\n               F acisi: %.0lf - %s",tan_f,bolge);
            if (gx<0 && gy<0)
            {
                tan_g=tan_g+180;
                bolge2="III. bolge";
            }
            else if (gx<0)
            {
                tan_g=tan_g+180;
                bolge2="II. bolge";
            }
            else if (gy<0)
            {
                tan_g=360-(tan_g*-1);
                bolge2="IV. bolge";
            }
            printf("\n               G acisi: %.0lf - %s\n",tan_g,bolge2);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 9:
            printf("\n               Ai degeri: ");
            scanf("%f",&a_i);
            printf("               Aj degeri: ");
            scanf("%f",&a_j);
            printf("               Ak degeri: ");
            scanf("%f",&a_k);
            printf("\n               Bi degeri: ");
            scanf("%f",&b_i);
            printf("               Bj degeri: ");
            scanf("%f",&b_j);
            printf("               Bk degeri: ");
            scanf("%f",&b_k);
            printf("\n               Ci degeri: ");
            scanf("%f",&c_i);
            printf("               Cj degeri: ");
            scanf("%f",&c_j);
            printf("               Ck degeri: ");
            scanf("%f",&c_k);
            printf("\n               Toplamlari\n\n               A + B = (%.0fi) + (%.0fj) + (%.0fk)",a_i+b_i,a_j+b_j,a_k+b_k);
            printf("\n               B + C = (%.0fi) + (%.0fj) + (%.0fk)",c_i+b_i,c_j+b_j,c_k+b_k);
            printf("\n               A + C = (%.0fi) + (%.0fj) + (%.0fk)",a_i+c_i,a_j+c_j,a_k+c_k);
            printf("\n               A + B + C = (%.0fi) + (%.0fj) + (%.0fk)\n",a_i+b_i+c_i,a_j+b_j+c_j,a_k+b_k+c_k);
            printf("\n               Farklari\n\n               A - B = (%.0fi) + (%.0fj) + (%.0fk)",a_i-b_i,a_j-b_j,a_k-b_k);
            printf("\n               B - A = (%.0fi) + (%.0fj) + (%.0fk)",b_i-a_i,b_j-a_j,b_k-a_k);
            printf("\n               B - C = (%.0fi) + (%.0fj) + (%.0fk)",b_i-c_i,b_j-c_j,b_k-c_k);
            printf("\n               C - B = (%.0fi) + (%.0fj) + (%.0fk)",c_i-b_i,c_j-b_j,c_k-b_k);
            printf("\n               A - C = (%.0fi) + (%.0fj) + (%.0fk)",a_i-c_i,a_j-c_j,a_k-c_k);
            printf("\n               C - A = (%.0fi) + (%.0fj) + (%.0fk)",c_i-a_i,c_j-a_j,c_k-a_k);
            printf("\n               A - B - C = (%.0fi) + (%.0fj) + (%.0fk)",a_i-b_i-c_i,a_j-b_j-c_j,a_k-b_k-c_k);
            printf("\n               A - C - B = (%.0fi) + (%.0fj) + (%.0fk)",a_i-c_i-b_i,a_j-c_j-b_j,a_k-c_k-b_k);
            printf("\n               B - A - C = (%.0fi) + (%.0fj) + (%.0fk)",b_i-a_i-c_i,b_j-a_j-c_j,b_k-a_k-c_k);
            printf("\n               B - C - A = (%.0fi) + (%.0fj) + (%.0fk)",b_i-c_i-a_i,b_j-c_j-a_j,b_k-c_k-a_k);
            printf("\n               C - A - B = (%.0fi) + (%.0fj) + (%.0fk)",c_i-a_i-b_i,c_j-a_j-b_j,c_k-a_k-b_k);
            printf("\n               C - B - A = (%.0fi) + (%.0fj) + (%.0fk)\n",c_i-b_i-a_i,c_j-b_j-a_j,c_k-b_k-a_k);
            printf("\n               Istediginiz I katsayisi: ");
            scanf("%f",&coe_i);
            printf("               Istediginiz J katsayisi: ");
            scanf("%f",&coe_j);
            printf("               Istediginiz K katsayisi: ");
            scanf("%f",&coe_k);
            printf("\n               Toplamlari\n\n               (%.0fA) + (%.0fB) = (%.0fi) + (%.0fj) + (%.0fk)",coe_i,coe_j,coe_i*(a_i+b_i),coe_j*(a_j+b_j),coe_k*(b_k+c_k));
            printf("\n               (%.0fA) + (%.0fC) = (%.0fi) + (%.0fj) + (%.0fk)",coe_i,coe_k,coe_i*(a_i+c_i),coe_j*(a_j+c_j),coe_k*(b_k+c_k));
            printf("\n               (%.0fB) + (%.0fC) = (%.0fi) + (%.0fj) + (%.0fk)",coe_j,coe_k,coe_i*(b_i+c_i),coe_j*(b_j+c_j),coe_k*(b_k+c_k));
            printf("\n               (%.0fA) + (%.0fB) + (%.0fC) = (%.0fi) + (%.0fj) + (%.0fk)\n",coe_i,coe_j,coe_k,coe_i*(a_i+b_i+c_i),coe_j*(a_j+b_j+c_j),coe_k*(a_k+b_k+c_k));
            printf("\n               Farklari\n\n               (%.0fA) - (%.0fB) = (%.0fi) - (%.0fj) - (%.0fk)",coe_i,coe_j,coe_i*(a_i-b_i),coe_j*(a_j-b_j),coe_k*(a_k-b_k));
            printf("\n               (%.0fB) - (%.0fA) = (%.0fi) - (%.0fj) - (%.0fk)",coe_j,coe_i,coe_i*(b_i-a_i),coe_j*(b_j-a_j),coe_k*(b_k-a_k));
            printf("\n               (%.0fB) - (%.0fC) = (%.0fi) - (%.0fj) - (%.0fk)",coe_j,coe_k,coe_i*(b_i-c_i),coe_j*(b_j-c_j),coe_k*(b_k-c_k));
            printf("\n               (%.0fC) - (%.0fB) = (%.0fi) - (%.0fj) - (%.0fk)",coe_k,coe_j,coe_i*(c_i-b_i),coe_j*(c_j-b_j),coe_k*(c_k-b_k));
            printf("\n               (%.0fA) - (%.0fC) = (%.0fi) - (%.0fj) - (%.0fk)",coe_i,coe_k,coe_i*(a_i-c_i),coe_j*(a_j-c_j),coe_k*(a_k-c_k));
            printf("\n               (%.0fC) - (%.0fA) = (%.0fi) - (%.0fj) - (%.0fk)",coe_k,coe_i,coe_i*(c_i-a_i),coe_j*(c_j-a_j),coe_k*(c_k-a_k));
            printf("\n               (%.0fA) - (%.0fB) - (%.0fC) = (%.0fi) - (%.0fj) - (%.0fk)",coe_i,coe_j,coe_k,coe_i*(a_i-b_i-c_i),coe_j*(a_j-b_j-c_j),coe_k*(a_k-b_k-c_k));
            printf("\n               (%.0fA) - (%.0fC) - (%.0fB) = (%.0fi) - (%.0fj) - (%.0fk)",coe_i,coe_k,coe_j,coe_i*(a_i-c_i-b_i),coe_k*(a_j-c_j-b_j),coe_j*(a_k-c_k-b_k));
            printf("\n               (%.0fB) - (%.0fA) - (%.0fC) = (%.0fi) - (%.0fj) - (%.0fk)",coe_j,coe_i,coe_k,coe_j*(b_i-a_i-c_i),coe_i*(b_j-a_j-c_j),coe_k*(b_k-a_k-c_k));
            printf("\n               (%.0fB) - (%.0fC) - (%.0fA) = (%.0fi) - (%.0fj) - (%.0fk)",coe_j,coe_k,coe_i,coe_j*(b_i-c_i-a_i),coe_k*(b_j-c_j-a_j),coe_i*(b_k-c_k-a_k));
            printf("\n               (%.0fC) - (%.0fA) - (%.0fB) = (%.0fi) - (%.0fj) - (%.0fk)",coe_k,coe_i,coe_j,coe_k*(c_i-a_i-b_i),coe_i*(c_j-a_j-b_j),coe_j*(c_k-a_k-b_k));
            printf("\n               (%.0fC) - (%.0fB) - (%.0fA) = (%.0fi) - (%.0fj) - (%.0fk)\n",coe_k,coe_j,coe_j,coe_k*(c_i-b_i-a_i),coe_j*(c_j-b_j-a_j),coe_i*(c_k-b_k-a_k));
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 10:
            printf("\n               A vektorunun siddeti: ");
            scanf("%lf",&vkt_a);
            printf("               A vektorunun acisi: ");
            scanf("%lf",&aci_a);
            printf("               B vektorunun siddeti: ");
            scanf("%lf",&vkt_b);
            printf("               B vektorunun acisi: ");
            scanf("%lf",&aci_b);
            a_i=vkt_a*cos(aci_a*(pi/180.0));
            a_j=vkt_a*sin(aci_a*(pi/180.0));
            b_i=vkt_b*cos(aci_b*(pi/180.0));
            b_j=vkt_b*sin(aci_b*(pi/180.0));
            printf("\n               Ax= %.0lf x %.1lf = %.1lf",vkt_a,cos(aci_a*(pi/180.0)),vkt_a*cos(aci_a*(pi/180.0)));
            printf("\n               Ay= %.0lf x %.1lf = %.1lf",vkt_a,sin(aci_a*(pi/180.0)),vkt_a*sin(aci_a*(pi/180.0)));
            printf("\n               Bx= %.0lf x %.1lf = %.1lf",vkt_b,cos(aci_b*(pi/180.0)),vkt_b*cos(aci_b*(pi/180.0)));
            printf("\n               By= %.0lf x %.1lf = %.1lf\n",vkt_b,sin(aci_b*(pi/180.0)),vkt_b*sin(aci_b*(pi/180.0)));
            printf("\n               A= (%.1lfi) + (%.1lfj)",a_i,b_i);
            printf("\n               B= (%.1lfi) + (%.1lfj)\n",a_j,b_j);
            r_i=a_i+b_i;
            r_j=a_j+b_j;
            printf("\n               R = A + B = (%.1lf)i + (%.1lf)j\n",r_i,r_j);
            printf("\n               Siddet = %.0lf\n",sqrt(pow((r_i),2)+pow((r_j),2)));
            tan_f=atan(r_i/r_j)*(180/pi);
            if (r_i<0 && r_j<0)
            {
                tan_f=tan_f+180;
                bolge="III. bolge";
            }
            else if (r_i<0)
            {
                tan_f=180+tan_f;
                bolge="II. bolge";
            }
            else if (r_j<0)
            {
                tan_f=360-(tan_f*-1);
                bolge="IV. bolge";
            }
            printf("\n               Yon = %.0lf - %s\n",tan_f,bolge);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 11:
            printf("\n               A vektorunun siddeti: ");
            scanf("%lf",&vkt_a);
            printf("               A vektorunun acisi: ");
            scanf("%lf",&aci_a);
            printf("               B vektorunun siddeti: ");
            scanf("%lf",&vkt_b);
            printf("               B vektorunun acisi: ");
            scanf("%lf",&aci_b);
            printf("               C vektorunun siddeti: ");
            scanf("%lf",&vkt_c);
            printf("               C vektorunun acisi: ");
            scanf("%lf",&aci_c);
            printf("\n               A.B = %.0lf x %.0lf x %.1lf = %.1lf",vkt_a,vkt_b,cos((aci_b-aci_a)*(pi/180.0)),vkt_a*vkt_b*cos((aci_b-aci_a)*(pi/180)));
            printf("\n               A.C = %.0lf x %.0lf x %.1lf = %.1lf",vkt_a,vkt_c,cos((aci_c-aci_a)*(pi/180.0)),vkt_a*vkt_c*cos((aci_c-aci_a)*(pi/180)));
            printf("\n               B.C = %.0lf x %.0lf x %.1lf = %.1lf\n",vkt_b,vkt_c,cos((aci_c-aci_b)*(pi/180.0)),vkt_b*vkt_c*cos((aci_c-aci_b)*(pi/180)));
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 12:
            printf("\n               Pi degeri: ");
            scanf("%f",&p_i);
            printf("               Pj degeri: ");
            scanf("%f",&p_j);
            printf("\n               Qi degeri: ");
            scanf("%f",&q_i);
            printf("               Qj degeri: ");
            scanf("%f",&q_j);
            pq=p_i*q_i+p_j*q_j;
            p=sqrt((p_i*p_i)+(p_j*p_j));
            q=sqrt((q_i*q_i)+(q_j*q_j));
            printf("\n               Skaler carpim: %.0f",pq);
            pq_val=pq/(p*q);
            printf("\n               Cos= %.2f\n               Derece: %.0lf\n",pq_val,acos(pq_val)*(180.0/pi));
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                return main();
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 13:
            printf("\n               Ai= ");
            scanf("%f",&a_i_2);
            printf("               Aj= ");
            scanf("%f",&a_j_2);
            printf("               Bi= ");
            scanf("%f",&b_i_2);
            printf("               Bj= ");
            scanf("%f",&b_j_2);
            if ((a_i_2==0 && a_j_2==0) || (b_i_2==0 && a_j_2==0) || (b_j_2==0 && a_j_2==0) || (a_i_2==0 && b_j_2==0) || (a_i_2==0 && b_i_2==0) || (b_i_2==0 && b_j_2==0) || (a_i_2==0 && b_j_2==0))
                printf("\n               Hatali giris...\n");
            else if (a_i_2==0)
            {
                diklik=(-a_j_2*b_j_2)/b_i_2;
                printf("\n               Dikligi bulmak icin Ai degerine ihtiyacimiz var.\n\n               Ai= %.1f\n",diklik);
            }
            else if (a_j_2==0)
            {
                diklik=(-a_i_2*b_i_2)/b_j_2;
                printf("\n               Dikligi bulmak icin Aj degerine ihtiyacimiz var.\n\n               Aj= %.1f\n",diklik);
            }
            else if (b_i_2==0)
            {
                diklik=(-a_j_2*b_j_2)/a_i_2;
                printf("\n               Dikligi bulmak icin Bi degerine ihtiyacimiz var.\n\n               Bi= %.1f\n",diklik);
            }
            else if (b_j_2==0)
            {
                diklik=(-a_i_2*b_i_2)/a_j_2;
                printf("\n               Dikligi bulmak icin Bj degerine ihtiyacimiz var.\n\n               Bj= %.1f\n",diklik);
            }
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
            break;
        case 14:
            printf("\n               Di= ");
            scanf("%f",&d_i);
            printf("               Dj= ");
            scanf("%f",&d_j);
            printf("               Dk= ");
            scanf("%f",&d_k);
            printf("\n               Ei= ");
            scanf("%f",&e_i);
            printf("               Ej= ");
            scanf("%f",&e_j);
            printf("               Ek= ");
            scanf("%f",&e_k);
            vkt_fx=(d_j*e_k)-(e_j*d_k);
            vkt_fy=(d_k*e_i)-(e_k*d_i);
            vkt_fz=(d_i*e_j)-(e_i*d_j);
            printf("\n               Fx= %.0f",vkt_fx);
            printf("\n               Fy= %.0f",vkt_fy);
            printf("\n               Fz= %.0f",vkt_fz);
            printf("\n\n               F= (%.0f)i + (%.0f)j + (%.0f)k\n",vkt_fx,vkt_fy,vkt_fz);
            cos_3b_pay=(d_i*e_i)+(d_j*e_j)+(d_k*e_k);
            cos_3b_payda=sqrt((e_i*e_i)+(e_j*e_j)+(e_k*e_k))*sqrt((d_i*d_i)+(d_j*d_j)+(d_k*d_k));
            if(cos_3b_pay<0)
                cos_3b_pay*=-1;
            cos_3b=cos_3b_pay/cos_3b_payda;
            cos_3b_aci=acos(cos_3b)*(180.0/pi);
            if (cos_3b_pay<0 && cos_3b_payda<0)
            {
                cos_3b_aci=cos_3b_aci+180;
            }
            else if (cos_3b_pay<0)
            {
                cos_3b_aci=180+cos_3b_aci;
            }
            else if (cos_3b_payda<0)
            {
                cos_3b_aci=360-(cos_3b_aci*-1);
            }
            printf("\n               Cosinus degeri= %.2lf ve acisi: %.0lf\n",cos_3b,cos_3b_aci);
            printf("\n               Devam etmek icin 1\n               Kapatmak icin 2 ile islem yapiniz: ");
            scanf("%d",&cnt);
            switch(cnt)
            {
            case 1:
                system("CLS");
                goto bck;
                break;
            case 2:
                exit(0);
                break;
            }
            break;
        default:
            system("CLS");
            goto bck1;
            break;
        }
        break;
    default:
        system("CLS");
        goto bck;
        break;
    }
    return 0;
}
