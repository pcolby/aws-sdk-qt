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

#include "codecommitrequest.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/*!
 * \class QtAws::CodeCommit::CodeCommitRequest
 * \brief The CodeCommitRequest class provides an interface for CodeCommit requests.
 *
 * \inmodule QtAwsCodeCommit
 */

/*!
 * \enum CodeCommitRequest::Action
 *
 * This enum describes the actions that can be performed as CodeCommit
 * requests.
 *
 * \value AssociateApprovalRuleTemplateWithRepositoryAction CodeCommit AssociateApprovalRuleTemplateWithRepository action.
 * \value BatchAssociateApprovalRuleTemplateWithRepositoriesAction CodeCommit BatchAssociateApprovalRuleTemplateWithRepositories action.
 * \value BatchDescribeMergeConflictsAction CodeCommit BatchDescribeMergeConflicts action.
 * \value BatchDisassociateApprovalRuleTemplateFromRepositoriesAction CodeCommit BatchDisassociateApprovalRuleTemplateFromRepositories action.
 * \value BatchGetCommitsAction CodeCommit BatchGetCommits action.
 * \value BatchGetRepositoriesAction CodeCommit BatchGetRepositories action.
 * \value CreateApprovalRuleTemplateAction CodeCommit CreateApprovalRuleTemplate action.
 * \value CreateBranchAction CodeCommit CreateBranch action.
 * \value CreateCommitAction CodeCommit CreateCommit action.
 * \value CreatePullRequestAction CodeCommit CreatePullRequest action.
 * \value CreatePullRequestApprovalRuleAction CodeCommit CreatePullRequestApprovalRule action.
 * \value CreateRepositoryAction CodeCommit CreateRepository action.
 * \value CreateUnreferencedMergeCommitAction CodeCommit CreateUnreferencedMergeCommit action.
 * \value DeleteApprovalRuleTemplateAction CodeCommit DeleteApprovalRuleTemplate action.
 * \value DeleteBranchAction CodeCommit DeleteBranch action.
 * \value DeleteCommentContentAction CodeCommit DeleteCommentContent action.
 * \value DeleteFileAction CodeCommit DeleteFile action.
 * \value DeletePullRequestApprovalRuleAction CodeCommit DeletePullRequestApprovalRule action.
 * \value DeleteRepositoryAction CodeCommit DeleteRepository action.
 * \value DescribeMergeConflictsAction CodeCommit DescribeMergeConflicts action.
 * \value DescribePullRequestEventsAction CodeCommit DescribePullRequestEvents action.
 * \value DisassociateApprovalRuleTemplateFromRepositoryAction CodeCommit DisassociateApprovalRuleTemplateFromRepository action.
 * \value EvaluatePullRequestApprovalRulesAction CodeCommit EvaluatePullRequestApprovalRules action.
 * \value GetApprovalRuleTemplateAction CodeCommit GetApprovalRuleTemplate action.
 * \value GetBlobAction CodeCommit GetBlob action.
 * \value GetBranchAction CodeCommit GetBranch action.
 * \value GetCommentAction CodeCommit GetComment action.
 * \value GetCommentReactionsAction CodeCommit GetCommentReactions action.
 * \value GetCommentsForComparedCommitAction CodeCommit GetCommentsForComparedCommit action.
 * \value GetCommentsForPullRequestAction CodeCommit GetCommentsForPullRequest action.
 * \value GetCommitAction CodeCommit GetCommit action.
 * \value GetDifferencesAction CodeCommit GetDifferences action.
 * \value GetFileAction CodeCommit GetFile action.
 * \value GetFolderAction CodeCommit GetFolder action.
 * \value GetMergeCommitAction CodeCommit GetMergeCommit action.
 * \value GetMergeConflictsAction CodeCommit GetMergeConflicts action.
 * \value GetMergeOptionsAction CodeCommit GetMergeOptions action.
 * \value GetPullRequestAction CodeCommit GetPullRequest action.
 * \value GetPullRequestApprovalStatesAction CodeCommit GetPullRequestApprovalStates action.
 * \value GetPullRequestOverrideStateAction CodeCommit GetPullRequestOverrideState action.
 * \value GetRepositoryAction CodeCommit GetRepository action.
 * \value GetRepositoryTriggersAction CodeCommit GetRepositoryTriggers action.
 * \value ListApprovalRuleTemplatesAction CodeCommit ListApprovalRuleTemplates action.
 * \value ListAssociatedApprovalRuleTemplatesForRepositoryAction CodeCommit ListAssociatedApprovalRuleTemplatesForRepository action.
 * \value ListBranchesAction CodeCommit ListBranches action.
 * \value ListPullRequestsAction CodeCommit ListPullRequests action.
 * \value ListRepositoriesAction CodeCommit ListRepositories action.
 * \value ListRepositoriesForApprovalRuleTemplateAction CodeCommit ListRepositoriesForApprovalRuleTemplate action.
 * \value ListTagsForResourceAction CodeCommit ListTagsForResource action.
 * \value MergeBranchesByFastForwardAction CodeCommit MergeBranchesByFastForward action.
 * \value MergeBranchesBySquashAction CodeCommit MergeBranchesBySquash action.
 * \value MergeBranchesByThreeWayAction CodeCommit MergeBranchesByThreeWay action.
 * \value MergePullRequestByFastForwardAction CodeCommit MergePullRequestByFastForward action.
 * \value MergePullRequestBySquashAction CodeCommit MergePullRequestBySquash action.
 * \value MergePullRequestByThreeWayAction CodeCommit MergePullRequestByThreeWay action.
 * \value OverridePullRequestApprovalRulesAction CodeCommit OverridePullRequestApprovalRules action.
 * \value PostCommentForComparedCommitAction CodeCommit PostCommentForComparedCommit action.
 * \value PostCommentForPullRequestAction CodeCommit PostCommentForPullRequest action.
 * \value PostCommentReplyAction CodeCommit PostCommentReply action.
 * \value PutCommentReactionAction CodeCommit PutCommentReaction action.
 * \value PutFileAction CodeCommit PutFile action.
 * \value PutRepositoryTriggersAction CodeCommit PutRepositoryTriggers action.
 * \value TagResourceAction CodeCommit TagResource action.
 * \value TestRepositoryTriggersAction CodeCommit TestRepositoryTriggers action.
 * \value UntagResourceAction CodeCommit UntagResource action.
 * \value UpdateApprovalRuleTemplateContentAction CodeCommit UpdateApprovalRuleTemplateContent action.
 * \value UpdateApprovalRuleTemplateDescriptionAction CodeCommit UpdateApprovalRuleTemplateDescription action.
 * \value UpdateApprovalRuleTemplateNameAction CodeCommit UpdateApprovalRuleTemplateName action.
 * \value UpdateCommentAction CodeCommit UpdateComment action.
 * \value UpdateDefaultBranchAction CodeCommit UpdateDefaultBranch action.
 * \value UpdatePullRequestApprovalRuleContentAction CodeCommit UpdatePullRequestApprovalRuleContent action.
 * \value UpdatePullRequestApprovalStateAction CodeCommit UpdatePullRequestApprovalState action.
 * \value UpdatePullRequestDescriptionAction CodeCommit UpdatePullRequestDescription action.
 * \value UpdatePullRequestStatusAction CodeCommit UpdatePullRequestStatus action.
 * \value UpdatePullRequestTitleAction CodeCommit UpdatePullRequestTitle action.
 * \value UpdateRepositoryDescriptionAction CodeCommit UpdateRepositoryDescription action.
 * \value UpdateRepositoryNameAction CodeCommit UpdateRepositoryName action.
 */

