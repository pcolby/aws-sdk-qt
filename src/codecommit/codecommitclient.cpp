/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "codecommitclient.h"
#include "codecommitclient_p.h"

#include "core/awssignaturev4.h"
#include "associateapprovalruletemplatewithrepositoryrequest.h"
#include "associateapprovalruletemplatewithrepositoryresponse.h"
#include "batchassociateapprovalruletemplatewithrepositoriesrequest.h"
#include "batchassociateapprovalruletemplatewithrepositoriesresponse.h"
#include "batchdescribemergeconflictsrequest.h"
#include "batchdescribemergeconflictsresponse.h"
#include "batchdisassociateapprovalruletemplatefromrepositoriesrequest.h"
#include "batchdisassociateapprovalruletemplatefromrepositoriesresponse.h"
#include "batchgetcommitsrequest.h"
#include "batchgetcommitsresponse.h"
#include "batchgetrepositoriesrequest.h"
#include "batchgetrepositoriesresponse.h"
#include "createapprovalruletemplaterequest.h"
#include "createapprovalruletemplateresponse.h"
#include "createbranchrequest.h"
#include "createbranchresponse.h"
#include "createcommitrequest.h"
#include "createcommitresponse.h"
#include "createpullrequestrequest.h"
#include "createpullrequestresponse.h"
#include "createpullrequestapprovalrulerequest.h"
#include "createpullrequestapprovalruleresponse.h"
#include "createrepositoryrequest.h"
#include "createrepositoryresponse.h"
#include "createunreferencedmergecommitrequest.h"
#include "createunreferencedmergecommitresponse.h"
#include "deleteapprovalruletemplaterequest.h"
#include "deleteapprovalruletemplateresponse.h"
#include "deletebranchrequest.h"
#include "deletebranchresponse.h"
#include "deletecommentcontentrequest.h"
#include "deletecommentcontentresponse.h"
#include "deletefilerequest.h"
#include "deletefileresponse.h"
#include "deletepullrequestapprovalrulerequest.h"
#include "deletepullrequestapprovalruleresponse.h"
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "describemergeconflictsrequest.h"
#include "describemergeconflictsresponse.h"
#include "describepullrequesteventsrequest.h"
#include "describepullrequesteventsresponse.h"
#include "disassociateapprovalruletemplatefromrepositoryrequest.h"
#include "disassociateapprovalruletemplatefromrepositoryresponse.h"
#include "evaluatepullrequestapprovalrulesrequest.h"
#include "evaluatepullrequestapprovalrulesresponse.h"
#include "getapprovalruletemplaterequest.h"
#include "getapprovalruletemplateresponse.h"
#include "getblobrequest.h"
#include "getblobresponse.h"
#include "getbranchrequest.h"
#include "getbranchresponse.h"
#include "getcommentrequest.h"
#include "getcommentresponse.h"
#include "getcommentreactionsrequest.h"
#include "getcommentreactionsresponse.h"
#include "getcommentsforcomparedcommitrequest.h"
#include "getcommentsforcomparedcommitresponse.h"
#include "getcommentsforpullrequestrequest.h"
#include "getcommentsforpullrequestresponse.h"
#include "getcommitrequest.h"
#include "getcommitresponse.h"
#include "getdifferencesrequest.h"
#include "getdifferencesresponse.h"
#include "getfilerequest.h"
#include "getfileresponse.h"
#include "getfolderrequest.h"
#include "getfolderresponse.h"
#include "getmergecommitrequest.h"
#include "getmergecommitresponse.h"
#include "getmergeconflictsrequest.h"
#include "getmergeconflictsresponse.h"
#include "getmergeoptionsrequest.h"
#include "getmergeoptionsresponse.h"
#include "getpullrequestrequest.h"
#include "getpullrequestresponse.h"
#include "getpullrequestapprovalstatesrequest.h"
#include "getpullrequestapprovalstatesresponse.h"
#include "getpullrequestoverridestaterequest.h"
#include "getpullrequestoverridestateresponse.h"
#include "getrepositoryrequest.h"
#include "getrepositoryresponse.h"
#include "getrepositorytriggersrequest.h"
#include "getrepositorytriggersresponse.h"
#include "listapprovalruletemplatesrequest.h"
#include "listapprovalruletemplatesresponse.h"
#include "listassociatedapprovalruletemplatesforrepositoryrequest.h"
#include "listassociatedapprovalruletemplatesforrepositoryresponse.h"
#include "listbranchesrequest.h"
#include "listbranchesresponse.h"
#include "listpullrequestsrequest.h"
#include "listpullrequestsresponse.h"
#include "listrepositoriesrequest.h"
#include "listrepositoriesresponse.h"
#include "listrepositoriesforapprovalruletemplaterequest.h"
#include "listrepositoriesforapprovalruletemplateresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "mergebranchesbyfastforwardrequest.h"
#include "mergebranchesbyfastforwardresponse.h"
#include "mergebranchesbysquashrequest.h"
#include "mergebranchesbysquashresponse.h"
#include "mergebranchesbythreewayrequest.h"
#include "mergebranchesbythreewayresponse.h"
#include "mergepullrequestbyfastforwardrequest.h"
#include "mergepullrequestbyfastforwardresponse.h"
#include "mergepullrequestbysquashrequest.h"
#include "mergepullrequestbysquashresponse.h"
#include "mergepullrequestbythreewayrequest.h"
#include "mergepullrequestbythreewayresponse.h"
#include "overridepullrequestapprovalrulesrequest.h"
#include "overridepullrequestapprovalrulesresponse.h"
#include "postcommentforcomparedcommitrequest.h"
#include "postcommentforcomparedcommitresponse.h"
#include "postcommentforpullrequestrequest.h"
#include "postcommentforpullrequestresponse.h"
#include "postcommentreplyrequest.h"
#include "postcommentreplyresponse.h"
#include "putcommentreactionrequest.h"
#include "putcommentreactionresponse.h"
#include "putfilerequest.h"
#include "putfileresponse.h"
#include "putrepositorytriggersrequest.h"
#include "putrepositorytriggersresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testrepositorytriggersrequest.h"
#include "testrepositorytriggersresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapprovalruletemplatecontentrequest.h"
#include "updateapprovalruletemplatecontentresponse.h"
#include "updateapprovalruletemplatedescriptionrequest.h"
#include "updateapprovalruletemplatedescriptionresponse.h"
#include "updateapprovalruletemplatenamerequest.h"
#include "updateapprovalruletemplatenameresponse.h"
#include "updatecommentrequest.h"
#include "updatecommentresponse.h"
#include "updatedefaultbranchrequest.h"
#include "updatedefaultbranchresponse.h"
#include "updatepullrequestapprovalrulecontentrequest.h"
#include "updatepullrequestapprovalrulecontentresponse.h"
#include "updatepullrequestapprovalstaterequest.h"
#include "updatepullrequestapprovalstateresponse.h"
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

