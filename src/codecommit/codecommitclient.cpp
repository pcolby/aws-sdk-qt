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

#include "codecommitclient.h"
#include "codecommitclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CodeCommit {

/**
 * @class  CodeCommitClient
 *
 * @brief  Client for AWS CodeCommit
 *
 * <fullname>AWS CodeCommit</fullname>
 *
 * This is the <i>AWS CodeCommit API Reference</i>. This reference provides descriptions of the operations and data types
 * for AWS CodeCommit
 *
 * API>
 *
 * You can use the AWS CodeCommit API to work with the following
 *
 * objects> <ul> <li>Repositories, by calling the following: <ul> <li><a>BatchGetRepositories</a>, which returns
 * information about one or more repositories associated with your AWS account</li> <li><a>CreateRepository</a>, which
 * creates an AWS CodeCommit repository</li> <li><a>DeleteRepository</a>, which deletes an AWS CodeCommit repository</li>
 * <li><a>GetRepository</a>, which returns information about a specified repository</li> <li><a>ListRepositories</a>, which
 * lists all AWS CodeCommit repositories associated with your AWS account</li> <li><a>UpdateRepositoryDescription</a>,
 * which sets or updates the description of the repository</li> <li><a>UpdateRepositoryName</a>, which changes the name of
 * the repository. If you change the name of a repository, no other users of that repository will be able to access it
 * until you send them the new HTTPS or SSH URL to use.</li> </ul></li> <li>Branches, by calling the following: <ul>
 * <li><a>CreateBranch</a>, which creates a new branch in a specified repository</li> <li><a>GetBranch</a>, which returns
 * information about a specified branch</li> <li><a>ListBranches</a>, which lists all branches for a specified
 * repository</li> <li><a>UpdateDefaultBranch</a>, which changes the default branch for a repository</li> </ul></li>
 * <li>Information about committed code in a repository, by calling the following: <ul> <li><a>GetCommit</a>, which returns
 * information about a commit, including commit messages and committer information.</li> </ul></li> <li>Triggers, by
 * calling the following: <ul> <li><a>GetRepositoryTriggers</a>, which returns information about triggers configured for a
 * repository</li> <li><a>PutRepositoryTriggers</a>, which replaces all triggers for a repository and can be used to create
 * or delete triggers</li> <li><a>TestRepositoryTriggers</a>, which tests the functionality of a repository trigger by
 * sending data to the trigger target</li> </ul> </li> </ul>
 *
 * For information about how to use AWS CodeCommit, see the <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS CodeCommit User
 */

/**
 * @brief  Constructs a new CodeCommitClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CodeCommitClient::CodeCommitClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeCommitClientPrivate(this), parent)
{
    Q_D(CodeCommitClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CodeCommitClient object.
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
CodeCommitClient::CodeCommitClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeCommitClientPrivate(this), parent)
{
    Q_D(CodeCommitClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CodeCommitClientPrivate
 *
 * @brief  Private implementation for CodeCommitClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeCommitClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeCommitClient instance.
 */
CodeCommitClientPrivate::CodeCommitClientPrivate(CodeCommitClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CodeCommit
} // namespace AWS
