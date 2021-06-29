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
    CloudWatchLogsRequestPrivate * const d_ptr; ///< Internal d-pointer.
    CloudWatchLogsRequest(CloudWatchLogsRequestPrivate * const d);
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
