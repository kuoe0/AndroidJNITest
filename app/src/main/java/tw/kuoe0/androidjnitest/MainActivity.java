package tw.kuoe0.androidjnitest;

import android.support.v4.widget.TextViewCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;


class JNIMethod {
    static public String getStringFromNativeForStaticFunction() {
        return sMsg;
    }
    public String getStringFromNativeForMemberFunction() {
        return mMsg;
    }

    private static final String sMsg = "Hello wrold from static!";
    private final String mMsg = "Hello wrold from member!";
}

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView sTextview = (TextView) findViewById(R.id.textStatic);

        sTextview.setText(JNIMethod.getStringFromNativeForStaticFunction());

        JNIMethod jni = new JNIMethod();
        TextView mTextview = (TextView) findViewById(R.id.textMember);
        mTextview.setText(jni.getStringFromNativeForMemberFunction());

    }
}
