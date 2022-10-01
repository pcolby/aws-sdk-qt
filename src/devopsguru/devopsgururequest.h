// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVOPSGURUREQUEST_H
#define QTAWS_DEVOPSGURUREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdevopsguruglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DevOpsGuru {

class DevOpsGuruRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DevOpsGuruRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DevOpsGuru.
    enum Action {
        AddNotificationChannelAction,
        DeleteInsightAction,
        DescribeAccountHealthAction,
        DescribeAccountOverviewAction,
        DescribeAnomalyAction,
        DescribeEventSourcesConfigAction,
        DescribeFeedbackAction,
        DescribeInsightAction,
        DescribeOrganizationHealthAction,
        DescribeOrganizationOverviewAction,
        DescribeOrganizationResourceCollectionHealthAction,
        DescribeResourceCollectionHealthAction,
        DescribeServiceIntegrationAction,
        GetCostEstimationAction,
        GetResourceCollectionAction,
        ListAnomaliesForInsightAction,
        ListAnomalousLogGroupsAction,
        ListEventsAction,
        ListInsightsAction,
        ListMonitoredResourcesAction,
        ListNotificationChannelsAction,
        ListOrganizationInsightsAction,
        ListRecommendationsAction,
        PutFeedbackAction,
        RemoveNotificationChannelAction,
        SearchInsightsAction,
        SearchOrganizationInsightsAction,
        StartCostEstimationAction,
        UpdateEventSourcesConfigAction,
        UpdateResourceCollectionAction,
        UpdateServiceIntegrationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DevOpsGuruRequest(const Action action);
    DevOpsGuruRequest(const DevOpsGuruRequest &other);
    DevOpsGuruRequest &operator=(const DevOpsGuruRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DevOpsGuruRequest &other) const;


protected:
    /// @cond internal
    explicit DevOpsGuruRequest(DevOpsGuruRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DevOpsGuruRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
