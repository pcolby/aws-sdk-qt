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

#include "supportclient.h"
#include "supportclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Support {

/**
 * @class  SupportClient
 *
 * @brief  Client for AWS Support
 *
 * <fullname>AWS Support</fullname>
 *
 * The AWS Support API reference is intended for programmers who need detailed information about the AWS Support operations
 * and data types. This service enables you to manage your AWS Support cases programmatically. It uses HTTP methods that
 * return results in JSON
 *
 * format>
 *
 * The AWS Support service also exposes a set of <a href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted
 * Advisor</a> features. You can retrieve a list of checks and their descriptions, get check results, specify checks to
 * refresh, and get the refresh status of checks.
 *
 * </p
 *
 * The following list describes the AWS Support case management
 *
 * operations> <ul> <li>
 *
 * <b>Service names, issue categories, and available severity levels. </b>The <a>DescribeServices</a> and
 * <a>DescribeSeverityLevels</a> operations return AWS service names, service codes, service categories, and problem
 * severity levels. You use these values when you call the <a>CreateCase</a> operation.
 *
 * </p </li> <li>
 *
 * <b>Case creation, case details, and case resolution.</b> The <a>CreateCase</a>, <a>DescribeCases</a>,
 * <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create AWS Support cases, retrieve information about cases,
 * and resolve
 *
 * cases> </li> <li>
 *
 * <b>Case communication.</b> The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and
 * <a>AddAttachmentsToSet</a> operations retrieve and add communications and attachments to AWS Support cases.
 *
 * </p </li> </ul>
 *
 * The following list describes the operations available from the AWS Support service for Trusted
 *
 * Advisor> <ul> <li>
 *
 * <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run against your AWS
 *
 * resources> </li> <li>
 *
 * Using the <code>checkId</code> for a specific check returned by <a>DescribeTrustedAdvisorChecks</a>, you can call
 * <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check you
 *
 * specified> </li> <li>
 *
 * <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 *
 * checks> </li> <li>
 *
 * <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified check.
 *
 * </p </li> <li>
 *
 * <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more checks.
 *
 * </p </li> </ul>
 *
 * For authentication of requests, AWS Support uses <a
 * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 *
 * Process</a>>
 *
 * See <a href="http://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the AWS Support API</a> in the <i>AWS
 * Support User Guide</i> for information about how to use this service to create and manage your support cases, and how to
 * call Trusted Advisor for results of checks on your resources.
 */

/**
 * @brief  Constructs a new SupportClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SupportClient::SupportClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SupportClientPrivate(this), parent)
{
    Q_D(SupportClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SupportClient object.
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
SupportClient::SupportClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SupportClientPrivate(this), parent)
{
    Q_D(SupportClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  SupportClientPrivate
 *
 * @brief  Private implementation for SupportClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SupportClientPrivate object.
 *
 * @param  q  Pointer to this object's public SupportClient instance.
 */
SupportClientPrivate::SupportClientPrivate(SupportClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Support
} // namespace AWS
