/*
    Copyright 2013-2016 Paul Colby

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

#include "cloudwatchlogsclient.h"
#include "cloudwatchlogsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  CloudWatchLogsClient
 *
 * @brief  Client for Amazon CloudWatch Logs
 *
 * You can use Amazon CloudWatch Logs to monitor, store, and access your log files from Amazon Elastic Compute Cloud
 * (Amazon EC2) instances, Amazon CloudTrail, or other sources. You can then retrieve the associated log data from
 * CloudWatch Logs using the Amazon CloudWatch console, the CloudWatch Logs commands in the AWS CLI, the CloudWatch Logs
 * API, or the CloudWatch Logs
 *
 * SDK>
 *
 * You can use CloudWatch Logs
 *
 * to> <ul> <li>
 *
 * <b>Monitor Logs from Amazon EC2 Instances in Real-time</b>: You can use CloudWatch Logs to monitor applications and
 * systems using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs
 * and send you a notification whenever the rate of errors exceeds a threshold you specify. CloudWatch Logs uses your log
 * data for monitoring; so, no code changes are required. For example, you can monitor application logs for specific
 * literal terms (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular
 * position in log data (such as "404" status codes in an Apache access log). When the term you are searching for is found,
 * CloudWatch Logs reports the data to a Amazon CloudWatch metric that you
 *
 * specify> </li> <li>
 *
 * <b>Monitor Amazon CloudTrail Logged Events</b>: You can create alarms in Amazon CloudWatch and receive notifications of
 * particular API activity as captured by CloudTrail and use the notification to perform
 *
 * troubleshooting> </li> <li>
 *
 * <b>Archive Log Data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 * the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 * agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 * can then access the raw log data when you need
 */

/**
 * @brief  Constructs a new CloudWatchLogsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudWatchLogsClient::CloudWatchLogsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudWatchLogsClientPrivate(this), parent)
{
    Q_D(CloudWatchLogsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CloudWatchLogsClient object.
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
CloudWatchLogsClient::CloudWatchLogsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudWatchLogsClientPrivate(this), parent)
{
    Q_D(CloudWatchLogsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CloudWatchLogsClientPrivate
 *
 * @brief  Private implementation for CloudWatchLogsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchLogsClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchLogsClient instance.
 */
CloudWatchLogsClientPrivate::CloudWatchLogsClientPrivate(CloudWatchLogsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudWatchLogs
} // namespace AWS
