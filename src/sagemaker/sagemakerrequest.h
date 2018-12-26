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
        CreateAlgorithmAction,
        CreateCodeRepositoryAction,
        CreateCompilationJobAction,
        CreateEndpointAction,
        CreateEndpointConfigAction,
        CreateHyperParameterTuningJobAction,
        CreateLabelingJobAction,
        CreateModelAction,
        CreateModelPackageAction,
        CreateNotebookInstanceAction,
        CreateNotebookInstanceLifecycleConfigAction,
        CreatePresignedNotebookInstanceUrlAction,
        CreateTrainingJobAction,
        CreateTransformJobAction,
        CreateWorkteamAction,
        DeleteAlgorithmAction,
        DeleteCodeRepositoryAction,
        DeleteEndpointAction,
        DeleteEndpointConfigAction,
        DeleteModelAction,
        DeleteModelPackageAction,
        DeleteNotebookInstanceAction,
        DeleteNotebookInstanceLifecycleConfigAction,
        DeleteTagsAction,
        DeleteWorkteamAction,
        DescribeAlgorithmAction,
        DescribeCodeRepositoryAction,
        DescribeCompilationJobAction,
        DescribeEndpointAction,
        DescribeEndpointConfigAction,
        DescribeHyperParameterTuningJobAction,
        DescribeLabelingJobAction,
        DescribeModelAction,
        DescribeModelPackageAction,
        DescribeNotebookInstanceAction,
        DescribeNotebookInstanceLifecycleConfigAction,
        DescribeSubscribedWorkteamAction,
        DescribeTrainingJobAction,
        DescribeTransformJobAction,
        DescribeWorkteamAction,
        GetSearchSuggestionsAction,
        ListAlgorithmsAction,
        ListCodeRepositoriesAction,
        ListCompilationJobsAction,
        ListEndpointConfigsAction,
        ListEndpointsAction,
        ListHyperParameterTuningJobsAction,
        ListLabelingJobsAction,
        ListLabelingJobsForWorkteamAction,
        ListModelPackagesAction,
        ListModelsAction,
        ListNotebookInstanceLifecycleConfigsAction,
        ListNotebookInstancesAction,
        ListSubscribedWorkteamsAction,
        ListTagsAction,
        ListTrainingJobsAction,
        ListTrainingJobsForHyperParameterTuningJobAction,
        ListTransformJobsAction,
        ListWorkteamsAction,
        RenderUiTemplateAction,
        SearchAction,
        StartNotebookInstanceAction,
        StopCompilationJobAction,
        StopHyperParameterTuningJobAction,
        StopLabelingJobAction,
        StopNotebookInstanceAction,
        StopTrainingJobAction,
        StopTransformJobAction,
        UpdateCodeRepositoryAction,
        UpdateEndpointAction,
        UpdateEndpointWeightsAndCapacitiesAction,
        UpdateNotebookInstanceAction,
        UpdateNotebookInstanceLifecycleConfigAction,
        UpdateWorkteamAction,
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
