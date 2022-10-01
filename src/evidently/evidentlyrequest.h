// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVIDENTLYREQUEST_H
#define QTAWS_EVIDENTLYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsevidentlyglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Evidently {

class EvidentlyRequestPrivate;

class QTAWSEVIDENTLY_EXPORT EvidentlyRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Evidently.
    enum Action {
        BatchEvaluateFeatureAction,
        CreateExperimentAction,
        CreateFeatureAction,
        CreateLaunchAction,
        CreateProjectAction,
        CreateSegmentAction,
        DeleteExperimentAction,
        DeleteFeatureAction,
        DeleteLaunchAction,
        DeleteProjectAction,
        DeleteSegmentAction,
        EvaluateFeatureAction,
        GetExperimentAction,
        GetExperimentResultsAction,
        GetFeatureAction,
        GetLaunchAction,
        GetProjectAction,
        GetSegmentAction,
        ListExperimentsAction,
        ListFeaturesAction,
        ListLaunchesAction,
        ListProjectsAction,
        ListSegmentReferencesAction,
        ListSegmentsAction,
        ListTagsForResourceAction,
        PutProjectEventsAction,
        StartExperimentAction,
        StartLaunchAction,
        StopExperimentAction,
        StopLaunchAction,
        TagResourceAction,
        TestSegmentPatternAction,
        UntagResourceAction,
        UpdateExperimentAction,
        UpdateFeatureAction,
        UpdateLaunchAction,
        UpdateProjectAction,
        UpdateProjectDataDeliveryAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EvidentlyRequest(const Action action);
    EvidentlyRequest(const EvidentlyRequest &other);
    EvidentlyRequest &operator=(const EvidentlyRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EvidentlyRequest &other) const;


protected:
    /// @cond internal
    explicit EvidentlyRequest(EvidentlyRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvidentlyRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