/*!
 * \namespace QtAws::CodeCommit
 * \brief Contains classess for accessing AWS CodeCommit.
 *
 * \inmodule QtAwsCodeCommit
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeCommit {

/*!
 * \class QtAws::CodeCommit::CodeCommitClient
 * \brief The CodeCommitClient class provides access to the AWS CodeCommit service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeCommit
 *
 *  <fullname>AWS CodeCommit</fullname>
 * 
 *  This is the <i>AWS CodeCommit API Reference</i>. This reference provides descriptions of the operations and data types
 *  for AWS CodeCommit API along with usage
 * 
 *  examples>
 * 
 *  You can use the AWS CodeCommit API to work with the following
 * 
 *  objects>
 * 
 *  Repositories, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>BatchGetRepositories</a>, which returns information about one or more repositories associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <a>CreateRepository</a>, which creates an AWS CodeCommit
 * 
 *  repository> </li> <li>
 * 
 *  <a>DeleteRepository</a>, which deletes an AWS CodeCommit
 * 
 *  repository> </li> <li>
 * 
 *  <a>GetRepository</a>, which returns information about a specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>ListRepositories</a>, which lists all AWS CodeCommit repositories associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <a>UpdateRepositoryDescription</a>, which sets or updates the description of the
 * 
 *  repository> </li> <li>
 * 
 *  <a>UpdateRepositoryName</a>, which changes the name of the repository. If you change the name of a repository, no other
 *  users of that repository can access it until you send them the new HTTPS or SSH URL to
 * 
 *  use> </li> </ul>
 * 
 *  Branches, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>CreateBranch</a>, which creates a branch in a specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>DeleteBranch</a>, which deletes the specified branch in a repository unless it is the default
 * 
 *  branch> </li> <li>
 * 
 *  <a>GetBranch</a>, which returns information about a specified
 * 
 *  branch> </li> <li>
 * 
 *  <a>ListBranches</a>, which lists all branches for a specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>UpdateDefaultBranch</a>, which changes the default branch for a
 * 
 *  repository> </li> </ul>
 * 
 *  Files, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>DeleteFile</a>, which deletes the content of a specified file from a specified
 * 
 *  branch> </li> <li>
 * 
 *  <a>GetBlob</a>, which returns the base-64 encoded content of an individual Git blob object in a
 * 
 *  repository> </li> <li>
 * 
 *  <a>GetFile</a>, which returns the base-64 encoded content of a specified
 * 
 *  file> </li> <li>
 * 
 *  <a>GetFolder</a>, which returns the contents of a specified folder or
 * 
 *  directory> </li> <li>
 * 
 *  <a>PutFile</a>, which adds or modifies a single file in a specified repository and
 * 
 *  branch> </li> </ul>
 * 
 *  Commits, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>BatchGetCommits</a>, which returns information about one or more commits in a
 * 
 *  repository> </li> <li>
 * 
 *  <a>CreateCommit</a>, which creates a commit for changes to a
 * 
 *  repository> </li> <li>
 * 
 *  <a>GetCommit</a>, which returns information about a commit, including commit messages and author and committer
 * 
 *  information> </li> <li>
 * 
 *  <a>GetDifferences</a>, which returns information about the differences in a valid commit specifier (such as a branch,
 *  tag, HEAD, commit ID, or other fully qualified
 * 
 *  reference)> </li> </ul>
 * 
 *  Merges, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>BatchDescribeMergeConflicts</a>, which returns information about conflicts in a merge between commits in a
 * 
 *  repository> </li> <li>
 * 
 *  <a>CreateUnreferencedMergeCommit</a>, which creates an unreferenced commit between two branches or commits for the
 *  purpose of comparing them and identifying any potential
 * 
 *  conflicts> </li> <li>
 * 
 *  <a>DescribeMergeConflicts</a>, which returns information about merge conflicts between the base, source, and destination
 *  versions of a file in a potential
 * 
 *  merge> </li> <li>
 * 
 *  <a>GetMergeCommit</a>, which returns information about the merge between a source and destination commit.
 * 
 *  </p </li> <li>
 * 
 *  <a>GetMergeConflicts</a>, which returns information about merge conflicts between the source and destination branch in a
 *  pull
 * 
 *  request> </li> <li>
 * 
 *  <a>GetMergeOptions</a>, which returns information about the available merge options between two branches or commit
 * 
 *  specifiers> </li> <li>
 * 
 *  <a>MergeBranchesByFastForward</a>, which merges two branches using the fast-forward merge
 * 
 *  option> </li> <li>
 * 
 *  <a>MergeBranchesBySquash</a>, which merges two branches using the squash merge
 * 
 *  option> </li> <li>
 * 
 *  <a>MergeBranchesByThreeWay</a>, which merges two branches using the three-way merge
 * 
 *  option> </li> </ul>
 * 
 *  Pull requests, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>CreatePullRequest</a>, which creates a pull request in a specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>CreatePullRequestApprovalRule</a>, which creates an approval rule for a specified pull
 * 
 *  request> </li> <li>
 * 
 *  <a>DeletePullRequestApprovalRule</a>, which deletes an approval rule for a specified pull
 * 
 *  request> </li> <li>
 * 
 *  <a>DescribePullRequestEvents</a>, which returns information about one or more pull request
 * 
 *  events> </li> <li>
 * 
 *  <a>EvaluatePullRequestApprovalRules</a>, which evaluates whether a pull request has met all the conditions specified in
 *  its associated approval
 * 
 *  rules> </li> <li>
 * 
 *  <a>GetCommentsForPullRequest</a>, which returns information about comments on a specified pull
 * 
 *  request> </li> <li>
 * 
 *  <a>GetPullRequest</a>, which returns information about a specified pull
 * 
 *  request> </li> <li>
 * 
 *  <a>GetPullRequestApprovalStates</a>, which returns information about the approval states for a specified pull
 * 
 *  request> </li> <li>
 * 
 *  <a>GetPullRequestOverrideState</a>, which returns information about whether approval rules have been set aside
 *  (overriden) for a pull request, and if so, the Amazon Resource Name (ARN) of the user or identity that overrode the
 *  rules and their requirements for the pull
 * 
 *  request> </li> <li>
 * 
 *  <a>ListPullRequests</a>, which lists all pull requests for a
 * 
 *  repository> </li> <li>
 * 
 *  <a>MergePullRequestByFastForward</a>, which merges the source destination branch of a pull request into the specified
 *  destination branch for that pull request using the fast-forward merge
 * 
 *  option> </li> <li>
 * 
 *  <a>MergePullRequestBySquash</a>, which merges the source destination branch of a pull request into the specified
 *  destination branch for that pull request using the squash merge
 * 
 *  option> </li> <li>
 * 
 *  <a>MergePullRequestByThreeWay</a>. which merges the source destination branch of a pull request into the specified
 *  destination branch for that pull request using the three-way merge
 * 
 *  option> </li> <li>
 * 
 *  <a>OverridePullRequestApprovalRules</a>, which sets aside all approval rule requirements for a pull
 * 
 *  request> </li> <li>
 * 
 *  <a>PostCommentForPullRequest</a>, which posts a comment to a pull request at the specified line, file, or
 * 
 *  request> </li> <li>
 * 
 *  <a>UpdatePullRequestApprovalRuleContent</a>, which updates the structure of an approval rule for a pull
 * 
 *  request> </li> <li>
 * 
 *  <a>UpdatePullRequestApprovalState</a>, which updates the state of an approval on a pull
 * 
 *  request> </li> <li>
 * 
 *  <a>UpdatePullRequestDescription</a>, which updates the description of a pull
 * 
 *  request> </li> <li>
 * 
 *  <a>UpdatePullRequestStatus</a>, which updates the status of a pull
 * 
 *  request> </li> <li>
 * 
 *  <a>UpdatePullRequestTitle</a>, which updates the title of a pull
 * 
 *  request> </li> </ul>
 * 
 *  Approval rule templates, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>AssociateApprovalRuleTemplateWithRepository</a>, which associates a template with a specified repository. After the
 *  template is associated with a repository, AWS CodeCommit creates approval rules that match the template conditions on
 *  every pull request created in the specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>BatchAssociateApprovalRuleTemplateWithRepositories</a>, which associates a template with one or more specified
 *  repositories. After the template is associated with a repository, AWS CodeCommit creates approval rules that match the
 *  template conditions on every pull request created in the specified
 * 
 *  repositories> </li> <li>
 * 
 *  <a>BatchDisassociateApprovalRuleTemplateFromRepositories</a>, which removes the association between a template and
 *  specified repositories so that approval rules based on the template are not automatically created when pull requests are
 *  created in those
 * 
 *  repositories> </li> <li>
 * 
 *  <a>CreateApprovalRuleTemplate</a>, which creates a template for approval rules that can then be associated with one or
 *  more repositories in your AWS
 * 
 *  account> </li> <li>
 * 
 *  <a>DeleteApprovalRuleTemplate</a>, which deletes the specified template. It does not remove approval rules on pull
 *  requests already created with the
 * 
 *  template> </li> <li>
 * 
 *  <a>DisassociateApprovalRuleTemplateFromRepository</a>, which removes the association between a template and a repository
 *  so that approval rules based on the template are not automatically created when pull requests are created in the
 *  specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>GetApprovalRuleTemplate</a>, which returns information about an approval rule
 * 
 *  template> </li> <li>
 * 
 *  <a>ListApprovalRuleTemplates</a>, which lists all approval rule templates in the AWS Region in your AWS
 * 
 *  account> </li> <li>
 * 
 *  <a>ListAssociatedApprovalRuleTemplatesForRepository</a>, which lists all approval rule templates that are associated
 *  with a specified
 * 
 *  repository> </li> <li>
 * 
 *  <a>ListRepositoriesForApprovalRuleTemplate</a>, which lists all repositories associated with the specified approval rule
 * 
 *  template> </li> <li>
 * 
 *  <a>UpdateApprovalRuleTemplateDescription</a>, which updates the description of an approval rule
 * 
 *  template> </li> <li>
 * 
 *  <a>UpdateApprovalRuleTemplateName</a>, which updates the name of an approval rule
 * 
 *  template> </li> <li>
 * 
 *  <a>UpdateApprovalRuleTemplateContent</a>, which updates the content of an approval rule
 * 
 *  template> </li> </ul>
 * 
 *  Comments in a repository, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>DeleteCommentContent</a>, which deletes the content of a comment on a commit in a
 * 
 *  repository> </li> <li>
 * 
 *  <a>GetComment</a>, which returns information about a comment on a
 * 
 *  commit> </li> <li>
 * 
 *  <a>GetCommentReactions</a>, which returns information about emoji reactions to
 * 
 *  comments> </li> <li>
 * 
 *  <a>GetCommentsForComparedCommit</a>, which returns information about comments on the comparison between two commit
 *  specifiers in a
 * 
 *  repository> </li> <li>
 * 
 *  <a>PostCommentForComparedCommit</a>, which creates a comment on the comparison between two commit specifiers in a
 * 
 *  repository> </li> <li>
 * 
 *  <a>PostCommentReply</a>, which creates a reply to a
 * 
 *  comment> </li> <li>
 * 
 *  <a>PutCommentReaction</a>, which creates or updates an emoji reaction to a
 * 
 *  comment> </li> <li>
 * 
 *  <a>UpdateComment</a>, which updates the content of a comment on a commit in a
 * 
 *  repository> </li> </ul>
 * 
 *  Tags used to tag resources in AWS CodeCommit (not Git tags), by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>ListTagsForResource</a>, which gets information about AWS tags for a specified Amazon Resource Name (ARN) in AWS
 * 
 *  CodeCommit> </li> <li>
 * 
 *  <a>TagResource</a>, which adds or updates tags for a resource in AWS
 * 
 *  CodeCommit> </li> <li>
 * 
 *  <a>UntagResource</a>, which removes tags for a resource in AWS
 * 
 *  CodeCommit> </li> </ul>
 * 
 *  Triggers, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>GetRepositoryTriggers</a>, which returns information about triggers configured for a
 * 
 *  repository> </li> <li>
 * 
 *  <a>PutRepositoryTriggers</a>, which replaces all triggers for a repository and can be used to create or delete
 * 
 *  triggers> </li> <li>
 * 
 *  <a>TestRepositoryTriggers</a>, which tests the functionality of a repository trigger by sending data to the trigger
 * 
 *  target> </li> </ul>
 * 
 *  For information about how to use AWS CodeCommit, see the <a
 *  href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS CodeCommit User
 */

