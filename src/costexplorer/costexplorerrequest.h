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
        ListCostCategoryDefinitionsAction,
        ProvideAnomalyFeedbackAction,
        UpdateAnomalyMonitorAction,
        UpdateAnomalySubscriptionAction,
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
    CostExplorerRequestPrivate * const d_ptr; ///< Internal d-pointer.
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
