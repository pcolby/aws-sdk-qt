// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTEXPLORERREQUEST_H
#define QTAWS_COSTEXPLORERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscostexplorerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CostExplorer {

class CostExplorerRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT CostExplorerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CostExplorer.
    enum Action {
        CreateAnomalyMonitorAction,
        CreateAnomalySubscriptionAction,
        CreateCostCategoryDefinitionAction,
        DeleteAnomalyMonitorAction,
        DeleteAnomalySubscriptionAction,
        DeleteCostCategoryDefinitionAction,
        DescribeCostCategoryDefinitionAction,
        GetAnomaliesAction,
        GetAnomalyMonitorsAction,
        GetAnomalySubscriptionsAction,
        GetCostAndUsageAction,
        GetCostAndUsageWithResourcesAction,
        GetCostCategoriesAction,
        GetCostForecastAction,
        GetDimensionValuesAction,
        GetReservationCoverageAction,
        GetReservationPurchaseRecommendationAction,
        GetReservationUtilizationAction,
        GetRightsizingRecommendationAction,
        GetSavingsPlansCoverageAction,
        GetSavingsPlansPurchaseRecommendationAction,
        GetSavingsPlansUtilizationAction,
        GetSavingsPlansUtilizationDetailsAction,
        GetTagsAction,
        GetUsageForecastAction,
        ListCostAllocationTagsAction,
        ListCostCategoryDefinitionsAction,
        ListTagsForResourceAction,
        ProvideAnomalyFeedbackAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAnomalyMonitorAction,
        UpdateAnomalySubscriptionAction,
        UpdateCostAllocationTagsStatusAction,
        UpdateCostCategoryDefinitionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CostExplorerRequest(const Action action);
    CostExplorerRequest(const CostExplorerRequest &other);
    CostExplorerRequest &operator=(const CostExplorerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CostExplorerRequest &other) const;


protected:
    /// @cond internal
    explicit CostExplorerRequest(CostExplorerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CostExplorerRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
