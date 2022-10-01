// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODECOMMITREQUEST_H
#define QTAWS_CODECOMMITREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodecommitglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeCommit {

class CodeCommitRequestPrivate;

class QTAWSCODECOMMIT_EXPORT CodeCommitRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeCommit.
    enum Action {
        AssociateApprovalRuleTemplateWithRepositoryAction,
        BatchAssociateApprovalRuleTemplateWithRepositoriesAction,
        BatchDescribeMergeConflictsAction,
        BatchDisassociateApprovalRuleTemplateFromRepositoriesAction,
        BatchGetCommitsAction,
        BatchGetRepositoriesAction,
        CreateApprovalRuleTemplateAction,
        CreateBranchAction,
        CreateCommitAction,
        CreatePullRequestAction,
        CreatePullRequestApprovalRuleAction,
        CreateRepositoryAction,
        CreateUnreferencedMergeCommitAction,
        DeleteApprovalRuleTemplateAction,
        DeleteBranchAction,
        DeleteCommentContentAction,
        DeleteFileAction,
        DeletePullRequestApprovalRuleAction,
        DeleteRepositoryAction,
        DescribeMergeConflictsAction,
        DescribePullRequestEventsAction,
        DisassociateApprovalRuleTemplateFromRepositoryAction,
        EvaluatePullRequestApprovalRulesAction,
        GetApprovalRuleTemplateAction,
        GetBlobAction,
        GetBranchAction,
        GetCommentAction,
        GetCommentReactionsAction,
        GetCommentsForComparedCommitAction,
        GetCommentsForPullRequestAction,
        GetCommitAction,
        GetDifferencesAction,
        GetFileAction,
        GetFolderAction,
        GetMergeCommitAction,
        GetMergeConflictsAction,
        GetMergeOptionsAction,
        GetPullRequestAction,
        GetPullRequestApprovalStatesAction,
        GetPullRequestOverrideStateAction,
        GetRepositoryAction,
        GetRepositoryTriggersAction,
        ListApprovalRuleTemplatesAction,
        ListAssociatedApprovalRuleTemplatesForRepositoryAction,
        ListBranchesAction,
        ListPullRequestsAction,
        ListRepositoriesAction,
        ListRepositoriesForApprovalRuleTemplateAction,
        ListTagsForResourceAction,
        MergeBranchesByFastForwardAction,
        MergeBranchesBySquashAction,
        MergeBranchesByThreeWayAction,
        MergePullRequestByFastForwardAction,
        MergePullRequestBySquashAction,
        MergePullRequestByThreeWayAction,
        OverridePullRequestApprovalRulesAction,
        PostCommentForComparedCommitAction,
        PostCommentForPullRequestAction,
        PostCommentReplyAction,
        PutCommentReactionAction,
        PutFileAction,
        PutRepositoryTriggersAction,
        TagResourceAction,
        TestRepositoryTriggersAction,
        UntagResourceAction,
        UpdateApprovalRuleTemplateContentAction,
        UpdateApprovalRuleTemplateDescriptionAction,
        UpdateApprovalRuleTemplateNameAction,
        UpdateCommentAction,
        UpdateDefaultBranchAction,
        UpdatePullRequestApprovalRuleContentAction,
        UpdatePullRequestApprovalStateAction,
        UpdatePullRequestDescriptionAction,
        UpdatePullRequestStatusAction,
        UpdatePullRequestTitleAction,
        UpdateRepositoryDescriptionAction,
        UpdateRepositoryNameAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeCommitRequest(const Action action);
    CodeCommitRequest(const CodeCommitRequest &other);
    CodeCommitRequest &operator=(const CodeCommitRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeCommitRequest &other) const;


protected:
    /// @cond internal
    explicit CodeCommitRequest(CodeCommitRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
