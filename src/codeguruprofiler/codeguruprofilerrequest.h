// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUPROFILERREQUEST_H
#define QTAWS_CODEGURUPROFILERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodeguruprofilerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeGuruProfiler {

class CodeGuruProfilerRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT CodeGuruProfilerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeGuruProfiler.
    enum Action {
        AddNotificationChannelsAction,
        BatchGetFrameMetricDataAction,
        ConfigureAgentAction,
        CreateProfilingGroupAction,
        DeleteProfilingGroupAction,
        DescribeProfilingGroupAction,
        GetFindingsReportAccountSummaryAction,
        GetNotificationConfigurationAction,
        GetPolicyAction,
        GetProfileAction,
        GetRecommendationsAction,
        ListFindingsReportsAction,
        ListProfileTimesAction,
        ListProfilingGroupsAction,
        ListTagsForResourceAction,
        PostAgentProfileAction,
        PutPermissionAction,
        RemoveNotificationChannelAction,
        RemovePermissionAction,
        SubmitFeedbackAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateProfilingGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeGuruProfilerRequest(const Action action);
    CodeGuruProfilerRequest(const CodeGuruProfilerRequest &other);
    CodeGuruProfilerRequest &operator=(const CodeGuruProfilerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeGuruProfilerRequest &other) const;


protected:
    /// @cond internal
    explicit CodeGuruProfilerRequest(CodeGuruProfilerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeGuruProfilerRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
