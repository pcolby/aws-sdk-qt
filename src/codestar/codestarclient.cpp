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

#include "codestarclient.h"
#include "codestarclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CodeStar {

/**
 * @class  CodeStarClient
 *
 * @brief  Client for AWS CodeStar
 *
 * <fullname>AWS CodeStar</fullname>
 *
 * This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 * the AWS CodeStar API along with usage
 *
 * examples>
 *
 * You can use the AWS CodeStar API to work
 *
 * with>
 *
 * Projects and their resources, by calling the
 *
 * following> <ul> <li>
 *
 * <code>DeleteProject</code>, which deletes a
 *
 * project> </li> <li>
 *
 * <code>DescribeProject</code>, which lists the attributes of a
 *
 * project> </li> <li>
 *
 * <code>ListProjects</code>, which lists all projects associated with your AWS
 *
 * account> </li> <li>
 *
 * <code>ListResources</code>, which lists the resources associated with a
 *
 * project> </li> <li>
 *
 * <code>ListTagsForProject</code>, which lists the tags associated with a
 *
 * project> </li> <li>
 *
 * <code>TagProject</code>, which adds tags to a
 *
 * project> </li> <li>
 *
 * <code>UntagProject</code>, which removes tags from a
 *
 * project> </li> <li>
 *
 * <code>UpdateProject</code>, which updates the attributes of a
 *
 * project> </li> </ul>
 *
 * Teams and team members, by calling the
 *
 * following> <ul> <li>
 *
 * <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 *
 * project> </li> <li>
 *
 * <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 *
 * project> </li> <li>
 *
 * <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 *
 * attributes> </li> <li>
 *
 * <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 *
 * project> </li> </ul>
 *
 * Users, by calling the
 *
 * following> <ul> <li>
 *
 * <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 *
 * projects> </li> <li>
 *
 * <code>DeleteUserProfile</code>, which deletes all user profile information across all
 *
 * projects> </li> <li>
 *
 * <code>DescribeUserProfile</code>, which describes the profile of a
 *
 * user> </li> <li>
 *
 * <code>ListUserProfiles</code>, which lists all user
 *
 * profiles> </li> <li>
 *
 * <code>UpdateUserProfile</code>, which updates the profile for a
 */

/**
 * @brief  Constructs a new CodeStarClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CodeStarClient::CodeStarClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeStarClientPrivate(this), parent)
{
    Q_D(CodeStarClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CodeStarClient object.
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
CodeStarClient::CodeStarClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeStarClientPrivate(this), parent)
{
    Q_D(CodeStarClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CodeStarClientPrivate
 *
 * @brief  Private implementation for CodeStarClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeStarClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeStarClient instance.
 */
CodeStarClientPrivate::CodeStarClientPrivate(CodeStarClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CodeStar
} // namespace AWS
