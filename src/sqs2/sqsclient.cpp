/*
    Copyright 2013-2018 Paul Colby

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

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SQS {

/**
 * @class  SqsClient
 *
 * @brief  Client for Amazon Simple Queue Service ( SQS)
 *
 * Welcome to the <i>Amazon Simple Queue Service API Reference</i>. This section describes who should read this guide, how
 * the guide is organized, and other resources related to the Amazon Simple Queue Service (Amazon
 *
 * SQS)>
 *
 * Amazon SQS offers reliable and scalable hosted queues for storing messages as they travel between computers. By using
 * Amazon SQS, you can move data between distributed components of your applications that perform different tasks without
 * losing messages or requiring each component to be always
 *
 * available>
 *
 * Helpful
 *
 * Links> <ul> <li><p><a href="http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl">Current WSDL
 * (2012-11-05)</a></p></li> <li><p><a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/MakingRequestsArticle.html">Making API
 * Requests</a></p></li> <li><p><a href="http://aws.amazon.com/sqs/">Amazon SQS product page</a></p></li> <li><p><a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html">Using Amazon
 * SQS Message Attributes</a></p></li> <li><p><a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using Amazon
 * SQS Dead Letter Queues</a></p></li> <li><p><a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a></p></li> </ul>
 *
 * We also provide SDKs that enable you to access Amazon SQS from your preferred programming language. The SDKs contain
 * functionality that automatically takes care of tasks such
 *
 * as> <ul> <li><p>Cryptographically signing your service requests</p></li> <li><p>Retrying requests</p></li>
 * <li><p>Handling error responses</p></li> </ul>
 *
 * For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 */

/**
 * @brief  Constructs a new SqsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SqsClient::SqsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SqsClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
SqsClient::SqsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

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

} // namespace SQS
} // namespace AWS
