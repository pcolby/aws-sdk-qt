// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTREQUEST_H
#define QTAWS_FORECASTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsforecastglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Forecast {

class ForecastRequestPrivate;

class QTAWSFORECAST_EXPORT ForecastRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Forecast.
    enum Action {
        CreateAutoPredictorAction,
        CreateDatasetAction,
        CreateDatasetGroupAction,
        CreateDatasetImportJobAction,
        CreateExplainabilityAction,
        CreateExplainabilityExportAction,
        CreateForecastAction,
        CreateForecastExportJobAction,
        CreateMonitorAction,
        CreatePredictorAction,
        CreatePredictorBacktestExportJobAction,
        CreateWhatIfAnalysisAction,
        CreateWhatIfForecastAction,
        CreateWhatIfForecastExportAction,
        DeleteDatasetAction,
        DeleteDatasetGroupAction,
        DeleteDatasetImportJobAction,
        DeleteExplainabilityAction,
        DeleteExplainabilityExportAction,
        DeleteForecastAction,
        DeleteForecastExportJobAction,
        DeleteMonitorAction,
        DeletePredictorAction,
        DeletePredictorBacktestExportJobAction,
        DeleteResourceTreeAction,
        DeleteWhatIfAnalysisAction,
        DeleteWhatIfForecastAction,
        DeleteWhatIfForecastExportAction,
        DescribeAutoPredictorAction,
        DescribeDatasetAction,
        DescribeDatasetGroupAction,
        DescribeDatasetImportJobAction,
        DescribeExplainabilityAction,
        DescribeExplainabilityExportAction,
        DescribeForecastAction,
        DescribeForecastExportJobAction,
        DescribeMonitorAction,
        DescribePredictorAction,
        DescribePredictorBacktestExportJobAction,
        DescribeWhatIfAnalysisAction,
        DescribeWhatIfForecastAction,
        DescribeWhatIfForecastExportAction,
        GetAccuracyMetricsAction,
        ListDatasetGroupsAction,
        ListDatasetImportJobsAction,
        ListDatasetsAction,
        ListExplainabilitiesAction,
        ListExplainabilityExportsAction,
        ListForecastExportJobsAction,
        ListForecastsAction,
        ListMonitorEvaluationsAction,
        ListMonitorsAction,
        ListPredictorBacktestExportJobsAction,
        ListPredictorsAction,
        ListTagsForResourceAction,
        ListWhatIfAnalysesAction,
        ListWhatIfForecastExportsAction,
        ListWhatIfForecastsAction,
        ResumeResourceAction,
        StopResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasetGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ForecastRequest(const Action action);
    ForecastRequest(const ForecastRequest &other);
    ForecastRequest &operator=(const ForecastRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ForecastRequest &other) const;


protected:
    /// @cond internal
    explicit ForecastRequest(ForecastRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
