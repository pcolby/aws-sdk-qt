/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "codecommitclient.h"
#include "codecommitclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgetrepositoriesrequest.h"
#include "batchgetrepositoriesresponse.h"
#include "createbranchrequest.h"
#include "createbranchresponse.h"
#include "createpullrequestrequest.h"
#include "createpullrequestresponse.h"
#include "createrepositoryrequest.h"
#include "createrepositoryresponse.h"
#include "deletebranchrequest.h"
#include "deletebranchresponse.h"
#include "deletecommentcontentrequest.h"
#include "deletecommentcontentresponse.h"
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "describepullrequesteventsrequest.h"
#include "describepullrequesteventsresponse.h"
#include "getblobrequest.h"
#include "getblobresponse.h"
#include "getbranchrequest.h"
#include "getbranchresponse.h"
#include "getcommentrequest.h"
#include "getcommentresponse.h"
#include "getcommentsforcomparedcommitrequest.h"
#include "getcommentsforcomparedcommitresponse.h"
#include "getcommentsforpullrequestrequest.h"
#include "getcommentsforpullrequestresponse.h"
#include "getcommitrequest.h"
#include "getcommitresponse.h"
#include "getdifferencesrequest.h"
#include "getdifferencesresponse.h"
#include "getmergeconflictsrequest.h"
#include "getmergeconflictsresponse.h"
#include "getpullrequestrequest.h"
#include "getpullrequestresponse.h"
#include "getrepositoryrequest.h"
#include "getrepositoryresponse.h"
#include "getrepositorytriggersrequest.h"
#include "getrepositorytriggersresponse.h"
#include "listbranchesrequest.h"
#include "listbranchesresponse.h"
#include "listpullrequestsrequest.h"
#include "listpullrequestsresponse.h"
#include "listrepositoriesrequest.h"
#include "listrepositoriesresponse.h"
#include "mergepullrequestbyfastforwardrequest.h"
#include "mergepullrequestbyfastforwardresponse.h"
#include "postcommentforcomparedcommitrequest.h"
#include "postcommentforcomparedcommitresponse.h"
#include "postcommentforpullrequestrequest.h"
#include "postcommentforpullrequestresponse.h"
#include "postcommentreplyrequest.h"
#include "postcommentreplyresponse.h"
#include "putfilerequest.h"
#include "putfileresponse.h"
#include "putrepositorytriggersrequest.h"
#include "putrepositorytriggersresponse.h"
#include "testrepositorytriggersrequest.h"
#include "testrepositorytriggersresponse.h"
#include "updatecommentrequest.h"
#include "updatecommentresponse.h"
#include "updatedefaultbranchrequest.h"
#include "updatedefaultbranchresponse.h"
#include "updatepullrequestdescriptionrequest.h"
#include "updatepullrequestdescriptionresponse.h"
#include "updatepullrequeststatusrequest.h"
#include "updatepullrequeststatusresponse.h"
#include "updatepullrequesttitlerequest.h"
#include "updatepullrequesttitleresponse.h"
#include "updaterepositorydescriptionrequest.h"
#include "updaterepositorydescriptionresponse.h"
#include "updaterepositorynamerequest.h"
#include "updaterepositorynameresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
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
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeCommitClientPrivate(this), parent)
{
    Q_D(CodeCommitClient);
    d->apiVersion = QStringLiteral("2015-04-13");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codecommit");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CodeCommit");
    d->serviceName = QStringLiteral("codecommit");
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeCommitClientPrivate(this), parent)
{
    Q_D(CodeCommitClient);
    d->apiVersion = QStringLiteral("2015-04-13");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codecommit");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CodeCommit");
    d->serviceName = QStringLiteral("codecommit");
}

