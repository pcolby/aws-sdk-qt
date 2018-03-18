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

#include "wafregionalclient.h"
#include "wafregionalclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace WAFRegional {

/**
 * @class  WAFRegionalClient
 *
 * @brief  Client for AWS WAF Regional
 *
 * This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 * Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 * Balancers. You can use these actions and data types by means of the endpoints listed in <a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 * for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 * information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */

/**
 * @brief  Constructs a new WAFRegionalClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
WAFRegionalClient::WAFRegionalClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WAFRegionalClientPrivate(this), parent)
{
    Q_D(WAFRegionalClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new WAFRegionalClient object.
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
WAFRegionalClient::WAFRegionalClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WAFRegionalClientPrivate(this), parent)
{
    Q_D(WAFRegionalClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  WAFRegionalClientPrivate
 *
 * @brief  Private implementation for WAFRegionalClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WAFRegionalClientPrivate object.
 *
 * @param  q  Pointer to this object's public WAFRegionalClient instance.
 */
WAFRegionalClientPrivate::WAFRegionalClientPrivate(WAFRegionalClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace WAFRegional
} // namespace AWS
