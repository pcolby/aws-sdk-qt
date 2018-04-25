/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_MACHINELEARNINGREQUEST_H
#define QTAWS_MACHINELEARNINGREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MachineLearning {

class MachineLearningRequestPrivate;

class QTAWS_EXPORT MachineLearningRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MachineLearning.
    enum Action {
        AddTagsAction,
        CreateBatchPredictionAction,
        CreateDataSourceFromRDSAction,
        CreateDataSourceFromRedshiftAction,
        CreateDataSourceFromS3Action,
        CreateEvaluationAction,
        CreateMLModelAction,
        CreateRealtimeEndpointAction,
        DeleteBatchPredictionAction,
        DeleteDataSourceAction,
        DeleteEvaluationAction,
        DeleteMLModelAction,
        DeleteRealtimeEndpointAction,
        DeleteTagsAction,
        DescribeBatchPredictionsAction,
        DescribeDataSourcesAction,
        DescribeEvaluationsAction,
        DescribeMLModelsAction,
        DescribeTagsAction,
        GetBatchPredictionAction,
        GetDataSourceAction,
        GetEvaluationAction,
        GetMLModelAction,
        PredictAction,
        UpdateBatchPredictionAction,
        UpdateDataSourceAction,
        UpdateEvaluationAction,
        UpdateMLModelAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MachineLearningRequest(const Action action);
    MachineLearningRequest(const MachineLearningRequest &other);
    MachineLearningRequest &operator=(const MachineLearningRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MachineLearningRequest &other) const;


protected:
    /// @cond internal
    MachineLearningRequest(MachineLearningRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(MachineLearningRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
