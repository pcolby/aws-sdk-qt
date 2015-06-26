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

#include "sqsclient.h"
#include "sqsclient_p.h"

#include "core/awssignaturev4.h"
#include "sqscreatequeuerequest.h"
#include "sqscreatequeueresponse.h"
#include "sqsrequest.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

#define SQS_SERVICE_NAME QLatin1String("sqs") // As used in endpoints.xml

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsClient
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsClient object.
 *
 * @param parent       This object's parent.
 */
SqsClient::SqsClient(const AwsRegion::Region region,
                     AwsAbstractCredentials * credentials,
                     QNetworkAccessManager * const manager,
                     QObject * const parent)
    : AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = SQS_SERVICE_NAME;
}

SqsClient::SqsClient(const QUrl &endpoint,
                     AwsAbstractCredentials * credentials,
                     QNetworkAccessManager * const manager,
                     QObject * const parent)
    : AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = SQS_SERVICE_NAME;
}

SqsCreateQueueResponse * SqsClient::createQueue(const SqsCreateQueueRequest &request)
{
    return qobject_cast<SqsCreateQueueResponse *>(send(request));
}

/**
 * @brief SqsClient::createQueue
 *
 * @param queueName
 */
SqsCreateQueueResponse * SqsClient::createQueue(const QString &queueName,
                                                const QVariantMap &attributes)
{
    SqsCreateQueueRequest request(queueName);
    request.setAttributes(attributes);
    return createQueue(request);
}

/**
 * @internal
 *
 * @class  SqsClientPrivate
 *
 * @brief  Private implementation for SqsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsClientPrivate object.
 *
 * @param  q  Pointer to this object's public SqsClient instance.
 */
SqsClientPrivate::SqsClientPrivate(SqsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
