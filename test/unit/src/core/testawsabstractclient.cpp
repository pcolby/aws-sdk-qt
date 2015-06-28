/*
    Copyright 2013-2015 Paul Colby

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

#include "testawsabstractclient.h"

#include "core/awsabstractclient.h"
#include "core/awsbasiccredentials.h"

void TestAwsAbstractClient::credentials_data()
{
    QTest::addColumn<AwsAbstractCredentials *>("credentials");

    QTest::newRow("null")
        << reinterpret_cast<AwsAbstractCredentials *>(NULL);

    QTest::newRow("basic")
        << qobject_cast<AwsAbstractCredentials *>(new AwsBasicCredentials(QString(),QString()));
}

void TestAwsAbstractClient::credentials()
{
    QFETCH(AwsAbstractCredentials *, credentials);

    AwsAbstractClient client;
    QCOMPARE(client.credentials(), reinterpret_cast<AwsAbstractCredentials *>(NULL));

    client.setCredentials(credentials);
    QCOMPARE(client.credentials(), credentials);

    client.setCredentials(NULL);
    QCOMPARE(client.credentials(), reinterpret_cast<AwsAbstractCredentials *>(NULL));
}
