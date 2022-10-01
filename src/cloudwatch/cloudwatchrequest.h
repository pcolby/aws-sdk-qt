// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHREQUEST_H
#define QTAWS_CLOUDWATCHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudwatchglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudWatch {

class CloudWatchRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT CloudWatchRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudWatch.
    enum Action {
        DeleteAlarmsAction,
        DeleteAnomalyDetectorAction,
        DeleteDashboardsAction,
        DeleteInsightRulesAction,
        DeleteMetricStreamAction,
        DescribeAlarmHistoryAction,
        DescribeAlarmsAction,
        DescribeAlarmsForMetricAction,
        DescribeAnomalyDetectorsAction,
        DescribeInsightRulesAction,
        DisableAlarmActionsAction,
        DisableInsightRulesAction,
        EnableAlarmActionsAction,
        EnableInsightRulesAction,
        GetDashboardAction,
        GetInsightRuleReportAction,
        GetMetricDataAction,
        GetMetricStatisticsAction,
        GetMetricStreamAction,
        GetMetricWidgetImageAction,
        ListDashboardsAction,
        ListManagedInsightRulesAction,
        ListMetricStreamsAction,
        ListMetricsAction,
        ListTagsForResourceAction,
        PutAnomalyDetectorAction,
        PutCompositeAlarmAction,
        PutDashboardAction,
        PutInsightRuleAction,
        PutManagedInsightRulesAction,
        PutMetricAlarmAction,
        PutMetricDataAction,
        PutMetricStreamAction,
        SetAlarmStateAction,
        StartMetricStreamsAction,
        StopMetricStreamsAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudWatchRequest(const Action action);
    CloudWatchRequest(const CloudWatchRequest &other);
    CloudWatchRequest &operator=(const CloudWatchRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudWatchRequest &other) const;


protected:
    /// @cond internal
    explicit CloudWatchRequest(CloudWatchRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudWatchRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
