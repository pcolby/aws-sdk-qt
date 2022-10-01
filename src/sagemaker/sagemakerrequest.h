// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        BatchDescribeModelPackageAction,
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
        CreateEdgeDeploymentPlanAction,
        CreateEdgeDeploymentStageAction,
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
        CreateInferenceRecommendationsJobAction,
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
        CreateStudioLifecycleConfigAction,
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
        DeleteEdgeDeploymentPlanAction,
        DeleteEdgeDeploymentStageAction,
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
        DeleteStudioLifecycleConfigAction,
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
        DescribeEdgeDeploymentPlanAction,
        DescribeEdgePackagingJobAction,
        DescribeEndpointAction,
        DescribeEndpointConfigAction,
        DescribeExperimentAction,
        DescribeFeatureGroupAction,
        DescribeFeatureMetadataAction,
        DescribeFlowDefinitionAction,
        DescribeHumanTaskUiAction,
        DescribeHyperParameterTuningJobAction,
        DescribeImageAction,
        DescribeImageVersionAction,
        DescribeInferenceRecommendationsJobAction,
        DescribeLabelingJobAction,
        DescribeLineageGroupAction,
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
        DescribeStudioLifecycleConfigAction,
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
        GetLineageGroupPolicyAction,
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
        ListEdgeDeploymentPlansAction,
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
        ListInferenceRecommendationsJobsAction,
        ListLabelingJobsAction,
        ListLabelingJobsForWorkteamAction,
        ListLineageGroupsAction,
        ListModelBiasJobDefinitionsAction,
        ListModelExplainabilityJobDefinitionsAction,
        ListModelMetadataAction,
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
        ListStageDevicesAction,
        ListStudioLifecycleConfigsAction,
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
        QueryLineageAction,
        RegisterDevicesAction,
        RenderUiTemplateAction,
        RetryPipelineExecutionAction,
        SearchAction,
        SendPipelineExecutionStepFailureAction,
        SendPipelineExecutionStepSuccessAction,
        StartEdgeDeploymentStageAction,
        StartMonitoringScheduleAction,
        StartNotebookInstanceAction,
        StartPipelineExecutionAction,
        StopAutoMLJobAction,
        StopCompilationJobAction,
        StopEdgeDeploymentStageAction,
        StopEdgePackagingJobAction,
        StopHyperParameterTuningJobAction,
        StopInferenceRecommendationsJobAction,
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
        UpdateFeatureGroupAction,
        UpdateFeatureMetadataAction,
        UpdateImageAction,
        UpdateModelPackageAction,
        UpdateMonitoringScheduleAction,
        UpdateNotebookInstanceAction,
        UpdateNotebookInstanceLifecycleConfigAction,
        UpdatePipelineAction,
        UpdatePipelineExecutionAction,
        UpdateProjectAction,
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
    explicit SageMakerRequest(SageMakerRequestPrivate * const d);
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
