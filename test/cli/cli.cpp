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

/*
env vars the official awscli tool recognises.
see http://docs.aws.amazon.com/cli/latest/userguide/cli-chap-getting-started.html#cli-environment
AWS_ACCESS_KEY_ID
AWS_SECRET_ACCESS_KEY
AWS_SESSION_TOKEN
AWS_DEFAULT_REGION
AWS_DEFAULT_PROFILE
AWS_CONFIG_FILE
*/

int main(int argc, char *argv[])
{
    qSetMessagePattern(QLatin1String(
        "%{if-warning}\x1b[35m%{endif}"
        "%{if-critical}\x1b[31m%{endif}"
        "%{if-fatal}\x1b[1;31m%{endif}"
        "%{time HH:mm:ss.zzz} "
      //"%{appname} %{pid} %{threadid} "
        "%{type} "
      //"%{file}:%{line} %{function} "
        "%{if-category}%{category} %{endif}%{message}"
        "\x1b[0m"
    ));

    QCoreApplication app(argc, argv);

    const QString accessKeyId = QString::fromLocal8Bit(qgetenv("AWS_ACCESS_KEY_ID"));
    const QString secretAccessKey = QString::fromLocal8Bit(qgetenv("AWS_SECRET_ACCESS_KEY"));

    AwsBasicCredentials credentials(accessKeyId, secretAccessKey);

    QNetworkAccessManager manager;

    SqsClient sqs(AwsRegion::AP_Southeast_2, &credentials, &manager);

    SqsCreateQueueResponse * response =
        sqs.createQueue(QLatin1String("libqtaws-test-queue"));
    QObject::connect(response, SIGNAL(finished()), &app, SLOT(quit()));
    return (response) ? app.exec() : 1;
}
