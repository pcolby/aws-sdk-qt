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

#include "cloudwatcheventsclient.h"
#include "cloudwatcheventsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  CloudWatchEventsClient
 *
 * @brief  Client for Amazon CloudWatch Events
 *
 * Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 * they automatically send events into an event stream. You can create rules that match selected events in the stream and
 * route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 * you can configure rules
 *
 * to> <ul> <li>
 *
 * Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 * enters the running
 *
 * state> </li> <li>
 *
 * Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 * availability
 *
 * risks> </li> <li>
 *
 * Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 *
 * volume> </li> </ul>
 *
 * For more information about the features of Amazon CloudWatch Events, see the <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 */

/**
 * @brief  Constructs a new CloudWatchEventsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudWatchEventsClient::CloudWatchEventsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudWatchEventsClientPrivate(this), parent)
{
    Q_D(CloudWatchEventsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CloudWatchEventsClient object.
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
CloudWatchEventsClient::CloudWatchEventsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudWatchEventsClientPrivate(this), parent)
{
    Q_D(CloudWatchEventsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CloudWatchEventsClientPrivate
 *
 * @brief  Private implementation for CloudWatchEventsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchEventsClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchEventsClient instance.
 */
CloudWatchEventsClientPrivate::CloudWatchEventsClientPrivate(CloudWatchEventsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudWatchEvents
} // namespace AWS
