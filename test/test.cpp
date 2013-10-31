/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "core/testawsabstractcredentials.h"
#include "core/testawsabstractsignature.h"
#include "core/testawsanonymouscredentials.h"
#include "core/testawsbasiccredentials.h"
#include "core/testawsendpoint.h"
#include "core/testawsregion.h"
#include "core/testawssignaturev1.h"
#include "core/testawssignaturev2.h"
#include "core/testawssignaturev4.h"

#include <QTest>

#include <stdio.h>

typedef QObject * (*ObjectConstructor)();

class ObjectFactory : public QMap<QByteArray, ObjectConstructor> {
public:
    template<class T> void registerClass()
    {
        insert(T::staticMetaObject.className(), &objectConstructor<T>);
    }

    template<class T> T * createObject(const QByteArray &className) const
    {
        ObjectConstructor constructor = value(className);
        return (constructor == NULL) ? NULL : (*constructor)();
    }

private:
    template<class T> static QObject * objectConstructor()
    {
        return new T();
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    app.setAttribute(Qt::AA_Use96Dpi, true);

    // Setup our tests factory object.
    ObjectFactory testFactory;
    testFactory.registerClass<TestAwsAbstractCredentials>();
    testFactory.registerClass<TestAwsAbstractSignature>();
    testFactory.registerClass<TestAwsAnonymousCredentials>();
    testFactory.registerClass<TestAwsBasicCredentials>();
    testFactory.registerClass<TestAwsEndpoint>();
    testFactory.registerClass<TestAwsRegion>();
    testFactory.registerClass<TestAwsSignatureV1>();
    testFactory.registerClass<TestAwsSignatureV2>();
    testFactory.registerClass<TestAwsSignatureV4>();

    // If the user has specified a Test* class name, execute that test class only.
    for (int index = 1; index < argc; ++index) {
        if (qstrcmp(argv[index], "-classes") == 0) {
            foreach (const QByteArray &className, testFactory.uniqueKeys()) {
                fprintf(stdout, "%s\n", className.data());
            }
            return 0;
        } else if (qstrncmp(argv[index], "Test", 4) == 0) {
            QStringList args = app.arguments();
            args.removeOne(QString::fromLocal8Bit(argv[index]));
            QObject * testObject = testFactory.createObject<QObject>(argv[index]);
            if (!testObject) {
                fprintf(stderr, "test class %s is unknown\n", argv[index]);
                return 1;
            }
            return QTest::qExec(testObject, args);
        }
    }

    // Otherwise, execute all registered test classes.
    foreach (const QByteArray &className, testFactory.uniqueKeys()) {
        QObject * testObject = testFactory.createObject<QObject>(className);
        if (testObject) {
            const int result = QTest::qExec(testObject, argc, argv);
            if (result) exit(result);
        }
    }
    return 0;
}
