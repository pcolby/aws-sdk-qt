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
#include <sqs/sqscreatequeueresponse.h>

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    AwsBasicCredentials credentials(QLatin1String("key"),
                                    QLatin1String("secret"));

    SqsClient sqs(AwsRegion::AP_Southeast_2, &credentials);
    SqsCreateQueueResponse * response =
        sqs.createQueue(QLatin1String("libqtaws-test-queue"));
    QObject::connect(response, SIGNAL(finished), &app, SLOT(quit()));
    return (response) ? app.exec() : 1;
}
