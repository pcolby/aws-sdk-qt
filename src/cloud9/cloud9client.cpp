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

#include "cloud9client.h"
#include "cloud9client_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Cloud9 {

/**
 * @class  Cloud9Client
 *
 * @brief  Client for AWS Cloud9
 *
 * <fullname>AWS Cloud9</fullname>
 *
 * AWS Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 *
 * cloud>
 *
 * For more information about AWS Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">AWS Cloud9
 * User
 *
 * Guide</a>>
 *
 * AWS Cloud9 supports these
 *
 * operations> <ul> <li>
 *
 * <code>CreateEnvironmentEC2</code>: Creates an AWS Cloud9 development environment, launches an Amazon EC2 instance, and
 * then connects from the instance to the
 *
 * environment> </li> <li>
 *
 * <code>CreateEnvironmentMembership</code>: Adds an environment member to an
 *
 * environment> </li> <li>
 *
 * <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2 instance is connected to the environment, also
 * terminates the
 *
 * instance> </li> <li>
 *
 * <code>DeleteEnvironmentMembership</code>: Deletes an environment member from an
 *
 * environment> </li> <li>
 *
 * <code>DescribeEnvironmentMemberships</code>: Gets information about environment members for an
 *
 * environment> </li> <li>
 *
 * <code>DescribeEnvironments</code>: Gets information about
 *
 * environments> </li> <li>
 *
 * <code>DescribeEnvironmentStatus</code>: Gets status information for an
 *
 * environment> </li> <li>
 *
 * <code>ListEnvironments</code>: Gets a list of environment
 *
 * identifiers> </li> <li>
 *
 * <code>UpdateEnvironment</code>: Changes the settings of an existing
 *
 * environment> </li> <li>
 *
 * <code>UpdateEnvironmentMembership</code>: Changes the settings of an existing environment member for an
 */

/**
 * @brief  Constructs a new Cloud9Client object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
Cloud9Client::Cloud9Client(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new Cloud9ClientPrivate(this), parent)
{
    Q_D(Cloud9Client);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new Cloud9Client object.
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
Cloud9Client::Cloud9Client(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new Cloud9ClientPrivate(this), parent)
{
    Q_D(Cloud9Client);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  Cloud9ClientPrivate
 *
 * @brief  Private implementation for Cloud9Client.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ClientPrivate object.
 *
 * @param  q  Pointer to this object's public Cloud9Client instance.
 */
Cloud9ClientPrivate::Cloud9ClientPrivate(Cloud9Client * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Cloud9
} // namespace AWS
