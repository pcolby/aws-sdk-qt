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

#include "cloudformationclient.h"
#include "cloudformationclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudFormation {

/**
 * @class  CloudFormationClient
 *
 * @brief  Client for AWS CloudFormation
 *
 * <fullname>AWS CloudFormation</fullname>
 *
 * AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 * use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 * Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 * cost-effective applications without creating or configuring the underlying AWS
 *
 * infrastructure>
 *
 * With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 * collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 * the stack together and manages all dependencies between the resources for
 *
 * you>
 *
 * For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 * CloudFormation Product
 *
 * Page</a>>
 *
 * Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 * product, you can find the product's technical documentation at <a
 */

/**
 * @brief  Constructs a new CloudFormationClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudFormationClient::CloudFormationClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudFormationClientPrivate(this), parent)
{
    Q_D(CloudFormationClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CloudFormationClient object.
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
CloudFormationClient::CloudFormationClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudFormationClientPrivate(this), parent)
{
    Q_D(CloudFormationClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CloudFormationClientPrivate
 *
 * @brief  Private implementation for CloudFormationClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudFormationClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudFormationClient instance.
 */
CloudFormationClientPrivate::CloudFormationClientPrivate(CloudFormationClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudFormation
} // namespace AWS
