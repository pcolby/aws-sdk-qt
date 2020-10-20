/*
    Copyright 2013-2020 Paul Colby

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

#include "mergepullrequestbysquashrequest.h"
#include "mergepullrequestbysquashrequest_p.h"
#include "mergepullrequestbysquashresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/*!
 * \class QtAws::CodeCommit::MergePullRequestBySquashRequest
 * \brief The MergePullRequestBySquashRequest class provides an interface for CodeCommit MergePullRequestBySquash requests.
 *
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
 *  users of that repository will be able to access it until you send them the new HTTPS or SSH URL to
 * 
 *  use> </li> </ul>
 * 
 *  Branches, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>CreateBranch</a>, which creates a new branch in a specified
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
 *  <a>GetBlob</a>, which returns the base-64 encoded content of an individual Git blob object within a
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
 *  <a>CreateCommit</a>, which creates a commit for changes to a
 * 
 *  repository> </li> <li>
 * 
 *  <a>GetCommit</a>, which returns information about a commit, including commit messages and author and committer
 * 
 *  information> </li> <li>
 * 
 *  <a>GetDifferences</a>, which returns information about the differences in a valid commit specifier (such as a branch,
 *  tag, HEAD, commit ID or other fully qualified
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
 *  <a>DescribePullRequestEvents</a>, which returns information about one or more pull request
 * 
 *  events> </li> <li>
 * 
 *  <a>GetCommentsForPullRequest</a>, which returns information about comments on a specified pull
 * 
 *  request> </li> <li>
 * 
 *  <a>GetPullRequest</a>, which returns information about a specified pull
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
 *  <a>PostCommentForPullRequest</a>, which posts a comment to a pull request at the specified line, file, or
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
 *
 * \sa CodeCommitClient::mergePullRequestBySquash
 */

/*!
 * Constructs a copy of \a other.
 */
MergePullRequestBySquashRequest::MergePullRequestBySquashRequest(const MergePullRequestBySquashRequest &other)
    : CodeCommitRequest(new MergePullRequestBySquashRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MergePullRequestBySquashRequest object.
 */
MergePullRequestBySquashRequest::MergePullRequestBySquashRequest()
    : CodeCommitRequest(new MergePullRequestBySquashRequestPrivate(CodeCommitRequest::MergePullRequestBySquashAction, this))
{

}

/*!
 * \reimp
 */
bool MergePullRequestBySquashRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MergePullRequestBySquashResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MergePullRequestBySquashRequest::response(QNetworkReply * const reply) const
{
    return new MergePullRequestBySquashResponse(*this, reply);
}

/*!
 * \class QtAws::CodeCommit::MergePullRequestBySquashRequestPrivate
 * \brief The MergePullRequestBySquashRequestPrivate class provides private implementation for MergePullRequestBySquashRequest.
 * \internal
 *
 * \inmodule QtAwsCodeCommit
 */

/*!
 * Constructs a MergePullRequestBySquashRequestPrivate object for CodeCommit \a action,
 * with public implementation \a q.
 */
MergePullRequestBySquashRequestPrivate::MergePullRequestBySquashRequestPrivate(
    const CodeCommitRequest::Action action, MergePullRequestBySquashRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MergePullRequestBySquashRequest
 * class' copy constructor.
 */
MergePullRequestBySquashRequestPrivate::MergePullRequestBySquashRequestPrivate(
    const MergePullRequestBySquashRequestPrivate &other, MergePullRequestBySquashRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
