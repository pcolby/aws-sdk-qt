// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEBUILDREQUEST_H
#define QTAWS_CODEBUILDREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodebuildglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeBuild {

class CodeBuildRequestPrivate;

class QTAWSCODEBUILD_EXPORT CodeBuildRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeBuild.
    enum Action {
        BatchDeleteBuildsAction,
        BatchGetBuildBatchesAction,
        BatchGetBuildsAction,
        BatchGetProjectsAction,
        BatchGetReportGroupsAction,
        BatchGetReportsAction,
        CreateProjectAction,
        CreateReportGroupAction,
        CreateWebhookAction,
        DeleteBuildBatchAction,
        DeleteProjectAction,
        DeleteReportAction,
        DeleteReportGroupAction,
        DeleteResourcePolicyAction,
        DeleteSourceCredentialsAction,
        DeleteWebhookAction,
        DescribeCodeCoveragesAction,
        DescribeTestCasesAction,
        GetReportGroupTrendAction,
        GetResourcePolicyAction,
        ImportSourceCredentialsAction,
        InvalidateProjectCacheAction,
        ListBuildBatchesAction,
        ListBuildBatchesForProjectAction,
        ListBuildsAction,
        ListBuildsForProjectAction,
        ListCuratedEnvironmentImagesAction,
        ListProjectsAction,
        ListReportGroupsAction,
        ListReportsAction,
        ListReportsForReportGroupAction,
        ListSharedProjectsAction,
        ListSharedReportGroupsAction,
        ListSourceCredentialsAction,
        PutResourcePolicyAction,
        RetryBuildAction,
        RetryBuildBatchAction,
        StartBuildAction,
        StartBuildBatchAction,
        StopBuildAction,
        StopBuildBatchAction,
        UpdateProjectAction,
        UpdateProjectVisibilityAction,
        UpdateReportGroupAction,
        UpdateWebhookAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeBuildRequest(const Action action);
    CodeBuildRequest(const CodeBuildRequest &other);
    CodeBuildRequest &operator=(const CodeBuildRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeBuildRequest &other) const;


protected:
    /// @cond internal
    explicit CodeBuildRequest(CodeBuildRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
