// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROBOMAKERREQUEST_H
#define QTAWS_ROBOMAKERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrobomakerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RoboMaker {

class RoboMakerRequestPrivate;

class QTAWSROBOMAKER_EXPORT RoboMakerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RoboMaker.
    enum Action {
        BatchDeleteWorldsAction,
        BatchDescribeSimulationJobAction,
        CancelDeploymentJobAction,
        CancelSimulationJobAction,
        CancelSimulationJobBatchAction,
        CancelWorldExportJobAction,
        CancelWorldGenerationJobAction,
        CreateDeploymentJobAction,
        CreateFleetAction,
        CreateRobotAction,
        CreateRobotApplicationAction,
        CreateRobotApplicationVersionAction,
        CreateSimulationApplicationAction,
        CreateSimulationApplicationVersionAction,
        CreateSimulationJobAction,
        CreateWorldExportJobAction,
        CreateWorldGenerationJobAction,
        CreateWorldTemplateAction,
        DeleteFleetAction,
        DeleteRobotAction,
        DeleteRobotApplicationAction,
        DeleteSimulationApplicationAction,
        DeleteWorldTemplateAction,
        DeregisterRobotAction,
        DescribeDeploymentJobAction,
        DescribeFleetAction,
        DescribeRobotAction,
        DescribeRobotApplicationAction,
        DescribeSimulationApplicationAction,
        DescribeSimulationJobAction,
        DescribeSimulationJobBatchAction,
        DescribeWorldAction,
        DescribeWorldExportJobAction,
        DescribeWorldGenerationJobAction,
        DescribeWorldTemplateAction,
        GetWorldTemplateBodyAction,
        ListDeploymentJobsAction,
        ListFleetsAction,
        ListRobotApplicationsAction,
        ListRobotsAction,
        ListSimulationApplicationsAction,
        ListSimulationJobBatchesAction,
        ListSimulationJobsAction,
        ListTagsForResourceAction,
        ListWorldExportJobsAction,
        ListWorldGenerationJobsAction,
        ListWorldTemplatesAction,
        ListWorldsAction,
        RegisterRobotAction,
        RestartSimulationJobAction,
        StartSimulationJobBatchAction,
        SyncDeploymentJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateRobotApplicationAction,
        UpdateSimulationApplicationAction,
        UpdateWorldTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RoboMakerRequest(const Action action);
    RoboMakerRequest(const RoboMakerRequest &other);
    RoboMakerRequest &operator=(const RoboMakerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RoboMakerRequest &other) const;


protected:
    /// @cond internal
    explicit RoboMakerRequest(RoboMakerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RoboMakerRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