/**
 * Returns information about one or more
 *
 * repositories> <note>
 *
 * The description field for a repository accepts all HTML characters and all valid Unicode characters. Applications that
 * do not HTML-encode the description and display it in a web page could expose users to potentially malicious code. Make
 * sure that you HTML-encode the description field in any application that uses this API to display the repository
 * description on a web
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetRepositoriesResponse * CodeCommitClient::batchGetRepositories(const BatchGetRepositoriesRequest &request)
{
    return qobject_cast<BatchGetRepositoriesResponse *>(send(request));
}

/**
 * Creates a new branch in a repository and points the branch to a
 *
 * commit> <note>
 *
 * Calling the create branch operation does not set a repository's default branch. To do this, call the update default
 * branch
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBranchResponse * CodeCommitClient::createBranch(const CreateBranchRequest &request)
{
    return qobject_cast<CreateBranchResponse *>(send(request));
}

/**
 * Creates a pull request in the specified
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePullRequestResponse * CodeCommitClient::createPullRequest(const CreatePullRequestRequest &request)
{
    return qobject_cast<CreatePullRequestResponse *>(send(request));
}

/**
 * Creates a new, empty
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRepositoryResponse * CodeCommitClient::createRepository(const CreateRepositoryRequest &request)
{
    return qobject_cast<CreateRepositoryResponse *>(send(request));
}

/**
 * Deletes a branch from a repository, unless that branch is the default branch for the repository.
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBranchResponse * CodeCommitClient::deleteBranch(const DeleteBranchRequest &request)
{
    return qobject_cast<DeleteBranchResponse *>(send(request));
}

/**
 * Deletes the content of a comment made on a change, file, or commit in a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCommentContentResponse * CodeCommitClient::deleteCommentContent(const DeleteCommentContentRequest &request)
{
    return qobject_cast<DeleteCommentContentResponse *>(send(request));
}

/**
 * Deletes a repository. If a specified repository was already deleted, a null repository ID will be
 *
 * returned> <b>
 *
 * Deleting a repository also deletes all associated objects and metadata. After a repository is deleted, all future push
 * calls to the deleted repository will
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRepositoryResponse * CodeCommitClient::deleteRepository(const DeleteRepositoryRequest &request)
{
    return qobject_cast<DeleteRepositoryResponse *>(send(request));
}

/**
 * Returns information about one or more pull request
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePullRequestEventsResponse * CodeCommitClient::describePullRequestEvents(const DescribePullRequestEventsRequest &request)
{
    return qobject_cast<DescribePullRequestEventsResponse *>(send(request));
}

/**
 * Returns the base-64 encoded content of an individual blob within a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBlobResponse * CodeCommitClient::getBlob(const GetBlobRequest &request)
{
    return qobject_cast<GetBlobResponse *>(send(request));
}

/**
 * Returns information about a repository branch, including its name and the last commit
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBranchResponse * CodeCommitClient::getBranch(const GetBranchRequest &request)
{
    return qobject_cast<GetBranchResponse *>(send(request));
}

/**
 * Returns the content of a comment made on a change, file, or commit in a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCommentResponse * CodeCommitClient::getComment(const GetCommentRequest &request)
{
    return qobject_cast<GetCommentResponse *>(send(request));
}

/**
 * Returns information about comments made on the comparison between two
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCommentsForComparedCommitResponse * CodeCommitClient::getCommentsForComparedCommit(const GetCommentsForComparedCommitRequest &request)
{
    return qobject_cast<GetCommentsForComparedCommitResponse *>(send(request));
}

/**
 * Returns comments made on a pull
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCommentsForPullRequestResponse * CodeCommitClient::getCommentsForPullRequest(const GetCommentsForPullRequestRequest &request)
{
    return qobject_cast<GetCommentsForPullRequestResponse *>(send(request));
}

/**
 * Returns information about a commit, including commit message and committer
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCommitResponse * CodeCommitClient::getCommit(const GetCommitRequest &request)
{
    return qobject_cast<GetCommitResponse *>(send(request));
}

/**
 * Returns information about the differences in a valid commit specifier (such as a branch, tag, HEAD, commit ID or other
 * fully qualified reference). Results can be limited to a specified
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDifferencesResponse * CodeCommitClient::getDifferences(const GetDifferencesRequest &request)
{
    return qobject_cast<GetDifferencesResponse *>(send(request));
}

/**
 * Returns information about merge conflicts between the before and after commit IDs for a pull request in a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMergeConflictsResponse * CodeCommitClient::getMergeConflicts(const GetMergeConflictsRequest &request)
{
    return qobject_cast<GetMergeConflictsResponse *>(send(request));
}

/**
 * Gets information about a pull request in a specified
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPullRequestResponse * CodeCommitClient::getPullRequest(const GetPullRequestRequest &request)
{
    return qobject_cast<GetPullRequestResponse *>(send(request));
}

/**
 * Returns information about a
 *
 * repository> <note>
 *
 * The description field for a repository accepts all HTML characters and all valid Unicode characters. Applications that
 * do not HTML-encode the description and display it in a web page could expose users to potentially malicious code. Make
 * sure that you HTML-encode the description field in any application that uses this API to display the repository
 * description on a web
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRepositoryResponse * CodeCommitClient::getRepository(const GetRepositoryRequest &request)
{
    return qobject_cast<GetRepositoryResponse *>(send(request));
}

/**
 * Gets information about triggers configured for a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRepositoryTriggersResponse * CodeCommitClient::getRepositoryTriggers(const GetRepositoryTriggersRequest &request)
{
    return qobject_cast<GetRepositoryTriggersResponse *>(send(request));
}

/**
 * Gets information about one or more branches in a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBranchesResponse * CodeCommitClient::listBranches(const ListBranchesRequest &request)
{
    return qobject_cast<ListBranchesResponse *>(send(request));
}

/**
 * Returns a list of pull requests for a specified repository. The return list can be refined by pull request status or
 * pull request author
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPullRequestsResponse * CodeCommitClient::listPullRequests(const ListPullRequestsRequest &request)
{
    return qobject_cast<ListPullRequestsResponse *>(send(request));
}

/**
 * Gets information about one or more
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRepositoriesResponse * CodeCommitClient::listRepositories(const ListRepositoriesRequest &request)
{
    return qobject_cast<ListRepositoriesResponse *>(send(request));
}

/**
 * Closes a pull request and attempts to merge the source commit of a pull request into the specified destination branch
 * for that pull request at the specified commit using the fast-forward merge
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
MergePullRequestByFastForwardResponse * CodeCommitClient::mergePullRequestByFastForward(const MergePullRequestByFastForwardRequest &request)
{
    return qobject_cast<MergePullRequestByFastForwardResponse *>(send(request));
}

/**
 * Posts a comment on the comparison between two
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PostCommentForComparedCommitResponse * CodeCommitClient::postCommentForComparedCommit(const PostCommentForComparedCommitRequest &request)
{
    return qobject_cast<PostCommentForComparedCommitResponse *>(send(request));
}

/**
 * Posts a comment on a pull
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PostCommentForPullRequestResponse * CodeCommitClient::postCommentForPullRequest(const PostCommentForPullRequestRequest &request)
{
    return qobject_cast<PostCommentForPullRequestResponse *>(send(request));
}

/**
 * Posts a comment in reply to an existing comment on a comparison between commits or a pull
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PostCommentReplyResponse * CodeCommitClient::postCommentReply(const PostCommentReplyRequest &request)
{
    return qobject_cast<PostCommentReplyResponse *>(send(request));
}

/**
 * Adds or updates a file in an AWS CodeCommit
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutFileResponse * CodeCommitClient::putFile(const PutFileRequest &request)
{
    return qobject_cast<PutFileResponse *>(send(request));
}

/**
 * Replaces all triggers for a repository. This can be used to create or delete
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutRepositoryTriggersResponse * CodeCommitClient::putRepositoryTriggers(const PutRepositoryTriggersRequest &request)
{
    return qobject_cast<PutRepositoryTriggersResponse *>(send(request));
}

/**
 * Tests the functionality of repository triggers by sending information to the trigger target. If real data is available
 * in the repository, the test will send data from the last commit. If no data is available, sample data will be
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestRepositoryTriggersResponse * CodeCommitClient::testRepositoryTriggers(const TestRepositoryTriggersRequest &request)
{
    return qobject_cast<TestRepositoryTriggersResponse *>(send(request));
}

/**
 * Replaces the contents of a
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCommentResponse * CodeCommitClient::updateComment(const UpdateCommentRequest &request)
{
    return qobject_cast<UpdateCommentResponse *>(send(request));
}

/**
 * Sets or changes the default branch name for the specified
 *
 * repository> <note>
 *
 * If you use this operation to change the default branch name to the current default branch name, a success message is
 * returned even though the default branch did not
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDefaultBranchResponse * CodeCommitClient::updateDefaultBranch(const UpdateDefaultBranchRequest &request)
{
    return qobject_cast<UpdateDefaultBranchResponse *>(send(request));
}

/**
 * Replaces the contents of the description of a pull
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePullRequestDescriptionResponse * CodeCommitClient::updatePullRequestDescription(const UpdatePullRequestDescriptionRequest &request)
{
    return qobject_cast<UpdatePullRequestDescriptionResponse *>(send(request));
}

/**
 * Updates the status of a pull request.
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePullRequestStatusResponse * CodeCommitClient::updatePullRequestStatus(const UpdatePullRequestStatusRequest &request)
{
    return qobject_cast<UpdatePullRequestStatusResponse *>(send(request));
}

/**
 * Replaces the title of a pull
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePullRequestTitleResponse * CodeCommitClient::updatePullRequestTitle(const UpdatePullRequestTitleRequest &request)
{
    return qobject_cast<UpdatePullRequestTitleResponse *>(send(request));
}

/**
 * Sets or changes the comment or description for a
 *
 * repository> <note>
 *
 * The description field for a repository accepts all HTML characters and all valid Unicode characters. Applications that
 * do not HTML-encode the description and display it in a web page could expose users to potentially malicious code. Make
 * sure that you HTML-encode the description field in any application that uses this API to display the repository
 * description on a web
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRepositoryDescriptionResponse * CodeCommitClient::updateRepositoryDescription(const UpdateRepositoryDescriptionRequest &request)
{
    return qobject_cast<UpdateRepositoryDescriptionResponse *>(send(request));
}

/**
 * Renames a repository. The repository name must be unique across the calling AWS account. In addition, repository names
 * are limited to 100 alphanumeric, dash, and underscore characters, and cannot include certain characters. The suffix
 * ".git" is prohibited. For a full description of the limits on repository names, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a> in the AWS CodeCommit User
 *
 * @param  request Request to send to AWS CodeCommit.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRepositoryNameResponse * CodeCommitClient::updateRepositoryName(const UpdateRepositoryNameRequest &request)
{
    return qobject_cast<UpdateRepositoryNameResponse *>(send(request));
}

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
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeCommit
} // namespace QtAws
