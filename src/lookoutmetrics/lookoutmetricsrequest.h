// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTMETRICSREQUEST_H
#define QTAWS_LOOKOUTMETRICSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslookoutmetricsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LookoutMetrics {

class LookoutMetricsRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT LookoutMetricsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LookoutMetrics.
    enum Action {
        ActivateAnomalyDetectorAction,
        BackTestAnomalyDetectorAction,
        CreateAlertAction,
        CreateAnomalyDetectorAction,
        CreateMetricSetAction,
        DeactivateAnomalyDetectorAction,
        DeleteAlertAction,
        DeleteAnomalyDetectorAction,
        DescribeAlertAction,
        DescribeAnomalyDetectionExecutionsAction,
        DescribeAnomalyDetectorAction,
        DescribeMetricSetAction,
        DetectMetricSetConfigAction,
        GetAnomalyGroupAction,
        GetDataQualityMetricsAction,
        GetFeedbackAction,
        GetSampleDataAction,
        ListAlertsAction,
        ListAnomalyDetectorsAction,
        ListAnomalyGroupRelatedMetricsAction,
        ListAnomalyGroupSummariesAction,
        ListAnomalyGroupTimeSeriesAction,
        ListMetricSetsAction,
        ListTagsForResourceAction,
        PutFeedbackAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAlertAction,
        UpdateAnomalyDetectorAction,
        UpdateMetricSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LookoutMetricsRequest(const Action action);
    LookoutMetricsRequest(const LookoutMetricsRequest &other);
    LookoutMetricsRequest &operator=(const LookoutMetricsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LookoutMetricsRequest &other) const;


protected:
    /// @cond internal
    explicit LookoutMetricsRequest(LookoutMetricsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutMetricsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
