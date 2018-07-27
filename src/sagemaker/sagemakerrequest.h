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

#ifndef QTAWS_SAGEMAKERREQUEST_H
#define QTAWS_SAGEMAKERREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SageMaker {

class SageMakerRequestPrivate;

class QTAWS_EXPORT SageMakerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SageMaker.
    enum Action {
        AddTagsAction,
        CreateEndpointAction,
        CreateEndpointConfigAction,
        CreateHyperParameterTuningJobAction,
        CreateModelAction,
        CreateNotebookInstanceAction,
        CreateNotebookInstanceLifecycleConfigAction,
        CreatePresignedNotebookInstanceUrlAction,
        CreateTrainingJobAction,
        CreateTransformJobAction,
        DeleteEndpointAction,
        DeleteEndpointConfigAction,
        DeleteModelAction,
        DeleteNotebookInstanceAction,
        DeleteNotebookInstanceLifecycleConfigAction,
        DeleteTagsAction,
        DescribeEndpointAction,
        DescribeEndpointConfigAction,
        DescribeHyperParameterTuningJobAction,
        DescribeModelAction,
        DescribeNotebookInstanceAction,
        DescribeNotebookInstanceLifecycleConfigAction,
        DescribeTrainingJobAction,
        DescribeTransformJobAction,
        ListEndpointConfigsAction,
        ListEndpointsAction,
        ListHyperParameterTuningJobsAction,
        ListModelsAction,
        ListNotebookInstanceLifecycleConfigsAction,
        ListNotebookInstancesAction,
        ListTagsAction,
        ListTrainingJobsAction,
        ListTrainingJobsForHyperParameterTuningJobAction,
        ListTransformJobsAction,
        StartNotebookInstanceAction,
        StopHyperParameterTuningJobAction,
        StopNotebookInstanceAction,
        StopTrainingJobAction,
        StopTransformJobAction,
        UpdateEndpointAction,
        UpdateEndpointWeightsAndCapacitiesAction,
        UpdateNotebookInstanceAction,
        UpdateNotebookInstanceLifecycleConfigAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SageMakerRequest(const Action action);
    SageMakerRequest(const SageMakerRequest &other);
    SageMakerRequest &operator=(const SageMakerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SageMakerRequest &other) const;


protected:
    /// @cond internal
    SageMakerRequest(SageMakerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SageMakerRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
