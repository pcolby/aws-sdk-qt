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

#include <core/awsbasiccredentials.h>
#include <core/awsregion.h>
#include <sqs/sqsclient.h> ///< SQS stuff should move to a separate file sometime.
#include <sqs/sqscreatequeuerequest.h>

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    AwsBasicCredentials credentials(QLatin1String("key"),
                                    QLatin1String("secret"));

    SqsClient client(AwsRegion::AP_Southeast_2, &credentials);

    //connect(&client, SIGNAL(queueCreated), &app, SLOT(queueCreated));
    //connect(&client, SIGNAL(......failed), &app, SLOT(............));
    //client.createQueue(QLatin1String("libqtaws-test-queue"), AwsRegion::AP_Southeast_2);

    //SqsCreateQueueRequest * request = client.createQueue(QLatin1String("libqtaws-test-queue-1"));
    //QObject::connect(request, SIGNAL(finished()), &app, SLOT(quit()));
    //return (client.send(request)) ? app.exec() : 1;

    // or:

    SqsCreateQueueRequest request(QLatin1String("libqtaws-test-queue"));
    QObject::connect(&request, SIGNAL(finished()), &app, SLOT(quit()));
    return (client.send(&request)) ? app.exec() : 1;
}
