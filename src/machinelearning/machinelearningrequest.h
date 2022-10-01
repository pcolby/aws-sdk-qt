// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACHINELEARNINGREQUEST_H
#define QTAWS_MACHINELEARNINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmachinelearningglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MachineLearning {

class MachineLearningRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT MachineLearningRequest : public QtAws::Core::AwsAbstractRequest {

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
    explicit MachineLearningRequest(MachineLearningRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MachineLearningRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
