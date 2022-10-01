// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPUTEOPTIMIZERREQUEST_H
#define QTAWS_COMPUTEOPTIMIZERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscomputeoptimizerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ComputeOptimizerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ComputeOptimizer.
    enum Action {
        DeleteRecommendationPreferencesAction,
        DescribeRecommendationExportJobsAction,
        ExportAutoScalingGroupRecommendationsAction,
        ExportEBSVolumeRecommendationsAction,
        ExportEC2InstanceRecommendationsAction,
        ExportLambdaFunctionRecommendationsAction,
        GetAutoScalingGroupRecommendationsAction,
        GetEBSVolumeRecommendationsAction,
        GetEC2InstanceRecommendationsAction,
        GetEC2RecommendationProjectedMetricsAction,
        GetEffectiveRecommendationPreferencesAction,
        GetEnrollmentStatusAction,
        GetEnrollmentStatusesForOrganizationAction,
        GetLambdaFunctionRecommendationsAction,
        GetRecommendationPreferencesAction,
        GetRecommendationSummariesAction,
        PutRecommendationPreferencesAction,
        UpdateEnrollmentStatusAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ComputeOptimizerRequest(const Action action);
    ComputeOptimizerRequest(const ComputeOptimizerRequest &other);
    ComputeOptimizerRequest &operator=(const ComputeOptimizerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ComputeOptimizerRequest &other) const;


protected:
    /// @cond internal
    explicit ComputeOptimizerRequest(ComputeOptimizerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComputeOptimizerRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
