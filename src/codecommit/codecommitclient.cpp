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
 * for AWS CodeCommit API along with usage
 *
 * examples>
 *
 * You can use the AWS CodeCommit API to work with the following
 *
 * objects>
 *
 * Repositories, by calling the
 *
 * following> <ul> <li>
 *
 * <a>BatchGetRepositories</a>, which returns information about one or more repositories associated with your AWS
 *
 * account> </li> <li>
 *
 * <a>CreateRepository</a>, which creates an AWS CodeCommit
 *
 * repository> </li> <li>
 *
 * <a>DeleteRepository</a>, which deletes an AWS CodeCommit
 *
 * repository> </li> <li>
 *
 * <a>GetRepository</a>, which returns information about a specified
 *
 * repository> </li> <li>
 *
 * <a>ListRepositories</a>, which lists all AWS CodeCommit repositories associated with your AWS
 *
 * account> </li> <li>
 *
 * <a>UpdateRepositoryDescription</a>, which sets or updates the description of the
 *
 * repository> </li> <li>
 *
 * <a>UpdateRepositoryName</a>, which changes the name of the repository. If you change the name of a repository, no other
 * users of that repository will be able to access it until you send them the new HTTPS or SSH URL to
 *
 * use> </li> </ul>
 *
 * Branches, by calling the
 *
 * following> <ul> <li>
 *
 * <a>CreateBranch</a>, which creates a new branch in a specified
 *
 * repository> </li> <li>
 *
 * <a>DeleteBranch</a>, which deletes the specified branch in a repository unless it is the default
 *
 * branch> </li> <li>
 *
 * <a>GetBranch</a>, which returns information about a specified
 *
 * branch> </li> <li>
 *
 * <a>ListBranches</a>, which lists all branches for a specified
 *
 * repository> </li> <li>
 *
 * <a>UpdateDefaultBranch</a>, which changes the default branch for a
 *
 * repository> </li> </ul>
 *
 * Files, by calling the
 *
 * following> <ul> <li>
 *
 * <a>PutFile</a>, which adds or modifies a file in a specified repository and
 *
 * branch> </li> </ul>
 *
 * Information about committed code in a repository, by calling the
 *
 * following> <ul> <li>
 *
 * <a>GetBlob</a>, which returns the base-64 encoded content of an individual Git blob object within a
 *
 * repository> </li> <li>
 *
 * <a>GetCommit</a>, which returns information about a commit, including commit messages and author and committer
 *
 * information> </li> <li>
 *
 * <a>GetDifferences</a>, which returns information about the differences in a valid commit specifier (such as a branch,
 * tag, HEAD, commit ID or other fully qualified
 *
 * reference)> </li> </ul>
 *
 * Pull requests, by calling the
 *
 * following> <ul> <li>
 *
 * <a>CreatePullRequest</a>, which creates a pull request in a specified
 *
 * repository> </li> <li>
 *
 * <a>DescribePullRequestEvents</a>, which returns information about one or more pull request
 *
 * events> </li> <li>
 *
 * <a>GetCommentsForPullRequest</a>, which returns information about comments on a specified pull
 *
 * request> </li> <li>
 *
 * <a>GetMergeConflicts</a>, which returns information about merge conflicts between the source and destination branch in a
 * pull
 *
 * request> </li> <li>
 *
 * <a>GetPullRequest</a>, which returns information about a specified pull
 *
 * request> </li> <li>
 *
 * <a>ListPullRequests</a>, which lists all pull requests for a
 *
 * repository> </li> <li>
 *
 * <a>MergePullRequestByFastForward</a>, which merges the source destination branch of a pull request into the specified
 * destination branch for that pull request using the fast-forward merge
 *
 * option> </li> <li>
 *
 * <a>PostCommentForPullRequest</a>, which posts a comment to a pull request at the specified line, file, or
 *
 * request> </li> <li>
 *
 * <a>UpdatePullRequestDescription</a>, which updates the description of a pull
 *
 * request> </li> <li>
 *
 * <a>UpdatePullRequestStatus</a>, which updates the status of a pull
 *
 * request> </li> <li>
 *
 * <a>UpdatePullRequestTitle</a>, which updates the title of a pull
 *
 * request> </li> </ul>
 *
 * Information about comments in a repository, by calling the
 *
 * following> <ul> <li>
 *
 * <a>DeleteCommentContent</a>, which deletes the content of a comment on a commit in a
 *
 * repository> </li> <li>
 *
 * <a>GetComment</a>, which returns information about a comment on a
 *
 * commit> </li> <li>
 *
 * <a>GetCommentsForComparedCommit</a>, which returns information about comments on the comparison between two commit
 * specifiers in a
 *
 * repository> </li> <li>
 *
 * <a>PostCommentForComparedCommit</a>, which creates a comment on the comparison between two commit specifiers in a
 *
 * repository> </li> <li>
 *
 * <a>PostCommentReply</a>, which creates a reply to a
 *
 * comment> </li> <li>
 *
 * <a>UpdateComment</a>, which updates the content of a comment on a commit in a
 *
 * repository> </li> </ul>
 *
 * Triggers, by calling the
 *
 * following> <ul> <li>
 *
 * <a>GetRepositoryTriggers</a>, which returns information about triggers configured for a
 *
 * repository> </li> <li>
 *
 * <a>PutRepositoryTriggers</a>, which replaces all triggers for a repository and can be used to create or delete
 *
 * triggers> </li> <li>
 *
 * <a>TestRepositoryTriggers</a>, which tests the functionality of a repository trigger by sending data to the trigger
 *
 * target> </li> </ul>
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