/*!
 * \brief Constructs a CodeCommitClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
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

/*!
 * \overload CodeCommitClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * AssociateApprovalRuleTemplateWithRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between an approval rule template and a specified repository. Then, the next time a pull request
 * is created in the repository where the destination reference (if specified) matches the destination reference (branch)
 * for the pull request, an approval rule that matches the template conditions is automatically created for that pull
 * request. If no destination references are specified in the template, an approval rule that matches the template contents
 * is created for all pull requests in that
 */
AssociateApprovalRuleTemplateWithRepositoryResponse * CodeCommitClient::associateApprovalRuleTemplateWithRepository(const AssociateApprovalRuleTemplateWithRepositoryRequest &request)
{
    return qobject_cast<AssociateApprovalRuleTemplateWithRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * BatchAssociateApprovalRuleTemplateWithRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between an approval rule template and one or more specified repositories.
 */
BatchAssociateApprovalRuleTemplateWithRepositoriesResponse * CodeCommitClient::batchAssociateApprovalRuleTemplateWithRepositories(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest &request)
{
    return qobject_cast<BatchAssociateApprovalRuleTemplateWithRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * BatchDescribeMergeConflictsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more merge conflicts in the attempted merge of two commit specifiers using the squash
 * or three-way merge
 */
BatchDescribeMergeConflictsResponse * CodeCommitClient::batchDescribeMergeConflicts(const BatchDescribeMergeConflictsRequest &request)
{
    return qobject_cast<BatchDescribeMergeConflictsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between an approval rule template and one or more specified repositories.
 */
BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse * CodeCommitClient::batchDisassociateApprovalRuleTemplateFromRepositories(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest &request)
{
    return qobject_cast<BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * BatchGetCommitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the contents of one or more commits in a
 */
BatchGetCommitsResponse * CodeCommitClient::batchGetCommits(const BatchGetCommitsRequest &request)
{
    return qobject_cast<BatchGetCommitsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * BatchGetRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more
 *
 * repositories> <note>
 *
 * The description field for a repository accepts all HTML characters and all valid Unicode characters. Applications that
 * do not HTML-encode the description and display it in a webpage can expose users to potentially malicious code. Make sure
 * that you HTML-encode the description field in any application that uses this API to display the repository description
 * on a
 */
BatchGetRepositoriesResponse * CodeCommitClient::batchGetRepositories(const BatchGetRepositoriesRequest &request)
{
    return qobject_cast<BatchGetRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreateApprovalRuleTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a template for approval rules that can then be associated with one or more repositories in your AWS account.
 * When you associate a template with a repository, AWS CodeCommit creates an approval rule that matches the conditions of
 * the template for all pull requests that meet the conditions of the template. For more information, see
 */
CreateApprovalRuleTemplateResponse * CodeCommitClient::createApprovalRuleTemplate(const CreateApprovalRuleTemplateRequest &request)
{
    return qobject_cast<CreateApprovalRuleTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreateBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a branch in a repository and points the branch to a
 *
 * commit> <note>
 *
 * Calling the create branch operation does not set a repository's default branch. To do this, call the update default
 * branch
 */
CreateBranchResponse * CodeCommitClient::createBranch(const CreateBranchRequest &request)
{
    return qobject_cast<CreateBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreateCommitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a commit for a repository on the tip of a specified
 */
CreateCommitResponse * CodeCommitClient::createCommit(const CreateCommitRequest &request)
{
    return qobject_cast<CreateCommitResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreatePullRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a pull request in the specified
 */
CreatePullRequestResponse * CodeCommitClient::createPullRequest(const CreatePullRequestRequest &request)
{
    return qobject_cast<CreatePullRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreatePullRequestApprovalRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an approval rule for a pull
 */
CreatePullRequestApprovalRuleResponse * CodeCommitClient::createPullRequestApprovalRule(const CreatePullRequestApprovalRuleRequest &request)
{
    return qobject_cast<CreatePullRequestApprovalRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new, empty
 */
CreateRepositoryResponse * CodeCommitClient::createRepository(const CreateRepositoryRequest &request)
{
    return qobject_cast<CreateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * CreateUnreferencedMergeCommitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an unreferenced commit that represents the result of merging two branches using a specified merge strategy. This
 * can help you determine the outcome of a potential merge. This API cannot be used with the fast-forward merge strategy
 * because that strategy does not create a merge
 *
 * commit> <note>
 *
 * This unreferenced merge commit can only be accessed using the GetCommit API or through git commands such as git fetch.
 * To retrieve this commit, you must specify its commit ID or otherwise reference
 */
CreateUnreferencedMergeCommitResponse * CodeCommitClient::createUnreferencedMergeCommit(const CreateUnreferencedMergeCommitRequest &request)
{
    return qobject_cast<CreateUnreferencedMergeCommitResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DeleteApprovalRuleTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified approval rule template. Deleting a template does not remove approval rules on pull requests already
 * created with the
 */
DeleteApprovalRuleTemplateResponse * CodeCommitClient::deleteApprovalRuleTemplate(const DeleteApprovalRuleTemplateRequest &request)
{
    return qobject_cast<DeleteApprovalRuleTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DeleteBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a branch from a repository, unless that branch is the default branch for the repository.
 */
DeleteBranchResponse * CodeCommitClient::deleteBranch(const DeleteBranchRequest &request)
{
    return qobject_cast<DeleteBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DeleteCommentContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the content of a comment made on a change, file, or commit in a
 */
DeleteCommentContentResponse * CodeCommitClient::deleteCommentContent(const DeleteCommentContentRequest &request)
{
    return qobject_cast<DeleteCommentContentResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DeleteFileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified file from a specified branch. A commit is created on the branch that contains the revision. The file
 * still exists in the commits earlier to the commit that contains the
 */
DeleteFileResponse * CodeCommitClient::deleteFile(const DeleteFileRequest &request)
{
    return qobject_cast<DeleteFileResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DeletePullRequestApprovalRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an approval rule from a specified pull request. Approval rules can be deleted from a pull request only if the
 * pull request is open, and if the approval rule was created specifically for a pull request and not generated from an
 * approval rule template associated with the repository where the pull request was created. You cannot delete an approval
 * rule from a merged or closed pull
 */
DeletePullRequestApprovalRuleResponse * CodeCommitClient::deletePullRequestApprovalRule(const DeletePullRequestApprovalRuleRequest &request)
{
    return qobject_cast<DeletePullRequestApprovalRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DeleteRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a repository. If a specified repository was already deleted, a null repository ID is
 *
 * returned> <b>
 *
 * Deleting a repository also deletes all associated objects and metadata. After a repository is deleted, all future push
 * calls to the deleted repository
 */
DeleteRepositoryResponse * CodeCommitClient::deleteRepository(const DeleteRepositoryRequest &request)
{
    return qobject_cast<DeleteRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DescribeMergeConflictsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more merge conflicts in the attempted merge of two commit specifiers using the squash
 * or three-way merge strategy. If the merge option for the attempted merge is specified as FAST_FORWARD_MERGE, an
 * exception is
 */
DescribeMergeConflictsResponse * CodeCommitClient::describeMergeConflicts(const DescribeMergeConflictsRequest &request)
{
    return qobject_cast<DescribeMergeConflictsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DescribePullRequestEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more pull request
 */
DescribePullRequestEventsResponse * CodeCommitClient::describePullRequestEvents(const DescribePullRequestEventsRequest &request)
{
    return qobject_cast<DescribePullRequestEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * DisassociateApprovalRuleTemplateFromRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between a template and a repository so that approval rules based on the template are not
 * automatically created when pull requests are created in the specified repository. This does not delete any approval
 * rules previously created for pull requests through the template
 */
DisassociateApprovalRuleTemplateFromRepositoryResponse * CodeCommitClient::disassociateApprovalRuleTemplateFromRepository(const DisassociateApprovalRuleTemplateFromRepositoryRequest &request)
{
    return qobject_cast<DisassociateApprovalRuleTemplateFromRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * EvaluatePullRequestApprovalRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Evaluates whether a pull request has met all the conditions specified in its associated approval
 */
EvaluatePullRequestApprovalRulesResponse * CodeCommitClient::evaluatePullRequestApprovalRules(const EvaluatePullRequestApprovalRulesRequest &request)
{
    return qobject_cast<EvaluatePullRequestApprovalRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetApprovalRuleTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specified approval rule
 */
GetApprovalRuleTemplateResponse * CodeCommitClient::getApprovalRuleTemplate(const GetApprovalRuleTemplateRequest &request)
{
    return qobject_cast<GetApprovalRuleTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetBlobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the base-64 encoded content of an individual blob in a
 */
GetBlobResponse * CodeCommitClient::getBlob(const GetBlobRequest &request)
{
    return qobject_cast<GetBlobResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a repository branch, including its name and the last commit
 */
GetBranchResponse * CodeCommitClient::getBranch(const GetBranchRequest &request)
{
    return qobject_cast<GetBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetCommentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the content of a comment made on a change, file, or commit in a repository.
 *
 * </p <note>
 *
 * Reaction counts might include numbers from user identities who were deleted after the reaction was made. For a count of
 * reactions from active identities, use
 */
GetCommentResponse * CodeCommitClient::getComment(const GetCommentRequest &request)
{
    return qobject_cast<GetCommentResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetCommentReactionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about reactions to a specified comment ID. Reactions from users who have been deleted will not be
 * included in the
 */
GetCommentReactionsResponse * CodeCommitClient::getCommentReactions(const GetCommentReactionsRequest &request)
{
    return qobject_cast<GetCommentReactionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetCommentsForComparedCommitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about comments made on the comparison between two
 *
 * commits> <note>
 *
 * Reaction counts might include numbers from user identities who were deleted after the reaction was made. For a count of
 * reactions from active identities, use
 */
GetCommentsForComparedCommitResponse * CodeCommitClient::getCommentsForComparedCommit(const GetCommentsForComparedCommitRequest &request)
{
    return qobject_cast<GetCommentsForComparedCommitResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetCommentsForPullRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns comments made on a pull
 *
 * request> <note>
 *
 * Reaction counts might include numbers from user identities who were deleted after the reaction was made. For a count of
 * reactions from active identities, use
 */
GetCommentsForPullRequestResponse * CodeCommitClient::getCommentsForPullRequest(const GetCommentsForPullRequestRequest &request)
{
    return qobject_cast<GetCommentsForPullRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetCommitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a commit, including commit message and committer
 */
GetCommitResponse * CodeCommitClient::getCommit(const GetCommitRequest &request)
{
    return qobject_cast<GetCommitResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetDifferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the differences in a valid commit specifier (such as a branch, tag, HEAD, commit ID, or other
 * fully qualified reference). Results can be limited to a specified
 */
GetDifferencesResponse * CodeCommitClient::getDifferences(const GetDifferencesRequest &request)
{
    return qobject_cast<GetDifferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetFileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the base-64 encoded contents of a specified file and its
 */
GetFileResponse * CodeCommitClient::getFile(const GetFileRequest &request)
{
    return qobject_cast<GetFileResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the contents of a specified folder in a
 */
GetFolderResponse * CodeCommitClient::getFolder(const GetFolderRequest &request)
{
    return qobject_cast<GetFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetMergeCommitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specified merge
 */
GetMergeCommitResponse * CodeCommitClient::getMergeCommit(const GetMergeCommitRequest &request)
{
    return qobject_cast<GetMergeCommitResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetMergeConflictsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about merge conflicts between the before and after commit IDs for a pull request in a
 */
GetMergeConflictsResponse * CodeCommitClient::getMergeConflicts(const GetMergeConflictsRequest &request)
{
    return qobject_cast<GetMergeConflictsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetMergeOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the merge options available for merging two specified branches. For details about why a merge
 * option is not available, use GetMergeConflicts or
 */
GetMergeOptionsResponse * CodeCommitClient::getMergeOptions(const GetMergeOptionsRequest &request)
{
    return qobject_cast<GetMergeOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetPullRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a pull request in a specified
 */
GetPullRequestResponse * CodeCommitClient::getPullRequest(const GetPullRequestRequest &request)
{
    return qobject_cast<GetPullRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetPullRequestApprovalStatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the approval states for a specified pull request. Approval states only apply to pull requests
 * that have one or more approval rules applied to
 */
GetPullRequestApprovalStatesResponse * CodeCommitClient::getPullRequestApprovalStates(const GetPullRequestApprovalStatesRequest &request)
{
    return qobject_cast<GetPullRequestApprovalStatesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetPullRequestOverrideStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about whether approval rules have been set aside (overridden) for a pull request, and if so, the
 * Amazon Resource Name (ARN) of the user or identity that overrode the rules and their requirements for the pull
 */
GetPullRequestOverrideStateResponse * CodeCommitClient::getPullRequestOverrideState(const GetPullRequestOverrideStateRequest &request)
{
    return qobject_cast<GetPullRequestOverrideStateResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a
 *
 * repository> <note>
 *
 * The description field for a repository accepts all HTML characters and all valid Unicode characters. Applications that
 * do not HTML-encode the description and display it in a webpage can expose users to potentially malicious code. Make sure
 * that you HTML-encode the description field in any application that uses this API to display the repository description
 * on a
 */
GetRepositoryResponse * CodeCommitClient::getRepository(const GetRepositoryRequest &request)
{
    return qobject_cast<GetRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * GetRepositoryTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about triggers configured for a
 */
GetRepositoryTriggersResponse * CodeCommitClient::getRepositoryTriggers(const GetRepositoryTriggersRequest &request)
{
    return qobject_cast<GetRepositoryTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListApprovalRuleTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all approval rule templates in the specified AWS Region in your AWS account. If an AWS Region is not specified,
 * the AWS Region where you are signed in is
 */
ListApprovalRuleTemplatesResponse * CodeCommitClient::listApprovalRuleTemplates(const ListApprovalRuleTemplatesRequest &request)
{
    return qobject_cast<ListApprovalRuleTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListAssociatedApprovalRuleTemplatesForRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all approval rule templates that are associated with a specified
 */
ListAssociatedApprovalRuleTemplatesForRepositoryResponse * CodeCommitClient::listAssociatedApprovalRuleTemplatesForRepository(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest &request)
{
    return qobject_cast<ListAssociatedApprovalRuleTemplatesForRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListBranchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more branches in a
 */
ListBranchesResponse * CodeCommitClient::listBranches(const ListBranchesRequest &request)
{
    return qobject_cast<ListBranchesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListPullRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of pull requests for a specified repository. The return list can be refined by pull request status or
 * pull request author
 */
ListPullRequestsResponse * CodeCommitClient::listPullRequests(const ListPullRequestsRequest &request)
{
    return qobject_cast<ListPullRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more
 */
ListRepositoriesResponse * CodeCommitClient::listRepositories(const ListRepositoriesRequest &request)
{
    return qobject_cast<ListRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListRepositoriesForApprovalRuleTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all repositories associated with the specified approval rule
 */
ListRepositoriesForApprovalRuleTemplateResponse * CodeCommitClient::listRepositoriesForApprovalRuleTemplate(const ListRepositoriesForApprovalRuleTemplateRequest &request)
{
    return qobject_cast<ListRepositoriesForApprovalRuleTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about AWS tags for a specified Amazon Resource Name (ARN) in AWS CodeCommit. For a list of valid
 * resources in AWS CodeCommit, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
 * Resources and Operations</a> in the<i> AWS CodeCommit User
 */
ListTagsForResourceResponse * CodeCommitClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * MergeBranchesByFastForwardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Merges two branches using the fast-forward merge
 */
MergeBranchesByFastForwardResponse * CodeCommitClient::mergeBranchesByFastForward(const MergeBranchesByFastForwardRequest &request)
{
    return qobject_cast<MergeBranchesByFastForwardResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * MergeBranchesBySquashResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Merges two branches using the squash merge
 */
MergeBranchesBySquashResponse * CodeCommitClient::mergeBranchesBySquash(const MergeBranchesBySquashRequest &request)
{
    return qobject_cast<MergeBranchesBySquashResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * MergeBranchesByThreeWayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Merges two specified branches using the three-way merge
 */
MergeBranchesByThreeWayResponse * CodeCommitClient::mergeBranchesByThreeWay(const MergeBranchesByThreeWayRequest &request)
{
    return qobject_cast<MergeBranchesByThreeWayResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * MergePullRequestByFastForwardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to merge the source commit of a pull request into the specified destination branch for that pull request at the
 * specified commit using the fast-forward merge strategy. If the merge is successful, it closes the pull
 */
MergePullRequestByFastForwardResponse * CodeCommitClient::mergePullRequestByFastForward(const MergePullRequestByFastForwardRequest &request)
{
    return qobject_cast<MergePullRequestByFastForwardResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * MergePullRequestBySquashResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to merge the source commit of a pull request into the specified destination branch for that pull request at the
 * specified commit using the squash merge strategy. If the merge is successful, it closes the pull
 */
MergePullRequestBySquashResponse * CodeCommitClient::mergePullRequestBySquash(const MergePullRequestBySquashRequest &request)
{
    return qobject_cast<MergePullRequestBySquashResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * MergePullRequestByThreeWayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to merge the source commit of a pull request into the specified destination branch for that pull request at the
 * specified commit using the three-way merge strategy. If the merge is successful, it closes the pull
 */
MergePullRequestByThreeWayResponse * CodeCommitClient::mergePullRequestByThreeWay(const MergePullRequestByThreeWayRequest &request)
{
    return qobject_cast<MergePullRequestByThreeWayResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * OverridePullRequestApprovalRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets aside (overrides) all approval rule requirements for a specified pull
 */
OverridePullRequestApprovalRulesResponse * CodeCommitClient::overridePullRequestApprovalRules(const OverridePullRequestApprovalRulesRequest &request)
{
    return qobject_cast<OverridePullRequestApprovalRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * PostCommentForComparedCommitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Posts a comment on the comparison between two
 */
PostCommentForComparedCommitResponse * CodeCommitClient::postCommentForComparedCommit(const PostCommentForComparedCommitRequest &request)
{
    return qobject_cast<PostCommentForComparedCommitResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * PostCommentForPullRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Posts a comment on a pull
 */
PostCommentForPullRequestResponse * CodeCommitClient::postCommentForPullRequest(const PostCommentForPullRequestRequest &request)
{
    return qobject_cast<PostCommentForPullRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * PostCommentReplyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Posts a comment in reply to an existing comment on a comparison between commits or a pull
 */
PostCommentReplyResponse * CodeCommitClient::postCommentReply(const PostCommentReplyRequest &request)
{
    return qobject_cast<PostCommentReplyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * PutCommentReactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates a reaction to a specified comment for the user whose identity is used to make the request. You can only
 * add or update a reaction for yourself. You cannot add, modify, or delete a reaction for another
 */
PutCommentReactionResponse * CodeCommitClient::putCommentReaction(const PutCommentReactionRequest &request)
{
    return qobject_cast<PutCommentReactionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * PutFileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates a file in a branch in an AWS CodeCommit repository, and generates a commit for the addition in the
 * specified
 */
PutFileResponse * CodeCommitClient::putFile(const PutFileRequest &request)
{
    return qobject_cast<PutFileResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * PutRepositoryTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces all triggers for a repository. Used to create or delete
 */
PutRepositoryTriggersResponse * CodeCommitClient::putRepositoryTriggers(const PutRepositoryTriggersRequest &request)
{
    return qobject_cast<PutRepositoryTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for a resource in AWS CodeCommit. For a list of valid resources in AWS CodeCommit, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
 * Resources and Operations</a> in the <i>AWS CodeCommit User
 */
TagResourceResponse * CodeCommitClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * TestRepositoryTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests the functionality of repository triggers by sending information to the trigger target. If real data is available
 * in the repository, the test sends data from the last commit. If no data is available, sample data is
 */
TestRepositoryTriggersResponse * CodeCommitClient::testRepositoryTriggers(const TestRepositoryTriggersRequest &request)
{
    return qobject_cast<TestRepositoryTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags for a resource in AWS CodeCommit. For a list of valid resources in AWS CodeCommit, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
 * Resources and Operations</a> in the <i>AWS CodeCommit User
 */
UntagResourceResponse * CodeCommitClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateApprovalRuleTemplateContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the content of an approval rule template. You can change the number of required approvals, the membership of the
 * approval rule, and whether an approval pool is
 */
UpdateApprovalRuleTemplateContentResponse * CodeCommitClient::updateApprovalRuleTemplateContent(const UpdateApprovalRuleTemplateContentRequest &request)
{
    return qobject_cast<UpdateApprovalRuleTemplateContentResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateApprovalRuleTemplateDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description for a specified approval rule
 */
UpdateApprovalRuleTemplateDescriptionResponse * CodeCommitClient::updateApprovalRuleTemplateDescription(const UpdateApprovalRuleTemplateDescriptionRequest &request)
{
    return qobject_cast<UpdateApprovalRuleTemplateDescriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateApprovalRuleTemplateNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of a specified approval rule
 */
UpdateApprovalRuleTemplateNameResponse * CodeCommitClient::updateApprovalRuleTemplateName(const UpdateApprovalRuleTemplateNameRequest &request)
{
    return qobject_cast<UpdateApprovalRuleTemplateNameResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateCommentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the contents of a
 */
UpdateCommentResponse * CodeCommitClient::updateComment(const UpdateCommentRequest &request)
{
    return qobject_cast<UpdateCommentResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateDefaultBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets or changes the default branch name for the specified
 *
 * repository> <note>
 *
 * If you use this operation to change the default branch name to the current default branch name, a success message is
 * returned even though the default branch did not
 */
UpdateDefaultBranchResponse * CodeCommitClient::updateDefaultBranch(const UpdateDefaultBranchRequest &request)
{
    return qobject_cast<UpdateDefaultBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdatePullRequestApprovalRuleContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the structure of an approval rule created specifically for a pull request. For example, you can change the
 * number of required approvers and the approval pool for approvers.
 */
UpdatePullRequestApprovalRuleContentResponse * CodeCommitClient::updatePullRequestApprovalRuleContent(const UpdatePullRequestApprovalRuleContentRequest &request)
{
    return qobject_cast<UpdatePullRequestApprovalRuleContentResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdatePullRequestApprovalStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the state of a user's approval on a pull request. The user is derived from the signed-in account when the
 * request is
 */
UpdatePullRequestApprovalStateResponse * CodeCommitClient::updatePullRequestApprovalState(const UpdatePullRequestApprovalStateRequest &request)
{
    return qobject_cast<UpdatePullRequestApprovalStateResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdatePullRequestDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the contents of the description of a pull
 */
UpdatePullRequestDescriptionResponse * CodeCommitClient::updatePullRequestDescription(const UpdatePullRequestDescriptionRequest &request)
{
    return qobject_cast<UpdatePullRequestDescriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdatePullRequestStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of a pull request.
 */
UpdatePullRequestStatusResponse * CodeCommitClient::updatePullRequestStatus(const UpdatePullRequestStatusRequest &request)
{
    return qobject_cast<UpdatePullRequestStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdatePullRequestTitleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the title of a pull
 */
UpdatePullRequestTitleResponse * CodeCommitClient::updatePullRequestTitle(const UpdatePullRequestTitleRequest &request)
{
    return qobject_cast<UpdatePullRequestTitleResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateRepositoryDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets or changes the comment or description for a
 *
 * repository> <note>
 *
 * The description field for a repository accepts all HTML characters and all valid Unicode characters. Applications that
 * do not HTML-encode the description and display it in a webpage can expose users to potentially malicious code. Make sure
 * that you HTML-encode the description field in any application that uses this API to display the repository description
 * on a
 */
UpdateRepositoryDescriptionResponse * CodeCommitClient::updateRepositoryDescription(const UpdateRepositoryDescriptionRequest &request)
{
    return qobject_cast<UpdateRepositoryDescriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeCommitClient service, and returns a pointer to an
 * UpdateRepositoryNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Renames a repository. The repository name must be unique across the calling AWS account. Repository names are limited to
 * 100 alphanumeric, dash, and underscore characters, and cannot include certain characters. The suffix .git is prohibited.
 * For more information about the limits on repository names, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a> in the AWS CodeCommit User
 */
UpdateRepositoryNameResponse * CodeCommitClient::updateRepositoryName(const UpdateRepositoryNameRequest &request)
{
    return qobject_cast<UpdateRepositoryNameResponse *>(send(request));
}

/*!
 * \class QtAws::CodeCommit::CodeCommitClientPrivate
 * \brief The CodeCommitClientPrivate class provides private implementation for CodeCommitClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeCommit
 */

/*!
 * Constructs a CodeCommitClientPrivate object with public implementation \a q.
 */
CodeCommitClientPrivate::CodeCommitClientPrivate(CodeCommitClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeCommit
} // namespace QtAws
