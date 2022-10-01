// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <core/awsbasiccredentials.h>
#include <core/awsregion.h>
#include <sqs/sqsclient.h> ///< SQS stuff should move to a separate file sometime.
#include <sqs/sqscreatequeueresponse.h>

#include <QCoreApplication>

#include <iostream>

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
    if ((accessKeyId.isEmpty()) || (secretAccessKey.isEmpty())) {
        std::cerr << "Missing credentials" << std::endl;
        exit(1);
    }

    AwsBasicCredentials credentials(accessKeyId, secretAccessKey);

    QNetworkAccessManager manager;

    SqsClient sqs(AwsRegion::AP_Southeast_2, &credentials, &manager);

    SqsCreateQueueResponse * response =
        sqs.createQueue(QLatin1String("aws-sdk-for-qt-test-queue"));
    QObject::connect(response, SIGNAL(finished()), &app, SLOT(quit()));
    return (response) ? app.exec() : 1;
}
