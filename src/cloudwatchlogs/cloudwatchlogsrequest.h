// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHLOGSREQUEST_H
#define QTAWS_CLOUDWATCHLOGSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudwatchlogsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CloudWatchLogsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudWatchLogs.
    enum Action {
        AssociateKmsKeyAction,
        CancelExportTaskAction,
        CreateExportTaskAction,
        CreateLogGroupAction,
        CreateLogStreamAction,
        DeleteDestinationAction,
        DeleteLogGroupAction,
        DeleteLogStreamAction,
        DeleteMetricFilterAction,
        DeleteQueryDefinitionAction,
        DeleteResourcePolicyAction,
        DeleteRetentionPolicyAction,
        DeleteSubscriptionFilterAction,
        DescribeDestinationsAction,
        DescribeExportTasksAction,
        DescribeLogGroupsAction,
        DescribeLogStreamsAction,
        DescribeMetricFiltersAction,
        DescribeQueriesAction,
        DescribeQueryDefinitionsAction,
        DescribeResourcePoliciesAction,
        DescribeSubscriptionFiltersAction,
        DisassociateKmsKeyAction,
        FilterLogEventsAction,
        GetLogEventsAction,
        GetLogGroupFieldsAction,
        GetLogRecordAction,
        GetQueryResultsAction,
        ListTagsLogGroupAction,
        PutDestinationAction,
        PutDestinationPolicyAction,
        PutLogEventsAction,
        PutMetricFilterAction,
        PutQueryDefinitionAction,
        PutResourcePolicyAction,
        PutRetentionPolicyAction,
        PutSubscriptionFilterAction,
        StartQueryAction,
        StopQueryAction,
        TagLogGroupAction,
        TestMetricFilterAction,
        UntagLogGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudWatchLogsRequest(const Action action);
    CloudWatchLogsRequest(const CloudWatchLogsRequest &other);
    CloudWatchLogsRequest &operator=(const CloudWatchLogsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudWatchLogsRequest &other) const;


protected:
    /// @cond internal
    explicit CloudWatchLogsRequest(CloudWatchLogsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudWatchLogsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