/*!
 * Constructs a CodeCommitRequest object for CodeCommit \a action.
 */
CodeCommitRequest::CodeCommitRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeCommitRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeCommitRequest::CodeCommitRequest(const CodeCommitRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeCommitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeCommitRequest object to be equal to \a other.
 */
CodeCommitRequest& CodeCommitRequest::operator=(const CodeCommitRequest &other)
{
    Q_D(CodeCommitRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeCommitRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeCommitRequestPrivate.
 */
CodeCommitRequest::CodeCommitRequest(CodeCommitRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodeCommit action to be performed by this request.
 */
CodeCommitRequest::Action CodeCommitRequest::action() const
{
    Q_D(const CodeCommitRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeCommit action to be performed by this request.
 */
QString CodeCommitRequest::actionString() const
{
    return CodeCommitRequestPrivate::toString(action());
}

/*!
 * Returns the CodeCommit API version implemented by this request.
 */
QString CodeCommitRequest::apiVersion() const
{
    Q_D(const CodeCommitRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeCommit action to be performed by this request to \a action.
 */
void CodeCommitRequest::setAction(const Action action)
{
    Q_D(CodeCommitRequest);
    d->action = action;
}

/*!
 * Sets the CodeCommit API version to include in this request to \a version.
 */
void CodeCommitRequest::setApiVersion(const QString &version)
{
    Q_D(CodeCommitRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool CodeCommitRequest::operator==(const CodeCommitRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeCommit queue name.
 *
 * @par From CodeCommit FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeCommit queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeCommitRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeCommitRequest::clearParameter(const QString &name)
{
    Q_D(CodeCommitRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeCommitRequest::clearParameters()
{
    Q_D(CodeCommitRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeCommitRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeCommitRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeCommitRequest::parameters() const
{
    Q_D(const CodeCommitRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeCommitRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeCommitRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeCommitRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeCommitRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeCommit request using the given
 * \a endpoint.
 *
 * This CodeCommit implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeCommitRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeCommitRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeCommit::CodeCommitRequestPrivate
 * \brief The CodeCommitRequestPrivate class provides private implementation for CodeCommitRequest.
 * \internal
 *
 * \inmodule QtAwsCodeCommit
 */

/*!
 * Constructs a CodeCommitRequestPrivate object for CodeCommit \a action,
 * with public implementation \a q.
 */
CodeCommitRequestPrivate::CodeCommitRequestPrivate(const CodeCommitRequest::Action action, CodeCommitRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-04-13"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeCommitRequest class's copy constructor.
 */
CodeCommitRequestPrivate::CodeCommitRequestPrivate(const CodeCommitRequestPrivate &other,
                                     CodeCommitRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeCommitRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeCommit service's Action
 * query parameters.
 */
QString CodeCommitRequestPrivate::toString(const CodeCommitRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeCommitRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateApprovalRuleTemplateWithRepository);
        ActionToString(BatchAssociateApprovalRuleTemplateWithRepositories);
        ActionToString(BatchDescribeMergeConflicts);
        ActionToString(BatchDisassociateApprovalRuleTemplateFromRepositories);
        ActionToString(BatchGetCommits);
        ActionToString(BatchGetRepositories);
        ActionToString(CreateApprovalRuleTemplate);
        ActionToString(CreateBranch);
        ActionToString(CreateCommit);
        ActionToString(CreatePullRequest);
        ActionToString(CreatePullRequestApprovalRule);
        ActionToString(CreateRepository);
        ActionToString(CreateUnreferencedMergeCommit);
        ActionToString(DeleteApprovalRuleTemplate);
        ActionToString(DeleteBranch);
        ActionToString(DeleteCommentContent);
        ActionToString(DeleteFile);
        ActionToString(DeletePullRequestApprovalRule);
        ActionToString(DeleteRepository);
        ActionToString(DescribeMergeConflicts);
        ActionToString(DescribePullRequestEvents);
        ActionToString(DisassociateApprovalRuleTemplateFromRepository);
        ActionToString(EvaluatePullRequestApprovalRules);
        ActionToString(GetApprovalRuleTemplate);
        ActionToString(GetBlob);
        ActionToString(GetBranch);
        ActionToString(GetComment);
        ActionToString(GetCommentReactions);
        ActionToString(GetCommentsForComparedCommit);
        ActionToString(GetCommentsForPullRequest);
        ActionToString(GetCommit);
        ActionToString(GetDifferences);
        ActionToString(GetFile);
        ActionToString(GetFolder);
        ActionToString(GetMergeCommit);
        ActionToString(GetMergeConflicts);
        ActionToString(GetMergeOptions);
        ActionToString(GetPullRequest);
        ActionToString(GetPullRequestApprovalStates);
        ActionToString(GetPullRequestOverrideState);
        ActionToString(GetRepository);
        ActionToString(GetRepositoryTriggers);
        ActionToString(ListApprovalRuleTemplates);
        ActionToString(ListAssociatedApprovalRuleTemplatesForRepository);
        ActionToString(ListBranches);
        ActionToString(ListPullRequests);
        ActionToString(ListRepositories);
        ActionToString(ListRepositoriesForApprovalRuleTemplate);
        ActionToString(ListTagsForResource);
        ActionToString(MergeBranchesByFastForward);
        ActionToString(MergeBranchesBySquash);
        ActionToString(MergeBranchesByThreeWay);
        ActionToString(MergePullRequestByFastForward);
        ActionToString(MergePullRequestBySquash);
        ActionToString(MergePullRequestByThreeWay);
        ActionToString(OverridePullRequestApprovalRules);
        ActionToString(PostCommentForComparedCommit);
        ActionToString(PostCommentForPullRequest);
        ActionToString(PostCommentReply);
        ActionToString(PutCommentReaction);
        ActionToString(PutFile);
        ActionToString(PutRepositoryTriggers);
        ActionToString(TagResource);
        ActionToString(TestRepositoryTriggers);
        ActionToString(UntagResource);
        ActionToString(UpdateApprovalRuleTemplateContent);
        ActionToString(UpdateApprovalRuleTemplateDescription);
        ActionToString(UpdateApprovalRuleTemplateName);
        ActionToString(UpdateComment);
        ActionToString(UpdateDefaultBranch);
        ActionToString(UpdatePullRequestApprovalRuleContent);
        ActionToString(UpdatePullRequestApprovalState);
        ActionToString(UpdatePullRequestDescription);
        ActionToString(UpdatePullRequestStatus);
        ActionToString(UpdatePullRequestTitle);
        ActionToString(UpdateRepositoryDescription);
        ActionToString(UpdateRepositoryName);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeCommit
} // namespace QtAws
