/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CODECOMMITREQUEST_H
#define QTAWS_CODECOMMITREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeCommit {

class CodeCommitRequestPrivate;

class QTAWS_EXPORT CodeCommitRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeCommit.
    enum Action {
        BatchGetRepositoriesAction,
        CreateBranchAction,
        CreatePullRequestAction,
        CreateRepositoryAction,
        DeleteBranchAction,
        DeleteCommentContentAction,
        DeleteRepositoryAction,
        DescribePullRequestEventsAction,
        GetBlobAction,
        GetBranchAction,
        GetCommentAction,
        GetCommentsForComparedCommitAction,
        GetCommentsForPullRequestAction,
        GetCommitAction,
        GetDifferencesAction,
        GetMergeConflictsAction,
        GetPullRequestAction,
        GetRepositoryAction,
        GetRepositoryTriggersAction,
        ListBranchesAction,
        ListPullRequestsAction,
        ListRepositoriesAction,
        MergePullRequestByFastForwardAction,
        PostCommentForComparedCommitAction,
        PostCommentForPullRequestAction,
        PostCommentReplyAction,
        PutFileAction,
        PutRepositoryTriggersAction,
        TestRepositoryTriggersAction,
        UpdateCommentAction,
        UpdateDefaultBranchAction,
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
    CodeCommitRequest(CodeCommitRequestPrivate * const d);
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
