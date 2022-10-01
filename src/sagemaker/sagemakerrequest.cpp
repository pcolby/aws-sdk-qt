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

#include "sagemakerrequest.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SageMakerRequest
 * \brief The SageMakerRequest class provides an interface for SageMaker requests.
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * \enum SageMakerRequest::Action
 *
 * This enum describes the actions that can be performed as SageMaker
 * requests.
 *
 * \value AddAssociationAction SageMaker AddAssociation action.
 * \value AddTagsAction SageMaker AddTags action.
 * \value AssociateTrialComponentAction SageMaker AssociateTrialComponent action.
 * \value BatchDescribeModelPackageAction SageMaker BatchDescribeModelPackage action.
 * \value CreateActionAction SageMaker CreateAction action.
 * \value CreateAlgorithmAction SageMaker CreateAlgorithm action.
 * \value CreateAppAction SageMaker CreateApp action.
 * \value CreateAppImageConfigAction SageMaker CreateAppImageConfig action.
 * \value CreateArtifactAction SageMaker CreateArtifact action.
 * \value CreateAutoMLJobAction SageMaker CreateAutoMLJob action.
 * \value CreateCodeRepositoryAction SageMaker CreateCodeRepository action.
 * \value CreateCompilationJobAction SageMaker CreateCompilationJob action.
 * \value CreateContextAction SageMaker CreateContext action.
 * \value CreateDataQualityJobDefinitionAction SageMaker CreateDataQualityJobDefinition action.
 * \value CreateDeviceFleetAction SageMaker CreateDeviceFleet action.
 * \value CreateDomainAction SageMaker CreateDomain action.
 * \value CreateEdgeDeploymentPlanAction SageMaker CreateEdgeDeploymentPlan action.
 * \value CreateEdgeDeploymentStageAction SageMaker CreateEdgeDeploymentStage action.
 * \value CreateEdgePackagingJobAction SageMaker CreateEdgePackagingJob action.
 * \value CreateEndpointAction SageMaker CreateEndpoint action.
 * \value CreateEndpointConfigAction SageMaker CreateEndpointConfig action.
 * \value CreateExperimentAction SageMaker CreateExperiment action.
 * \value CreateFeatureGroupAction SageMaker CreateFeatureGroup action.
 * \value CreateFlowDefinitionAction SageMaker CreateFlowDefinition action.
 * \value CreateHumanTaskUiAction SageMaker CreateHumanTaskUi action.
 * \value CreateHyperParameterTuningJobAction SageMaker CreateHyperParameterTuningJob action.
 * \value CreateImageAction SageMaker CreateImage action.
 * \value CreateImageVersionAction SageMaker CreateImageVersion action.
 * \value CreateInferenceRecommendationsJobAction SageMaker CreateInferenceRecommendationsJob action.
 * \value CreateLabelingJobAction SageMaker CreateLabelingJob action.
 * \value CreateModelAction SageMaker CreateModel action.
 * \value CreateModelBiasJobDefinitionAction SageMaker CreateModelBiasJobDefinition action.
 * \value CreateModelExplainabilityJobDefinitionAction SageMaker CreateModelExplainabilityJobDefinition action.
 * \value CreateModelPackageAction SageMaker CreateModelPackage action.
 * \value CreateModelPackageGroupAction SageMaker CreateModelPackageGroup action.
 * \value CreateModelQualityJobDefinitionAction SageMaker CreateModelQualityJobDefinition action.
 * \value CreateMonitoringScheduleAction SageMaker CreateMonitoringSchedule action.
 * \value CreateNotebookInstanceAction SageMaker CreateNotebookInstance action.
 * \value CreateNotebookInstanceLifecycleConfigAction SageMaker CreateNotebookInstanceLifecycleConfig action.
 * \value CreatePipelineAction SageMaker CreatePipeline action.
 * \value CreatePresignedDomainUrlAction SageMaker CreatePresignedDomainUrl action.
 * \value CreatePresignedNotebookInstanceUrlAction SageMaker CreatePresignedNotebookInstanceUrl action.
 * \value CreateProcessingJobAction SageMaker CreateProcessingJob action.
 * \value CreateProjectAction SageMaker CreateProject action.
 * \value CreateStudioLifecycleConfigAction SageMaker CreateStudioLifecycleConfig action.
 * \value CreateTrainingJobAction SageMaker CreateTrainingJob action.
 * \value CreateTransformJobAction SageMaker CreateTransformJob action.
 * \value CreateTrialAction SageMaker CreateTrial action.
 * \value CreateTrialComponentAction SageMaker CreateTrialComponent action.
 * \value CreateUserProfileAction SageMaker CreateUserProfile action.
 * \value CreateWorkforceAction SageMaker CreateWorkforce action.
 * \value CreateWorkteamAction SageMaker CreateWorkteam action.
 * \value DeleteActionAction SageMaker DeleteAction action.
 * \value DeleteAlgorithmAction SageMaker DeleteAlgorithm action.
 * \value DeleteAppAction SageMaker DeleteApp action.
 * \value DeleteAppImageConfigAction SageMaker DeleteAppImageConfig action.
 * \value DeleteArtifactAction SageMaker DeleteArtifact action.
 * \value DeleteAssociationAction SageMaker DeleteAssociation action.
 * \value DeleteCodeRepositoryAction SageMaker DeleteCodeRepository action.
 * \value DeleteContextAction SageMaker DeleteContext action.
 * \value DeleteDataQualityJobDefinitionAction SageMaker DeleteDataQualityJobDefinition action.
 * \value DeleteDeviceFleetAction SageMaker DeleteDeviceFleet action.
 * \value DeleteDomainAction SageMaker DeleteDomain action.
 * \value DeleteEdgeDeploymentPlanAction SageMaker DeleteEdgeDeploymentPlan action.
 * \value DeleteEdgeDeploymentStageAction SageMaker DeleteEdgeDeploymentStage action.
 * \value DeleteEndpointAction SageMaker DeleteEndpoint action.
 * \value DeleteEndpointConfigAction SageMaker DeleteEndpointConfig action.
 * \value DeleteExperimentAction SageMaker DeleteExperiment action.
 * \value DeleteFeatureGroupAction SageMaker DeleteFeatureGroup action.
 * \value DeleteFlowDefinitionAction SageMaker DeleteFlowDefinition action.
 * \value DeleteHumanTaskUiAction SageMaker DeleteHumanTaskUi action.
 * \value DeleteImageAction SageMaker DeleteImage action.
 * \value DeleteImageVersionAction SageMaker DeleteImageVersion action.
 * \value DeleteModelAction SageMaker DeleteModel action.
 * \value DeleteModelBiasJobDefinitionAction SageMaker DeleteModelBiasJobDefinition action.
 * \value DeleteModelExplainabilityJobDefinitionAction SageMaker DeleteModelExplainabilityJobDefinition action.
 * \value DeleteModelPackageAction SageMaker DeleteModelPackage action.
 * \value DeleteModelPackageGroupAction SageMaker DeleteModelPackageGroup action.
 * \value DeleteModelPackageGroupPolicyAction SageMaker DeleteModelPackageGroupPolicy action.
 * \value DeleteModelQualityJobDefinitionAction SageMaker DeleteModelQualityJobDefinition action.
 * \value DeleteMonitoringScheduleAction SageMaker DeleteMonitoringSchedule action.
 * \value DeleteNotebookInstanceAction SageMaker DeleteNotebookInstance action.
 * \value DeleteNotebookInstanceLifecycleConfigAction SageMaker DeleteNotebookInstanceLifecycleConfig action.
 * \value DeletePipelineAction SageMaker DeletePipeline action.
 * \value DeleteProjectAction SageMaker DeleteProject action.
 * \value DeleteStudioLifecycleConfigAction SageMaker DeleteStudioLifecycleConfig action.
 * \value DeleteTagsAction SageMaker DeleteTags action.
 * \value DeleteTrialAction SageMaker DeleteTrial action.
 * \value DeleteTrialComponentAction SageMaker DeleteTrialComponent action.
 * \value DeleteUserProfileAction SageMaker DeleteUserProfile action.
 * \value DeleteWorkforceAction SageMaker DeleteWorkforce action.
 * \value DeleteWorkteamAction SageMaker DeleteWorkteam action.
 * \value DeregisterDevicesAction SageMaker DeregisterDevices action.
 * \value DescribeActionAction SageMaker DescribeAction action.
 * \value DescribeAlgorithmAction SageMaker DescribeAlgorithm action.
 * \value DescribeAppAction SageMaker DescribeApp action.
 * \value DescribeAppImageConfigAction SageMaker DescribeAppImageConfig action.
 * \value DescribeArtifactAction SageMaker DescribeArtifact action.
 * \value DescribeAutoMLJobAction SageMaker DescribeAutoMLJob action.
 * \value DescribeCodeRepositoryAction SageMaker DescribeCodeRepository action.
 * \value DescribeCompilationJobAction SageMaker DescribeCompilationJob action.
 * \value DescribeContextAction SageMaker DescribeContext action.
 * \value DescribeDataQualityJobDefinitionAction SageMaker DescribeDataQualityJobDefinition action.
 * \value DescribeDeviceAction SageMaker DescribeDevice action.
 * \value DescribeDeviceFleetAction SageMaker DescribeDeviceFleet action.
 * \value DescribeDomainAction SageMaker DescribeDomain action.
 * \value DescribeEdgeDeploymentPlanAction SageMaker DescribeEdgeDeploymentPlan action.
 * \value DescribeEdgePackagingJobAction SageMaker DescribeEdgePackagingJob action.
 * \value DescribeEndpointAction SageMaker DescribeEndpoint action.
 * \value DescribeEndpointConfigAction SageMaker DescribeEndpointConfig action.
 * \value DescribeExperimentAction SageMaker DescribeExperiment action.
 * \value DescribeFeatureGroupAction SageMaker DescribeFeatureGroup action.
 * \value DescribeFeatureMetadataAction SageMaker DescribeFeatureMetadata action.
 * \value DescribeFlowDefinitionAction SageMaker DescribeFlowDefinition action.
 * \value DescribeHumanTaskUiAction SageMaker DescribeHumanTaskUi action.
 * \value DescribeHyperParameterTuningJobAction SageMaker DescribeHyperParameterTuningJob action.
 * \value DescribeImageAction SageMaker DescribeImage action.
 * \value DescribeImageVersionAction SageMaker DescribeImageVersion action.
 * \value DescribeInferenceRecommendationsJobAction SageMaker DescribeInferenceRecommendationsJob action.
 * \value DescribeLabelingJobAction SageMaker DescribeLabelingJob action.
 * \value DescribeLineageGroupAction SageMaker DescribeLineageGroup action.
 * \value DescribeModelAction SageMaker DescribeModel action.
 * \value DescribeModelBiasJobDefinitionAction SageMaker DescribeModelBiasJobDefinition action.
 * \value DescribeModelExplainabilityJobDefinitionAction SageMaker DescribeModelExplainabilityJobDefinition action.
 * \value DescribeModelPackageAction SageMaker DescribeModelPackage action.
 * \value DescribeModelPackageGroupAction SageMaker DescribeModelPackageGroup action.
 * \value DescribeModelQualityJobDefinitionAction SageMaker DescribeModelQualityJobDefinition action.
 * \value DescribeMonitoringScheduleAction SageMaker DescribeMonitoringSchedule action.
 * \value DescribeNotebookInstanceAction SageMaker DescribeNotebookInstance action.
 * \value DescribeNotebookInstanceLifecycleConfigAction SageMaker DescribeNotebookInstanceLifecycleConfig action.
 * \value DescribePipelineAction SageMaker DescribePipeline action.
 * \value DescribePipelineDefinitionForExecutionAction SageMaker DescribePipelineDefinitionForExecution action.
 * \value DescribePipelineExecutionAction SageMaker DescribePipelineExecution action.
 * \value DescribeProcessingJobAction SageMaker DescribeProcessingJob action.
 * \value DescribeProjectAction SageMaker DescribeProject action.
 * \value DescribeStudioLifecycleConfigAction SageMaker DescribeStudioLifecycleConfig action.
 * \value DescribeSubscribedWorkteamAction SageMaker DescribeSubscribedWorkteam action.
 * \value DescribeTrainingJobAction SageMaker DescribeTrainingJob action.
 * \value DescribeTransformJobAction SageMaker DescribeTransformJob action.
 * \value DescribeTrialAction SageMaker DescribeTrial action.
 * \value DescribeTrialComponentAction SageMaker DescribeTrialComponent action.
 * \value DescribeUserProfileAction SageMaker DescribeUserProfile action.
 * \value DescribeWorkforceAction SageMaker DescribeWorkforce action.
 * \value DescribeWorkteamAction SageMaker DescribeWorkteam action.
 * \value DisableSagemakerServicecatalogPortfolioAction SageMaker DisableSagemakerServicecatalogPortfolio action.
 * \value DisassociateTrialComponentAction SageMaker DisassociateTrialComponent action.
 * \value EnableSagemakerServicecatalogPortfolioAction SageMaker EnableSagemakerServicecatalogPortfolio action.
 * \value GetDeviceFleetReportAction SageMaker GetDeviceFleetReport action.
 * \value GetLineageGroupPolicyAction SageMaker GetLineageGroupPolicy action.
 * \value GetModelPackageGroupPolicyAction SageMaker GetModelPackageGroupPolicy action.
 * \value GetSagemakerServicecatalogPortfolioStatusAction SageMaker GetSagemakerServicecatalogPortfolioStatus action.
 * \value GetSearchSuggestionsAction SageMaker GetSearchSuggestions action.
 * \value ListActionsAction SageMaker ListActions action.
 * \value ListAlgorithmsAction SageMaker ListAlgorithms action.
 * \value ListAppImageConfigsAction SageMaker ListAppImageConfigs action.
 * \value ListAppsAction SageMaker ListApps action.
 * \value ListArtifactsAction SageMaker ListArtifacts action.
 * \value ListAssociationsAction SageMaker ListAssociations action.
 * \value ListAutoMLJobsAction SageMaker ListAutoMLJobs action.
 * \value ListCandidatesForAutoMLJobAction SageMaker ListCandidatesForAutoMLJob action.
 * \value ListCodeRepositoriesAction SageMaker ListCodeRepositories action.
 * \value ListCompilationJobsAction SageMaker ListCompilationJobs action.
 * \value ListContextsAction SageMaker ListContexts action.
 * \value ListDataQualityJobDefinitionsAction SageMaker ListDataQualityJobDefinitions action.
 * \value ListDeviceFleetsAction SageMaker ListDeviceFleets action.
 * \value ListDevicesAction SageMaker ListDevices action.
 * \value ListDomainsAction SageMaker ListDomains action.
 * \value ListEdgeDeploymentPlansAction SageMaker ListEdgeDeploymentPlans action.
 * \value ListEdgePackagingJobsAction SageMaker ListEdgePackagingJobs action.
 * \value ListEndpointConfigsAction SageMaker ListEndpointConfigs action.
 * \value ListEndpointsAction SageMaker ListEndpoints action.
 * \value ListExperimentsAction SageMaker ListExperiments action.
 * \value ListFeatureGroupsAction SageMaker ListFeatureGroups action.
 * \value ListFlowDefinitionsAction SageMaker ListFlowDefinitions action.
 * \value ListHumanTaskUisAction SageMaker ListHumanTaskUis action.
 * \value ListHyperParameterTuningJobsAction SageMaker ListHyperParameterTuningJobs action.
 * \value ListImageVersionsAction SageMaker ListImageVersions action.
 * \value ListImagesAction SageMaker ListImages action.
 * \value ListInferenceRecommendationsJobsAction SageMaker ListInferenceRecommendationsJobs action.
 * \value ListLabelingJobsAction SageMaker ListLabelingJobs action.
 * \value ListLabelingJobsForWorkteamAction SageMaker ListLabelingJobsForWorkteam action.
 * \value ListLineageGroupsAction SageMaker ListLineageGroups action.
 * \value ListModelBiasJobDefinitionsAction SageMaker ListModelBiasJobDefinitions action.
 * \value ListModelExplainabilityJobDefinitionsAction SageMaker ListModelExplainabilityJobDefinitions action.
 * \value ListModelMetadataAction SageMaker ListModelMetadata action.
 * \value ListModelPackageGroupsAction SageMaker ListModelPackageGroups action.
 * \value ListModelPackagesAction SageMaker ListModelPackages action.
 * \value ListModelQualityJobDefinitionsAction SageMaker ListModelQualityJobDefinitions action.
 * \value ListModelsAction SageMaker ListModels action.
 * \value ListMonitoringExecutionsAction SageMaker ListMonitoringExecutions action.
 * \value ListMonitoringSchedulesAction SageMaker ListMonitoringSchedules action.
 * \value ListNotebookInstanceLifecycleConfigsAction SageMaker ListNotebookInstanceLifecycleConfigs action.
 * \value ListNotebookInstancesAction SageMaker ListNotebookInstances action.
 * \value ListPipelineExecutionStepsAction SageMaker ListPipelineExecutionSteps action.
 * \value ListPipelineExecutionsAction SageMaker ListPipelineExecutions action.
 * \value ListPipelineParametersForExecutionAction SageMaker ListPipelineParametersForExecution action.
 * \value ListPipelinesAction SageMaker ListPipelines action.
 * \value ListProcessingJobsAction SageMaker ListProcessingJobs action.
 * \value ListProjectsAction SageMaker ListProjects action.
 * \value ListStageDevicesAction SageMaker ListStageDevices action.
 * \value ListStudioLifecycleConfigsAction SageMaker ListStudioLifecycleConfigs action.
 * \value ListSubscribedWorkteamsAction SageMaker ListSubscribedWorkteams action.
 * \value ListTagsAction SageMaker ListTags action.
 * \value ListTrainingJobsAction SageMaker ListTrainingJobs action.
 * \value ListTrainingJobsForHyperParameterTuningJobAction SageMaker ListTrainingJobsForHyperParameterTuningJob action.
 * \value ListTransformJobsAction SageMaker ListTransformJobs action.
 * \value ListTrialComponentsAction SageMaker ListTrialComponents action.
 * \value ListTrialsAction SageMaker ListTrials action.
 * \value ListUserProfilesAction SageMaker ListUserProfiles action.
 * \value ListWorkforcesAction SageMaker ListWorkforces action.
 * \value ListWorkteamsAction SageMaker ListWorkteams action.
 * \value PutModelPackageGroupPolicyAction SageMaker PutModelPackageGroupPolicy action.
 * \value QueryLineageAction SageMaker QueryLineage action.
 * \value RegisterDevicesAction SageMaker RegisterDevices action.
 * \value RenderUiTemplateAction SageMaker RenderUiTemplate action.
 * \value RetryPipelineExecutionAction SageMaker RetryPipelineExecution action.
 * \value SearchAction SageMaker Search action.
 * \value SendPipelineExecutionStepFailureAction SageMaker SendPipelineExecutionStepFailure action.
 * \value SendPipelineExecutionStepSuccessAction SageMaker SendPipelineExecutionStepSuccess action.
 * \value StartEdgeDeploymentStageAction SageMaker StartEdgeDeploymentStage action.
 * \value StartMonitoringScheduleAction SageMaker StartMonitoringSchedule action.
 * \value StartNotebookInstanceAction SageMaker StartNotebookInstance action.
 * \value StartPipelineExecutionAction SageMaker StartPipelineExecution action.
 * \value StopAutoMLJobAction SageMaker StopAutoMLJob action.
 * \value StopCompilationJobAction SageMaker StopCompilationJob action.
 * \value StopEdgeDeploymentStageAction SageMaker StopEdgeDeploymentStage action.
 * \value StopEdgePackagingJobAction SageMaker StopEdgePackagingJob action.
 * \value StopHyperParameterTuningJobAction SageMaker StopHyperParameterTuningJob action.
 * \value StopInferenceRecommendationsJobAction SageMaker StopInferenceRecommendationsJob action.
 * \value StopLabelingJobAction SageMaker StopLabelingJob action.
 * \value StopMonitoringScheduleAction SageMaker StopMonitoringSchedule action.
 * \value StopNotebookInstanceAction SageMaker StopNotebookInstance action.
 * \value StopPipelineExecutionAction SageMaker StopPipelineExecution action.
 * \value StopProcessingJobAction SageMaker StopProcessingJob action.
 * \value StopTrainingJobAction SageMaker StopTrainingJob action.
 * \value StopTransformJobAction SageMaker StopTransformJob action.
 * \value UpdateActionAction SageMaker UpdateAction action.
 * \value UpdateAppImageConfigAction SageMaker UpdateAppImageConfig action.
 * \value UpdateArtifactAction SageMaker UpdateArtifact action.
 * \value UpdateCodeRepositoryAction SageMaker UpdateCodeRepository action.
 * \value UpdateContextAction SageMaker UpdateContext action.
 * \value UpdateDeviceFleetAction SageMaker UpdateDeviceFleet action.
 * \value UpdateDevicesAction SageMaker UpdateDevices action.
 * \value UpdateDomainAction SageMaker UpdateDomain action.
 * \value UpdateEndpointAction SageMaker UpdateEndpoint action.
 * \value UpdateEndpointWeightsAndCapacitiesAction SageMaker UpdateEndpointWeightsAndCapacities action.
 * \value UpdateExperimentAction SageMaker UpdateExperiment action.
 * \value UpdateFeatureGroupAction SageMaker UpdateFeatureGroup action.
 * \value UpdateFeatureMetadataAction SageMaker UpdateFeatureMetadata action.
 * \value UpdateImageAction SageMaker UpdateImage action.
 * \value UpdateModelPackageAction SageMaker UpdateModelPackage action.
 * \value UpdateMonitoringScheduleAction SageMaker UpdateMonitoringSchedule action.
 * \value UpdateNotebookInstanceAction SageMaker UpdateNotebookInstance action.
 * \value UpdateNotebookInstanceLifecycleConfigAction SageMaker UpdateNotebookInstanceLifecycleConfig action.
 * \value UpdatePipelineAction SageMaker UpdatePipeline action.
 * \value UpdatePipelineExecutionAction SageMaker UpdatePipelineExecution action.
 * \value UpdateProjectAction SageMaker UpdateProject action.
 * \value UpdateTrainingJobAction SageMaker UpdateTrainingJob action.
 * \value UpdateTrialAction SageMaker UpdateTrial action.
 * \value UpdateTrialComponentAction SageMaker UpdateTrialComponent action.
 * \value UpdateUserProfileAction SageMaker UpdateUserProfile action.
 * \value UpdateWorkforceAction SageMaker UpdateWorkforce action.
 * \value UpdateWorkteamAction SageMaker UpdateWorkteam action.
 */

