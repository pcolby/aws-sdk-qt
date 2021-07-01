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

#ifndef QTAWS_FORECASTSERVICEREQUEST_H
#define QTAWS_FORECASTSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsforecastserviceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ForecastService {

class ForecastServiceRequestPrivate;

class QTAWSFORECASTSERVICE_EXPORT ForecastServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ForecastService.
    enum Action {
        CreateDatasetAction,
        CreateDatasetGroupAction,
        CreateDatasetImportJobAction,
        CreateForecastAction,
        CreateForecastExportJobAction,
        CreatePredictorAction,
        CreatePredictorBacktestExportJobAction,
        DeleteDatasetAction,
        DeleteDatasetGroupAction,
        DeleteDatasetImportJobAction,
        DeleteForecastAction,
        DeleteForecastExportJobAction,
        DeletePredictorAction,
        DeletePredictorBacktestExportJobAction,
        DeleteResourceTreeAction,
        DescribeDatasetAction,
        DescribeDatasetGroupAction,
        DescribeDatasetImportJobAction,
        DescribeForecastAction,
        DescribeForecastExportJobAction,
        DescribePredictorAction,
        DescribePredictorBacktestExportJobAction,
        GetAccuracyMetricsAction,
        ListDatasetGroupsAction,
        ListDatasetImportJobsAction,
        ListDatasetsAction,
        ListForecastExportJobsAction,
        ListForecastsAction,
        ListPredictorBacktestExportJobsAction,
        ListPredictorsAction,
        ListTagsForResourceAction,
        StopResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasetGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ForecastServiceRequest(const Action action);
    ForecastServiceRequest(const ForecastServiceRequest &other);
    ForecastServiceRequest &operator=(const ForecastServiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ForecastServiceRequest &other) const;


protected:
    /// @cond internal
    ForecastServiceRequest(ForecastServiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForecastServiceRequest)

};

} // namespace ForecastService
} // namespace QtAws

#endif
