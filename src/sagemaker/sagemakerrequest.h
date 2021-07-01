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

#ifndef QTAWS_SAGEMAKERREQUEST_H
#define QTAWS_SAGEMAKERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssagemakerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SageMaker {

class SageMakerRequestPrivate;

class QTAWSSAGEMAKER_EXPORT SageMakerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SageMaker.
    enum Action {
        AddAssociationAction,
        AddTagsAction,
        AssociateTrialComponentAction,
        CreateActionAction,
        CreateAlgorithmAction,
        CreateAppAction,
        CreateAppImageConfigAction,
        CreateArtifactAction,
        CreateAutoMLJobAction,
        CreateCodeRepositoryAction,
        CreateCompilationJobAction,
        CreateContextAction,
        CreateDataQualityJobDefinitionAction,
        CreateDeviceFleetAction,
        CreateDomainAction,
        CreateEdgePackagingJobAction,
        CreateEndpointAction,
        CreateEndpointConfigAction,
        CreateExperimentAction,
        CreateFeatureGroupAction,
        CreateFlowDefinitionAction,
        CreateHumanTaskUiAction,
        CreateHyperParameterTuningJobAction,
        CreateImageAction,
        CreateImageVersionAction,
        CreateLabelingJobAction,
        CreateModelAction,
        CreateModelBiasJobDefinitionAction,
        CreateModelExplainabilityJobDefinitionAction,
        CreateModelPackageAction,
        CreateModelPackageGroupAction,
        CreateModelQualityJobDefinitionAction,
        CreateMonitoringScheduleAction,
        CreateNotebookInstanceAction,
        CreateNotebookInstanceLifecycleConfigAction,
        CreatePipelineAction,
        CreatePresignedDomainUrlAction,
        CreatePresignedNotebookInstanceUrlAction,
        CreateProcessingJobAction,
        CreateProjectAction,
        CreateTrainingJobAction,
        CreateTransformJobAction,
        CreateTrialAction,
        CreateTrialComponentAction,
        CreateUserProfileAction,
        CreateWorkforceAction,
        CreateWorkteamAction,
        DeleteActionAction,
        DeleteAlgorithmAction,
        DeleteAppAction,
        DeleteAppImageConfigAction,
        DeleteArtifactAction,
        DeleteAssociationAction,
        DeleteCodeRepositoryAction,
        DeleteContextAction,
        DeleteDataQualityJobDefinitionAction,
        DeleteDeviceFleetAction,
        DeleteDomainAction,
        DeleteEndpointAction,
        DeleteEndpointConfigAction,
        DeleteExperimentAction,
        DeleteFeatureGroupAction,
        DeleteFlowDefinitionAction,
        DeleteHumanTaskUiAction,
        DeleteImageAction,
        DeleteImageVersionAction,
        DeleteModelAction,
        DeleteModelBiasJobDefinitionAction,
        DeleteModelExplainabilityJobDefinitionAction,
        DeleteModelPackageAction,
        DeleteModelPackageGroupAction,
        DeleteModelPackageGroupPolicyAction,
        DeleteModelQualityJobDefinitionAction,
        DeleteMonitoringScheduleAction,
        DeleteNotebookInstanceAction,
        DeleteNotebookInstanceLifecycleConfigAction,
        DeletePipelineAction,
        DeleteProjectAction,
        DeleteTagsAction,
        DeleteTrialAction,
        DeleteTrialComponentAction,
        DeleteUserProfileAction,
        DeleteWorkforceAction,
        DeleteWorkteamAction,
        DeregisterDevicesAction,
        DescribeActionAction,
        DescribeAlgorithmAction,
        DescribeAppAction,
        DescribeAppImageConfigAction,
        DescribeArtifactAction,
        DescribeAutoMLJobAction,
        DescribeCodeRepositoryAction,
        DescribeCompilationJobAction,
        DescribeContextAction,
        DescribeDataQualityJobDefinitionAction,
        DescribeDeviceAction,
        DescribeDeviceFleetAction,
        DescribeDomainAction,
        DescribeEdgePackagingJobAction,
        DescribeEndpointAction,
        DescribeEndpointConfigAction,
        DescribeExperimentAction,
        DescribeFeatureGroupAction,
        DescribeFlowDefinitionAction,
        DescribeHumanTaskUiAction,
        DescribeHyperParameterTuningJobAction,
        DescribeImageAction,
        DescribeImageVersionAction,
        DescribeLabelingJobAction,
        DescribeModelAction,
        DescribeModelBiasJobDefinitionAction,
        DescribeModelExplainabilityJobDefinitionAction,
        DescribeModelPackageAction,
        DescribeModelPackageGroupAction,
        DescribeModelQualityJobDefinitionAction,
        DescribeMonitoringScheduleAction,
        DescribeNotebookInstanceAction,
        DescribeNotebookInstanceLifecycleConfigAction,
        DescribePipelineAction,
        DescribePipelineDefinitionForExecutionAction,
        DescribePipelineExecutionAction,
        DescribeProcessingJobAction,
        DescribeProjectAction,
        DescribeSubscribedWorkteamAction,
        DescribeTrainingJobAction,
        DescribeTransformJobAction,
        DescribeTrialAction,
        DescribeTrialComponentAction,
        DescribeUserProfileAction,
        DescribeWorkforceAction,
        DescribeWorkteamAction,
        DisableSagemakerServicecatalogPortfolioAction,
        DisassociateTrialComponentAction,
        EnableSagemakerServicecatalogPortfolioAction,
        GetDeviceFleetReportAction,
        GetModelPackageGroupPolicyAction,
        GetSagemakerServicecatalogPortfolioStatusAction,
        GetSearchSuggestionsAction,
        ListActionsAction,
        ListAlgorithmsAction,
        ListAppImageConfigsAction,
        ListAppsAction,
        ListArtifactsAction,
        ListAssociationsAction,
        ListAutoMLJobsAction,
        ListCandidatesForAutoMLJobAction,
        ListCodeRepositoriesAction,
        ListCompilationJobsAction,
        ListContextsAction,
        ListDataQualityJobDefinitionsAction,
        ListDeviceFleetsAction,
        ListDevicesAction,
        ListDomainsAction,
        ListEdgePackagingJobsAction,
        ListEndpointConfigsAction,
        ListEndpointsAction,
        ListExperimentsAction,
        ListFeatureGroupsAction,
        ListFlowDefinitionsAction,
        ListHumanTaskUisAction,
        ListHyperParameterTuningJobsAction,
        ListImageVersionsAction,
        ListImagesAction,
        ListLabelingJobsAction,
        ListLabelingJobsForWorkteamAction,
        ListModelBiasJobDefinitionsAction,
        ListModelExplainabilityJobDefinitionsAction,
        ListModelPackageGroupsAction,
        ListModelPackagesAction,
        ListModelQualityJobDefinitionsAction,
        ListModelsAction,
        ListMonitoringExecutionsAction,
        ListMonitoringSchedulesAction,
        ListNotebookInstanceLifecycleConfigsAction,
        ListNotebookInstancesAction,
        ListPipelineExecutionStepsAction,
        ListPipelineExecutionsAction,
        ListPipelineParametersForExecutionAction,
        ListPipelinesAction,
        ListProcessingJobsAction,
        ListProjectsAction,
        ListSubscribedWorkteamsAction,
        ListTagsAction,
        ListTrainingJobsAction,
        ListTrainingJobsForHyperParameterTuningJobAction,
        ListTransformJobsAction,
        ListTrialComponentsAction,
        ListTrialsAction,
        ListUserProfilesAction,
        ListWorkforcesAction,
        ListWorkteamsAction,
        PutModelPackageGroupPolicyAction,
        RegisterDevicesAction,
        RenderUiTemplateAction,
        SearchAction,
        SendPipelineExecutionStepFailureAction,
        SendPipelineExecutionStepSuccessAction,
        StartMonitoringScheduleAction,
        StartNotebookInstanceAction,
        StartPipelineExecutionAction,
        StopAutoMLJobAction,
        StopCompilationJobAction,
        StopEdgePackagingJobAction,
        StopHyperParameterTuningJobAction,
        StopLabelingJobAction,
        StopMonitoringScheduleAction,
        StopNotebookInstanceAction,
        StopPipelineExecutionAction,
        StopProcessingJobAction,
        StopTrainingJobAction,
        StopTransformJobAction,
        UpdateActionAction,
        UpdateAppImageConfigAction,
        UpdateArtifactAction,
        UpdateCodeRepositoryAction,
        UpdateContextAction,
        UpdateDeviceFleetAction,
        UpdateDevicesAction,
        UpdateDomainAction,
        UpdateEndpointAction,
        UpdateEndpointWeightsAndCapacitiesAction,
        UpdateExperimentAction,
        UpdateImageAction,
        UpdateModelPackageAction,
        UpdateMonitoringScheduleAction,
        UpdateNotebookInstanceAction,
        UpdateNotebookInstanceLifecycleConfigAction,
        UpdatePipelineAction,
        UpdatePipelineExecutionAction,
        UpdateTrainingJobAction,
        UpdateTrialAction,
        UpdateTrialComponentAction,
        UpdateUserProfileAction,
        UpdateWorkforceAction,
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