/*!
 * Constructs a SageMakerRequest object for SageMaker \a action.
 */
SageMakerRequest::SageMakerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SageMakerRequest::SageMakerRequest(const SageMakerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SageMakerRequest object to be equal to \a other.
 */
SageMakerRequest& SageMakerRequest::operator=(const SageMakerRequest &other)
{
    Q_D(SageMakerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SageMakerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerRequestPrivate.
 */
SageMakerRequest::SageMakerRequest(SageMakerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SageMaker action to be performed by this request.
 */
SageMakerRequest::Action SageMakerRequest::action() const
{
    Q_D(const SageMakerRequest);
    return d->action;
}

/*!
 * Returns the name of the SageMaker action to be performed by this request.
 */
QString SageMakerRequest::actionString() const
{
    return SageMakerRequestPrivate::toString(action());
}

/*!
 * Returns the SageMaker API version implemented by this request.
 */
QString SageMakerRequest::apiVersion() const
{
    Q_D(const SageMakerRequest);
    return d->apiVersion;
}

/*!
 * Sets the SageMaker action to be performed by this request to \a action.
 */
void SageMakerRequest::setAction(const Action action)
{
    Q_D(SageMakerRequest);
    d->action = action;
}

/*!
 * Sets the SageMaker API version to include in this request to \a version.
 */
void SageMakerRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool SageMakerRequest::operator==(const SageMakerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SageMaker queue name.
 *
 * @par From SageMaker FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMaker queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SageMakerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SageMakerRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SageMakerRequest::clearParameters()
{
    Q_D(SageMakerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SageMakerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SageMakerRequest::parameters() const
{
    Q_D(const SageMakerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SageMakerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SageMakerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SageMaker request using the given
 * \a endpoint.
 *
 * This SageMaker implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SageMakerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SageMakerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SageMaker::SageMakerRequestPrivate
 * \brief The SageMakerRequestPrivate class provides private implementation for SageMakerRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
SageMakerRequestPrivate::SageMakerRequestPrivate(const SageMakerRequest::Action action, SageMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-07-24"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerRequest class's copy constructor.
 */
SageMakerRequestPrivate::SageMakerRequestPrivate(const SageMakerRequestPrivate &other,
                                     SageMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SageMakerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMaker service's Action
 * query parameters.
 */
QString SageMakerRequestPrivate::toString(const SageMakerRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddAssociation);
        ActionToString(AddTags);
        ActionToString(AssociateTrialComponent);
        ActionToString(BatchDescribeModelPackage);
        ActionToString(CreateAction);
        ActionToString(CreateAlgorithm);
        ActionToString(CreateApp);
        ActionToString(CreateAppImageConfig);
        ActionToString(CreateArtifact);
        ActionToString(CreateAutoMLJob);
        ActionToString(CreateCodeRepository);
        ActionToString(CreateCompilationJob);
        ActionToString(CreateContext);
        ActionToString(CreateDataQualityJobDefinition);
        ActionToString(CreateDeviceFleet);
        ActionToString(CreateDomain);
        ActionToString(CreateEdgeDeploymentPlan);
        ActionToString(CreateEdgeDeploymentStage);
        ActionToString(CreateEdgePackagingJob);
        ActionToString(CreateEndpoint);
        ActionToString(CreateEndpointConfig);
        ActionToString(CreateExperiment);
        ActionToString(CreateFeatureGroup);
        ActionToString(CreateFlowDefinition);
        ActionToString(CreateHumanTaskUi);
        ActionToString(CreateHyperParameterTuningJob);
        ActionToString(CreateImage);
        ActionToString(CreateImageVersion);
        ActionToString(CreateInferenceRecommendationsJob);
        ActionToString(CreateLabelingJob);
        ActionToString(CreateModel);
        ActionToString(CreateModelBiasJobDefinition);
        ActionToString(CreateModelExplainabilityJobDefinition);
        ActionToString(CreateModelPackage);
        ActionToString(CreateModelPackageGroup);
        ActionToString(CreateModelQualityJobDefinition);
        ActionToString(CreateMonitoringSchedule);
        ActionToString(CreateNotebookInstance);
        ActionToString(CreateNotebookInstanceLifecycleConfig);
        ActionToString(CreatePipeline);
        ActionToString(CreatePresignedDomainUrl);
        ActionToString(CreatePresignedNotebookInstanceUrl);
        ActionToString(CreateProcessingJob);
        ActionToString(CreateProject);
        ActionToString(CreateStudioLifecycleConfig);
        ActionToString(CreateTrainingJob);
        ActionToString(CreateTransformJob);
        ActionToString(CreateTrial);
        ActionToString(CreateTrialComponent);
        ActionToString(CreateUserProfile);
        ActionToString(CreateWorkforce);
        ActionToString(CreateWorkteam);
        ActionToString(DeleteAction);
        ActionToString(DeleteAlgorithm);
        ActionToString(DeleteApp);
        ActionToString(DeleteAppImageConfig);
        ActionToString(DeleteArtifact);
        ActionToString(DeleteAssociation);
        ActionToString(DeleteCodeRepository);
        ActionToString(DeleteContext);
        ActionToString(DeleteDataQualityJobDefinition);
        ActionToString(DeleteDeviceFleet);
        ActionToString(DeleteDomain);
        ActionToString(DeleteEdgeDeploymentPlan);
        ActionToString(DeleteEdgeDeploymentStage);
        ActionToString(DeleteEndpoint);
        ActionToString(DeleteEndpointConfig);
        ActionToString(DeleteExperiment);
        ActionToString(DeleteFeatureGroup);
        ActionToString(DeleteFlowDefinition);
        ActionToString(DeleteHumanTaskUi);
        ActionToString(DeleteImage);
        ActionToString(DeleteImageVersion);
        ActionToString(DeleteModel);
        ActionToString(DeleteModelBiasJobDefinition);
        ActionToString(DeleteModelExplainabilityJobDefinition);
        ActionToString(DeleteModelPackage);
        ActionToString(DeleteModelPackageGroup);
        ActionToString(DeleteModelPackageGroupPolicy);
        ActionToString(DeleteModelQualityJobDefinition);
        ActionToString(DeleteMonitoringSchedule);
        ActionToString(DeleteNotebookInstance);
        ActionToString(DeleteNotebookInstanceLifecycleConfig);
        ActionToString(DeletePipeline);
        ActionToString(DeleteProject);
        ActionToString(DeleteStudioLifecycleConfig);
        ActionToString(DeleteTags);
        ActionToString(DeleteTrial);
        ActionToString(DeleteTrialComponent);
        ActionToString(DeleteUserProfile);
        ActionToString(DeleteWorkforce);
        ActionToString(DeleteWorkteam);
        ActionToString(DeregisterDevices);
        ActionToString(DescribeAction);
        ActionToString(DescribeAlgorithm);
        ActionToString(DescribeApp);
        ActionToString(DescribeAppImageConfig);
        ActionToString(DescribeArtifact);
        ActionToString(DescribeAutoMLJob);
        ActionToString(DescribeCodeRepository);
        ActionToString(DescribeCompilationJob);
        ActionToString(DescribeContext);
        ActionToString(DescribeDataQualityJobDefinition);
        ActionToString(DescribeDevice);
        ActionToString(DescribeDeviceFleet);
        ActionToString(DescribeDomain);
        ActionToString(DescribeEdgeDeploymentPlan);
        ActionToString(DescribeEdgePackagingJob);
        ActionToString(DescribeEndpoint);
        ActionToString(DescribeEndpointConfig);
        ActionToString(DescribeExperiment);
        ActionToString(DescribeFeatureGroup);
        ActionToString(DescribeFeatureMetadata);
        ActionToString(DescribeFlowDefinition);
        ActionToString(DescribeHumanTaskUi);
        ActionToString(DescribeHyperParameterTuningJob);
        ActionToString(DescribeImage);
        ActionToString(DescribeImageVersion);
        ActionToString(DescribeInferenceRecommendationsJob);
        ActionToString(DescribeLabelingJob);
        ActionToString(DescribeLineageGroup);
        ActionToString(DescribeModel);
        ActionToString(DescribeModelBiasJobDefinition);
        ActionToString(DescribeModelExplainabilityJobDefinition);
        ActionToString(DescribeModelPackage);
        ActionToString(DescribeModelPackageGroup);
        ActionToString(DescribeModelQualityJobDefinition);
        ActionToString(DescribeMonitoringSchedule);
        ActionToString(DescribeNotebookInstance);
        ActionToString(DescribeNotebookInstanceLifecycleConfig);
        ActionToString(DescribePipeline);
        ActionToString(DescribePipelineDefinitionForExecution);
        ActionToString(DescribePipelineExecution);
        ActionToString(DescribeProcessingJob);
        ActionToString(DescribeProject);
        ActionToString(DescribeStudioLifecycleConfig);
        ActionToString(DescribeSubscribedWorkteam);
        ActionToString(DescribeTrainingJob);
        ActionToString(DescribeTransformJob);
        ActionToString(DescribeTrial);
        ActionToString(DescribeTrialComponent);
        ActionToString(DescribeUserProfile);
        ActionToString(DescribeWorkforce);
        ActionToString(DescribeWorkteam);
        ActionToString(DisableSagemakerServicecatalogPortfolio);
        ActionToString(DisassociateTrialComponent);
        ActionToString(EnableSagemakerServicecatalogPortfolio);
        ActionToString(GetDeviceFleetReport);
        ActionToString(GetLineageGroupPolicy);
        ActionToString(GetModelPackageGroupPolicy);
        ActionToString(GetSagemakerServicecatalogPortfolioStatus);
        ActionToString(GetSearchSuggestions);
        ActionToString(ListActions);
        ActionToString(ListAlgorithms);
        ActionToString(ListAppImageConfigs);
        ActionToString(ListApps);
        ActionToString(ListArtifacts);
        ActionToString(ListAssociations);
        ActionToString(ListAutoMLJobs);
        ActionToString(ListCandidatesForAutoMLJob);
        ActionToString(ListCodeRepositories);
        ActionToString(ListCompilationJobs);
        ActionToString(ListContexts);
        ActionToString(ListDataQualityJobDefinitions);
        ActionToString(ListDeviceFleets);
        ActionToString(ListDevices);
        ActionToString(ListDomains);
        ActionToString(ListEdgeDeploymentPlans);
        ActionToString(ListEdgePackagingJobs);
        ActionToString(ListEndpointConfigs);
        ActionToString(ListEndpoints);
        ActionToString(ListExperiments);
        ActionToString(ListFeatureGroups);
        ActionToString(ListFlowDefinitions);
        ActionToString(ListHumanTaskUis);
        ActionToString(ListHyperParameterTuningJobs);
        ActionToString(ListImageVersions);
        ActionToString(ListImages);
        ActionToString(ListInferenceRecommendationsJobs);
        ActionToString(ListLabelingJobs);
        ActionToString(ListLabelingJobsForWorkteam);
        ActionToString(ListLineageGroups);
        ActionToString(ListModelBiasJobDefinitions);
        ActionToString(ListModelExplainabilityJobDefinitions);
        ActionToString(ListModelMetadata);
        ActionToString(ListModelPackageGroups);
        ActionToString(ListModelPackages);
        ActionToString(ListModelQualityJobDefinitions);
        ActionToString(ListModels);
        ActionToString(ListMonitoringExecutions);
        ActionToString(ListMonitoringSchedules);
        ActionToString(ListNotebookInstanceLifecycleConfigs);
        ActionToString(ListNotebookInstances);
        ActionToString(ListPipelineExecutionSteps);
        ActionToString(ListPipelineExecutions);
        ActionToString(ListPipelineParametersForExecution);
        ActionToString(ListPipelines);
        ActionToString(ListProcessingJobs);
        ActionToString(ListProjects);
        ActionToString(ListStageDevices);
        ActionToString(ListStudioLifecycleConfigs);
        ActionToString(ListSubscribedWorkteams);
        ActionToString(ListTags);
        ActionToString(ListTrainingJobs);
        ActionToString(ListTrainingJobsForHyperParameterTuningJob);
        ActionToString(ListTransformJobs);
        ActionToString(ListTrialComponents);
        ActionToString(ListTrials);
        ActionToString(ListUserProfiles);
        ActionToString(ListWorkforces);
        ActionToString(ListWorkteams);
        ActionToString(PutModelPackageGroupPolicy);
        ActionToString(QueryLineage);
        ActionToString(RegisterDevices);
        ActionToString(RenderUiTemplate);
        ActionToString(RetryPipelineExecution);
        ActionToString(Search);
        ActionToString(SendPipelineExecutionStepFailure);
        ActionToString(SendPipelineExecutionStepSuccess);
        ActionToString(StartEdgeDeploymentStage);
        ActionToString(StartMonitoringSchedule);
        ActionToString(StartNotebookInstance);
        ActionToString(StartPipelineExecution);
        ActionToString(StopAutoMLJob);
        ActionToString(StopCompilationJob);
        ActionToString(StopEdgeDeploymentStage);
        ActionToString(StopEdgePackagingJob);
        ActionToString(StopHyperParameterTuningJob);
        ActionToString(StopInferenceRecommendationsJob);
        ActionToString(StopLabelingJob);
        ActionToString(StopMonitoringSchedule);
        ActionToString(StopNotebookInstance);
        ActionToString(StopPipelineExecution);
        ActionToString(StopProcessingJob);
        ActionToString(StopTrainingJob);
        ActionToString(StopTransformJob);
        ActionToString(UpdateAction);
        ActionToString(UpdateAppImageConfig);
        ActionToString(UpdateArtifact);
        ActionToString(UpdateCodeRepository);
        ActionToString(UpdateContext);
        ActionToString(UpdateDeviceFleet);
        ActionToString(UpdateDevices);
        ActionToString(UpdateDomain);
        ActionToString(UpdateEndpoint);
        ActionToString(UpdateEndpointWeightsAndCapacities);
        ActionToString(UpdateExperiment);
        ActionToString(UpdateFeatureGroup);
        ActionToString(UpdateFeatureMetadata);
        ActionToString(UpdateImage);
        ActionToString(UpdateModelPackage);
        ActionToString(UpdateMonitoringSchedule);
        ActionToString(UpdateNotebookInstance);
        ActionToString(UpdateNotebookInstanceLifecycleConfig);
        ActionToString(UpdatePipeline);
        ActionToString(UpdatePipelineExecution);
        ActionToString(UpdateProject);
        ActionToString(UpdateTrainingJob);
        ActionToString(UpdateTrial);
        ActionToString(UpdateTrialComponent);
        ActionToString(UpdateUserProfile);
        ActionToString(UpdateWorkforce);
        ActionToString(UpdateWorkteam);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMaker
} // namespace QtAws
