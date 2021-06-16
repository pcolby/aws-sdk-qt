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

#include "sagemakerclient.h"
#include "sagemakerclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createalgorithmrequest.h"
#include "createalgorithmresponse.h"
#include "createcoderepositoryrequest.h"
#include "createcoderepositoryresponse.h"
#include "createcompilationjobrequest.h"
#include "createcompilationjobresponse.h"
#include "createendpointrequest.h"
#include "createendpointresponse.h"
#include "createendpointconfigrequest.h"
#include "createendpointconfigresponse.h"
#include "createhyperparametertuningjobrequest.h"
#include "createhyperparametertuningjobresponse.h"
#include "createlabelingjobrequest.h"
#include "createlabelingjobresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createmodelpackagerequest.h"
#include "createmodelpackageresponse.h"
#include "createnotebookinstancerequest.h"
#include "createnotebookinstanceresponse.h"
#include "createnotebookinstancelifecycleconfigrequest.h"
#include "createnotebookinstancelifecycleconfigresponse.h"
#include "createpresignednotebookinstanceurlrequest.h"
#include "createpresignednotebookinstanceurlresponse.h"
#include "createtrainingjobrequest.h"
#include "createtrainingjobresponse.h"
#include "createtransformjobrequest.h"
#include "createtransformjobresponse.h"
#include "createworkteamrequest.h"
#include "createworkteamresponse.h"
#include "deletealgorithmrequest.h"
#include "deletealgorithmresponse.h"
#include "deletecoderepositoryrequest.h"
#include "deletecoderepositoryresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteendpointconfigrequest.h"
#include "deleteendpointconfigresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deletemodelpackagerequest.h"
#include "deletemodelpackageresponse.h"
#include "deletenotebookinstancerequest.h"
#include "deletenotebookinstanceresponse.h"
#include "deletenotebookinstancelifecycleconfigrequest.h"
#include "deletenotebookinstancelifecycleconfigresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "deleteworkteamrequest.h"
#include "deleteworkteamresponse.h"
#include "describealgorithmrequest.h"
#include "describealgorithmresponse.h"
#include "describecoderepositoryrequest.h"
#include "describecoderepositoryresponse.h"
#include "describecompilationjobrequest.h"
#include "describecompilationjobresponse.h"
#include "describeendpointrequest.h"
#include "describeendpointresponse.h"
#include "describeendpointconfigrequest.h"
#include "describeendpointconfigresponse.h"
#include "describehyperparametertuningjobrequest.h"
#include "describehyperparametertuningjobresponse.h"
#include "describelabelingjobrequest.h"
#include "describelabelingjobresponse.h"
#include "describemodelrequest.h"
#include "describemodelresponse.h"
#include "describemodelpackagerequest.h"
#include "describemodelpackageresponse.h"
#include "describenotebookinstancerequest.h"
#include "describenotebookinstanceresponse.h"
#include "describenotebookinstancelifecycleconfigrequest.h"
#include "describenotebookinstancelifecycleconfigresponse.h"
#include "describesubscribedworkteamrequest.h"
#include "describesubscribedworkteamresponse.h"
#include "describetrainingjobrequest.h"
#include "describetrainingjobresponse.h"
#include "describetransformjobrequest.h"
#include "describetransformjobresponse.h"
#include "describeworkteamrequest.h"
#include "describeworkteamresponse.h"
#include "getsearchsuggestionsrequest.h"
#include "getsearchsuggestionsresponse.h"
#include "listalgorithmsrequest.h"
#include "listalgorithmsresponse.h"
#include "listcoderepositoriesrequest.h"
#include "listcoderepositoriesresponse.h"
#include "listcompilationjobsrequest.h"
#include "listcompilationjobsresponse.h"
#include "listendpointconfigsrequest.h"
#include "listendpointconfigsresponse.h"
#include "listendpointsrequest.h"
#include "listendpointsresponse.h"
#include "listhyperparametertuningjobsrequest.h"
#include "listhyperparametertuningjobsresponse.h"
#include "listlabelingjobsrequest.h"
#include "listlabelingjobsresponse.h"
#include "listlabelingjobsforworkteamrequest.h"
#include "listlabelingjobsforworkteamresponse.h"
#include "listmodelpackagesrequest.h"
#include "listmodelpackagesresponse.h"
#include "listmodelsrequest.h"
#include "listmodelsresponse.h"
#include "listnotebookinstancelifecycleconfigsrequest.h"
#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "listnotebookinstancesrequest.h"
#include "listnotebookinstancesresponse.h"
#include "listsubscribedworkteamsrequest.h"
#include "listsubscribedworkteamsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listtrainingjobsrequest.h"
#include "listtrainingjobsresponse.h"
#include "listtrainingjobsforhyperparametertuningjobrequest.h"
#include "listtrainingjobsforhyperparametertuningjobresponse.h"
#include "listtransformjobsrequest.h"
#include "listtransformjobsresponse.h"
#include "listworkteamsrequest.h"
#include "listworkteamsresponse.h"
#include "renderuitemplaterequest.h"
#include "renderuitemplateresponse.h"
#include "searchrequest.h"
#include "searchresponse.h"
#include "startnotebookinstancerequest.h"
#include "startnotebookinstanceresponse.h"
#include "stopcompilationjobrequest.h"
#include "stopcompilationjobresponse.h"
#include "stophyperparametertuningjobrequest.h"
#include "stophyperparametertuningjobresponse.h"
#include "stoplabelingjobrequest.h"
#include "stoplabelingjobresponse.h"
#include "stopnotebookinstancerequest.h"
#include "stopnotebookinstanceresponse.h"
#include "stoptrainingjobrequest.h"
#include "stoptrainingjobresponse.h"
#include "stoptransformjobrequest.h"
#include "stoptransformjobresponse.h"
#include "updatecoderepositoryrequest.h"
#include "updatecoderepositoryresponse.h"
#include "updateendpointrequest.h"
#include "updateendpointresponse.h"
#include "updateendpointweightsandcapacitiesrequest.h"
#include "updateendpointweightsandcapacitiesresponse.h"
#include "updatenotebookinstancerequest.h"
#include "updatenotebookinstanceresponse.h"
#include "updatenotebookinstancelifecycleconfigrequest.h"
#include "updatenotebookinstancelifecycleconfigresponse.h"
#include "updateworkteamrequest.h"
#include "updateworkteamresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SageMaker
 * \brief Contains classess for accessing Amazon SageMaker Service.
 *
 * \inmodule QtAwsSageMaker
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SageMakerClient
 * \brief The SageMakerClient class provides access to the Amazon SageMaker Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 */

/*!
 * \brief Constructs a SageMakerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SageMakerClient::SageMakerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerClientPrivate(this), parent)
{
    Q_D(SageMakerClient);
    d->apiVersion = QStringLiteral("2017-07-24");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.sagemaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Service");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * \overload SageMakerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SageMakerClient::SageMakerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerClientPrivate(this), parent)
{
    Q_D(SageMakerClient);
    d->apiVersion = QStringLiteral("2017-07-24");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.sagemaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Service");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified Amazon SageMaker resource. You can add tags to notebook instances,
 * training jobs, hyperparameter tuning jobs, batch transform jobs, models, labeling jobs, work teams, endpoint
 * configurations, and
 *
 * endpoints>
 *
 * Each tag consists of a key and an optional value. Tag keys must be unique per resource. For more information about tags,
 * see For more information, see <a href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
 * Tagging
 *
 * Strategies</a>> <note>
 *
 * Tags that you add to a hyperparameter tuning job by calling this API are also added to any training jobs that the
 * hyperparameter tuning job launches after you call this API, but not to training jobs that the hyperparameter tuning job
 * launched before you called this API. To make sure that the tags associated with a hyperparameter tuning job are also
 * added to all training jobs that the hyperparameter tuning job launches, add the tags when you first create the tuning
 * job by specifying them in the <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a>
 */
AddTagsResponse * SageMakerClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a machine learning algorithm that you can use in Amazon SageMaker and list in the AWS
 */
CreateAlgorithmResponse * SageMakerClient::createAlgorithm(const CreateAlgorithmRequest &request)
{
    return qobject_cast<CreateAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Git repository as a resource in your Amazon SageMaker account. You can associate the repository with notebook
 * instances so that you can use Git source control for the notebooks you create. The Git repository is a resource in your
 * Amazon SageMaker account, so it can be associated with more than one notebook instance, and it persists independently
 * from the lifecycle of any notebook instances it is associated
 *
 * with>
 *
 * The repository can be hosted either in <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
 * CodeCommit</a> or in any other Git
 */
CreateCodeRepositoryResponse * SageMakerClient::createCodeRepository(const CreateCodeRepositoryRequest &request)
{
    return qobject_cast<CreateCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateCompilationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a model compilation job. After the model has been compiled, Amazon SageMaker saves the resulting model artifacts
 * to an Amazon Simple Storage Service (Amazon S3) bucket that you specify.
 *
 * </p
 *
 * If you choose to host your model using Amazon SageMaker hosting services, you can use the resulting model artifacts as
 * part of the model. You can also use the artifacts with AWS IoT Greengrass. In that case, deploy them as an ML
 *
 * resource>
 *
 * In the request body, you provide the
 *
 * following> <ul> <li>
 *
 * A name for the compilation
 *
 * jo> </li> <li>
 *
 * Information about the input model artifacts
 *
 * </p </li> <li>
 *
 * The output location for the compiled model and the device (target) that the model runs on
 *
 * </p </li> <li>
 *
 * <code>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker assumes to perform the model compilation
 * job</code>
 *
 * </p </li> </ul>
 *
 * You can also provide a <code>Tag</code> to track the model compilation job's resource use and costs. The response body
 * contains the <code>CompilationJobArn</code> for the compiled
 *
 * job>
 *
 * To stop a model compilation job, use <a>StopCompilationJob</a>. To get information about a particular model compilation
 * job, use <a>DescribeCompilationJob</a>. To get information about multiple model compilation jobs, use
 */
CreateCompilationJobResponse * SageMakerClient::createCompilationJob(const CreateCompilationJobRequest &request)
{
    return qobject_cast<CreateCompilationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint using the endpoint configuration specified in the request. Amazon SageMaker uses the endpoint to
 * provision resources and deploy models. You create the endpoint configuration with the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a> API.
 *
 * </p <note>
 *
 * Use this API only for hosting models using Amazon SageMaker hosting services.
 *
 * </p
 *
 * You must not delete an <code>EndpointConfig</code> in use by an endpoint that is live or while the
 * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being performed on the endpoint. To update an
 * endpoint, you must create a new
 *
 * <code>EndpointConfig</code>> </note>
 *
 * The endpoint name must be unique within an AWS Region in your AWS account.
 *
 * </p
 *
 * When it receives the request, Amazon SageMaker creates the endpoint, launches the resources (ML compute instances), and
 * deploys the model(s) on them.
 *
 * </p
 *
 * When Amazon SageMaker receives the request, it sets the endpoint status to <code>Creating</code>. After it creates the
 * endpoint, it sets the status to <code>InService</code>. Amazon SageMaker can then process incoming requests for
 * inferences. To check the status of an endpoint, use the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
 *
 * API>
 *
 * For an example, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1: Using the K-Means
 * Algorithm Provided by Amazon SageMaker</a>.
 *
 * </p
 *
 * If any of the models hosted at this endpoint get model data from an Amazon S3 location, Amazon SageMaker uses AWS
 * Security Token Service to download model artifacts from the S3 path you provided. AWS STS is activated in your IAM user
 * account by default. If you previously deactivated AWS STS for a region, you need to reactivate AWS STS for that region.
 * For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating and
 * Deactivating AWS STS i an AWS Region</a> in the <i>AWS Identity and Access Management User
 */
CreateEndpointResponse * SageMakerClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateEndpointConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint configuration that Amazon SageMaker hosting services uses to deploy models. In the configuration,
 * you identify one or more models, created using the <code>CreateModel</code> API, to deploy and the resources that you
 * want Amazon SageMaker to provision. Then you call the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
 *
 * API> <note>
 *
 * Use this API only if you want to use Amazon SageMaker hosting services to deploy models into production.
 *
 * </p </note>
 *
 * In the request, you define one or more <code>ProductionVariant</code>s, each of which identifies a model. Each
 * <code>ProductionVariant</code> parameter also describes the resources that you want Amazon SageMaker to provision. This
 * includes the number and type of ML compute instances to deploy.
 *
 * </p
 *
 * If you are hosting multiple models, you also assign a <code>VariantWeight</code> to specify how much traffic you want to
 * allocate to each model. For example, suppose that you want to host two models, A and B, and you assign traffic weight 2
 * for model A and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to Model A, and one-third to model
 * B.
 */
CreateEndpointConfigResponse * SageMakerClient::createEndpointConfig(const CreateEndpointConfigRequest &request)
{
    return qobject_cast<CreateEndpointConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a hyperparameter tuning job. A hyperparameter tuning job finds the best version of a model by running many
 * training jobs on your dataset using the algorithm you choose and values for hyperparameters within ranges that you
 * specify. It then chooses the hyperparameter values that result in a model that performs the best, as measured by an
 * objective metric that you
 */
CreateHyperParameterTuningJobResponse * SageMakerClient::createHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest &request)
{
    return qobject_cast<CreateHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateLabelingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job that uses workers to label the data objects in your input dataset. You can use the labeled data to train
 * machine learning
 *
 * models>
 *
 * You can select your workforce from one of three
 *
 * providers> <ul> <li>
 *
 * A private workforce that you create. It can include employees, contractors, and outside experts. Use a private workforce
 * when want the data to stay within your organization or when a specific set of skills is
 *
 * required> </li> <li>
 *
 * One or more vendors that you select from the AWS Marketplace. Vendors provide expertise in specific areas.
 *
 * </p </li> <li>
 *
 * The Amazon Mechanical Turk workforce. This is the largest workforce, but it should only be used for public data or data
 * that has been stripped of any personally identifiable
 *
 * information> </li> </ul>
 *
 * You can also use <i>automated data labeling</i> to reduce the number of data objects that need to be labeled by a human.
 * Automated data labeling uses <i>active learning</i> to determine if a data object can be labeled by machine or if it
 * needs to be sent to a human worker. For more information, see <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using Automated Data
 *
 * Labeling</a>>
 *
 * The data objects to be labeled are contained in an Amazon S3 bucket. You create a <i>manifest file</i> that describes
 * the location of each object. For more information, see <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input and Output
 *
 * Data</a>>
 *
 * The output can be used as the manifest file for another labeling job or as training data for your machine learning
 */
CreateLabelingJobResponse * SageMakerClient::createLabelingJob(const CreateLabelingJobRequest &request)
{
    return qobject_cast<CreateLabelingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a model in Amazon SageMaker. In the request, you name the model and describe a primary container. For the
 * primary container, you specify the docker image containing inference code, artifacts (from prior training), and custom
 * environment map that the inference code uses when you deploy the model for
 *
 * predictions>
 *
 * Use this API to create a model if you want to use Amazon SageMaker hosting services or run a batch transform
 *
 * job>
 *
 * To host your model, you create an endpoint configuration with the <code>CreateEndpointConfig</code> API, and then create
 * an endpoint with the <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the containers that you
 * defined for the model in the hosting environment.
 *
 * </p
 *
 * To run a batch transform using your model, you start a job with the <code>CreateTransformJob</code> API. Amazon
 * SageMaker uses your model and your dataset to get inferences which are then saved to a specified S3
 *
 * location>
 *
 * In the <code>CreateModel</code> request, you must define a container with the <code>PrimaryContainer</code>
 *
 * parameter>
 *
 * In the request, you also provide an IAM role that Amazon SageMaker can assume to access model artifacts and docker image
 * for deployment on ML compute hosting instances or for batch transform jobs. In addition, you also use the IAM role to
 * manage permissions the inference code needs. For example, if the inference code access any other AWS resources, you
 * grant necessary permissions via this
 */
CreateModelResponse * SageMakerClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a model package that you can use to create Amazon SageMaker models or list on AWS Marketplace. Buyers can
 * subscribe to model packages listed on AWS Marketplace to create models in Amazon
 *
 * SageMaker>
 *
 * To create a model package by specifying a Docker container that contains your inference code and the Amazon S3 location
 * of your model artifacts, provide values for <code>InferenceSpecification</code>. To create a model from an algorithm
 * resource that you created or subscribed to in AWS Marketplace, provide a value for
 */
CreateModelPackageResponse * SageMakerClient::createModelPackage(const CreateModelPackageRequest &request)
{
    return qobject_cast<CreateModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon SageMaker notebook instance. A notebook instance is a machine learning (ML) compute instance running
 * on a Jupyter notebook.
 *
 * </p
 *
 * In a <code>CreateNotebookInstance</code> request, specify the type of ML compute instance that you want to run. Amazon
 * SageMaker launches the instance, installs common libraries that you can use to explore datasets for model training, and
 * attaches an ML storage volume to the notebook instance.
 *
 * </p
 *
 * Amazon SageMaker also provides a set of example notebooks. Each notebook demonstrates how to use Amazon SageMaker with a
 * specific algorithm or with a machine learning framework.
 *
 * </p
 *
 * After receiving the request, Amazon SageMaker does the
 *
 * following> <ol> <li>
 *
 * Creates a network interface in the Amazon SageMaker
 *
 * VPC> </li> <li>
 *
 * (Option) If you specified <code>SubnetId</code>, Amazon SageMaker creates a network interface in your own VPC, which is
 * inferred from the subnet ID that you provide in the input. When creating this network interface, Amazon SageMaker
 * attaches the security group that you specified in the request to the network interface that it creates in your
 *
 * VPC> </li> <li>
 *
 * Launches an EC2 instance of the type specified in the request in the Amazon SageMaker VPC. If you specified
 * <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both network interfaces when launching this instance. This
 * enables inbound traffic from your own VPC to the notebook instance, assuming that the security groups allow
 *
 * it> </li> </ol>
 *
 * After creating the notebook instance, Amazon SageMaker returns its Amazon Resource Name
 *
 * (ARN)>
 *
 * After Amazon SageMaker creates the notebook instance, you can connect to the Jupyter server and work in Jupyter
 * notebooks. For example, you can write code to explore a dataset that you can use for model training, train a model, host
 * models by creating Amazon SageMaker endpoints, and validate hosted models.
 *
 * </p
 *
 * For more information, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It Works</a>.
 */
CreateNotebookInstanceResponse * SageMakerClient::createNotebookInstance(const CreateNotebookInstanceRequest &request)
{
    return qobject_cast<CreateNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a lifecycle configuration that you can associate with a notebook instance. A <i>lifecycle configuration</i> is a
 * collection of shell scripts that run when you create or start a notebook
 *
 * instance>
 *
 * Each lifecycle configuration script has a limit of 16384
 *
 * characters>
 *
 * The value of the <code>$PATH</code> environment variable that is available to both scripts is
 *
 * <code>/sbin:bin:/usr/sbin:/usr/bin</code>>
 *
 * View CloudWatch Logs for notebook instance lifecycle configurations in log group
 * <code>/aws/sagemaker/NotebookInstances</code> in log stream
 *
 * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>>
 *
 * Lifecycle configuration scripts cannot run for longer than 5 minutes. If a script runs for longer than 5 minutes, it
 * fails and the notebook instance is not created or
 *
 * started>
 *
 * For information about notebook instance lifestyle configurations, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step 2.1: (Optional) Customize a
 * Notebook
 */
CreateNotebookInstanceLifecycleConfigResponse * SageMakerClient::createNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<CreateNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreatePresignedNotebookInstanceUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a URL that you can use to connect to the Jupyter server from a notebook instance. In the Amazon SageMaker
 * console, when you choose <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab showing the
 * Jupyter server home page from the notebook instance. The console uses this API to get the URL and show the
 *
 * page>
 *
 * IAM authorization policies for this API are also enforced for every HTTP request and WebSocket frame that attempts to
 * connect to the notebook instance.For example, you can restrict access to this API and to the URL that it returns to a
 * list of IP addresses that you specify. Use the <code>NotIpAddress</code> condition operator and the
 * <code>aws:SourceIP</code> condition context key to specify the list of IP addresses that you want to have access to the
 * notebook instance. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-ip-filter.html">Limit Access to a Notebook Instance by IP
 *
 * Address</a>> <note>
 *
 * The URL that you get from a call to is valid only for 5 minutes. If you try to use the URL after the 5-minute limit
 * expires, you are directed to the AWS console sign-in
 */
CreatePresignedNotebookInstanceUrlResponse * SageMakerClient::createPresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    return qobject_cast<CreatePresignedNotebookInstanceUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a model training job. After training completes, Amazon SageMaker saves the resulting model artifacts to an Amazon
 * S3 location that you specify.
 *
 * </p
 *
 * If you choose to host your model using Amazon SageMaker hosting services, you can use the resulting model artifacts as
 * part of the model. You can also use the artifacts in a machine learning service other than Amazon SageMaker, provided
 * that you know how to use them for inferences.
 *
 * </p
 *
 * In the request body, you provide the following:
 *
 * </p <ul> <li>
 *
 * <code>AlgorithmSpecification</code> - Identifies the training algorithm to use.
 *
 * </p </li> <li>
 *
 * <code>HyperParameters</code> - Specify these algorithm-specific parameters to enable the estimation of model parameters
 * during training. Hyperparameters can be tuned to optimize this learning process. For a list of hyperparameters for each
 * training algorithm provided by Amazon SageMaker, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
 *
 * </p </li> <li>
 *
 * <code>InputDataConfig</code> - Describes the training dataset and the Amazon S3 location where it is
 *
 * stored> </li> <li>
 *
 * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want Amazon SageMaker to save the results of
 * model training.
 *
 * </p <p/> </li> <li>
 *
 * <code>ResourceConfig</code> - Identifies the resources, ML compute instances, and ML storage volumes to deploy for model
 * training. In distributed training, you specify more than one instance.
 *
 * </p </li> <li>
 *
 * <code>RoleARN</code> - The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks on your behalf
 * during model training. You must grant this role the necessary permissions so that Amazon SageMaker can successfully
 * complete model training.
 *
 * </p </li> <li>
 *
 * <code>StoppingCondition</code> - Sets a time limit for training. Use this parameter to cap model training costs.
 *
 * </p </li> </ul>
 *
 * For more information about Amazon SageMaker, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It Works</a>.
 */
CreateTrainingJobResponse * SageMakerClient::createTrainingJob(const CreateTrainingJobRequest &request)
{
    return qobject_cast<CreateTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateTransformJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a transform job. A transform job uses a trained model to get inferences on a dataset and saves these results to
 * an Amazon S3 location that you
 *
 * specify>
 *
 * To perform batch transformations, you create a transform job and use the data that you have readily
 *
 * available>
 *
 * In the request body, you provide the
 *
 * following> <ul> <li>
 *
 * <code>TransformJobName</code> - Identifies the transform job. The name must be unique within an AWS Region in an AWS
 *
 * account> </li> <li>
 *
 * <code>ModelName</code> - Identifies the model to use. <code>ModelName</code> must be the name of an existing Amazon
 * SageMaker model in the same AWS Region and AWS account. For information on creating a model, see
 *
 * <a>CreateModel</a>> </li> <li>
 *
 * <code>TransformInput</code> - Describes the dataset to be transformed and the Amazon S3 location where it is
 *
 * stored> </li> <li>
 *
 * <code>TransformOutput</code> - Identifies the Amazon S3 location where you want Amazon SageMaker to save the results
 * from the transform
 *
 * job> </li> <li>
 *
 * <code>TransformResources</code> - Identifies the ML compute instances for the transform
 *
 * job> </li> </ul>
 *
 * For more information about how batch transformation works Amazon SageMaker, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">How It Works</a>.
 */
CreateTransformJobResponse * SageMakerClient::createTransformJob(const CreateTransformJobRequest &request)
{
    return qobject_cast<CreateTransformJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new work team for labeling your data. A work team is defined by one or more Amazon Cognito user pools. You
 * must first create the user pools before you can create a work
 *
 * team>
 *
 * You cannot create more than 25 work teams in an account and
 */
CreateWorkteamResponse * SageMakerClient::createWorkteam(const CreateWorkteamRequest &request)
{
    return qobject_cast<CreateWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified algorithm from your
 */
DeleteAlgorithmResponse * SageMakerClient::deleteAlgorithm(const DeleteAlgorithmRequest &request)
{
    return qobject_cast<DeleteAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Git repository from your
 */
DeleteCodeRepositoryResponse * SageMakerClient::deleteCodeRepository(const DeleteCodeRepositoryRequest &request)
{
    return qobject_cast<DeleteCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an endpoint. Amazon SageMaker frees up all of the resources that were deployed when the endpoint was created.
 *
 * </p
 *
 * Amazon SageMaker retires any custom KMS key grants associated with the endpoint, meaning you don't need to use the <a
 * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a> API
 */
DeleteEndpointResponse * SageMakerClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteEndpointConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API deletes only the specified configuration.
 * It does not delete endpoints created using the configuration.
 */
DeleteEndpointConfigResponse * SageMakerClient::deleteEndpointConfig(const DeleteEndpointConfigRequest &request)
{
    return qobject_cast<DeleteEndpointConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a model. The <code>DeleteModel</code> API deletes only the model entry that was created in Amazon SageMaker when
 * you called the <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a> API. It
 * does not delete model artifacts, inference code, or the IAM role that you specified when creating the model.
 */
DeleteModelResponse * SageMakerClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a model
 *
 * package>
 *
 * A model package is used to create Amazon SageMaker models or list on AWS Marketplace. Buyers can subscribe to model
 * packages listed on AWS Marketplace to create models in Amazon
 */
DeleteModelPackageResponse * SageMakerClient::deleteModelPackage(const DeleteModelPackageRequest &request)
{
    return qobject_cast<DeleteModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon SageMaker notebook instance. Before you can delete a notebook instance, you must call the
 * <code>StopNotebookInstance</code> API.
 *
 * </p <b>
 *
 * When you delete a notebook instance, you lose all of your data. Amazon SageMaker removes the ML compute instance, and
 * deletes the ML storage volume and the network interface associated with the notebook instance.
 */
DeleteNotebookInstanceResponse * SageMakerClient::deleteNotebookInstance(const DeleteNotebookInstanceRequest &request)
{
    return qobject_cast<DeleteNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a notebook instance lifecycle
 */
DeleteNotebookInstanceLifecycleConfigResponse * SageMakerClient::deleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<DeleteNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags from an Amazon SageMaker
 *
 * resource>
 *
 * To list a resource's tags, use the <code>ListTags</code> API.
 *
 * </p <note>
 *
 * When you call this API to delete tags from a hyperparameter tuning job, the deleted tags are not removed from training
 * jobs that the hyperparameter tuning job launched before you called this
 */
DeleteTagsResponse * SageMakerClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing work team. This operation can't be
 */
DeleteWorkteamResponse * SageMakerClient::deleteWorkteam(const DeleteWorkteamRequest &request)
{
    return qobject_cast<DeleteWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the specified algorithm that is in your
 */
DescribeAlgorithmResponse * SageMakerClient::describeAlgorithm(const DescribeAlgorithmRequest &request)
{
    return qobject_cast<DescribeAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about the specified Git
 */
DescribeCodeRepositoryResponse * SageMakerClient::describeCodeRepository(const DescribeCodeRepositoryRequest &request)
{
    return qobject_cast<DescribeCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeCompilationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a model compilation
 *
 * job>
 *
 * To create a model compilation job, use <a>CreateCompilationJob</a>. To get information about multiple model compilation
 * jobs, use
 */
DescribeCompilationJobResponse * SageMakerClient::describeCompilationJob(const DescribeCompilationJobRequest &request)
{
    return qobject_cast<DescribeCompilationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of an
 */
DescribeEndpointResponse * SageMakerClient::describeEndpoint(const DescribeEndpointRequest &request)
{
    return qobject_cast<DescribeEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeEndpointConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of an endpoint configuration created using the <code>CreateEndpointConfig</code>
 */
DescribeEndpointConfigResponse * SageMakerClient::describeEndpointConfig(const DescribeEndpointConfigRequest &request)
{
    return qobject_cast<DescribeEndpointConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a description of a hyperparameter tuning
 */
DescribeHyperParameterTuningJobResponse * SageMakerClient::describeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest &request)
{
    return qobject_cast<DescribeHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeLabelingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a labeling
 */
DescribeLabelingJobResponse * SageMakerClient::describeLabelingJob(const DescribeLabelingJobRequest &request)
{
    return qobject_cast<DescribeLabelingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a model that you created using the <code>CreateModel</code>
 */
DescribeModelResponse * SageMakerClient::describeModel(const DescribeModelRequest &request)
{
    return qobject_cast<DescribeModelResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the specified model package, which is used to create Amazon SageMaker models or list them on
 * AWS
 *
 * Marketplace>
 *
 * To create models in Amazon SageMaker, buyers can subscribe to model packages listed on AWS
 */
DescribeModelPackageResponse * SageMakerClient::describeModelPackage(const DescribeModelPackageRequest &request)
{
    return qobject_cast<DescribeModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a notebook
 */
DescribeNotebookInstanceResponse * SageMakerClient::describeNotebookInstance(const DescribeNotebookInstanceRequest &request)
{
    return qobject_cast<DescribeNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of a notebook instance lifecycle
 *
 * configuration>
 *
 * For information about notebook instance lifestyle configurations, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step 2.1: (Optional) Customize a
 * Notebook
 */
DescribeNotebookInstanceLifecycleConfigResponse * SageMakerClient::describeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<DescribeNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeSubscribedWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a work team provided by a vendor. It returns details about the subscription with a vendor in the
 * AWS
 */
DescribeSubscribedWorkteamResponse * SageMakerClient::describeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest &request)
{
    return qobject_cast<DescribeSubscribedWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a training
 */
DescribeTrainingJobResponse * SageMakerClient::describeTrainingJob(const DescribeTrainingJobRequest &request)
{
    return qobject_cast<DescribeTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeTransformJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a transform
 */
DescribeTransformJobResponse * SageMakerClient::describeTransformJob(const DescribeTransformJobRequest &request)
{
    return qobject_cast<DescribeTransformJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specific work team. You can see information such as the create date, the last updated date,
 * membership information, and the work team's Amazon Resource Name
 */
DescribeWorkteamResponse * SageMakerClient::describeWorkteam(const DescribeWorkteamRequest &request)
{
    return qobject_cast<DescribeWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * GetSearchSuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An auto-complete API for the search functionality in the Amazon SageMaker console. It returns suggestions of possible
 * matches for the property name to use in <code>Search</code> queries. Provides suggestions for
 * <code>HyperParameters</code>, <code>Tags</code>, and
 */
GetSearchSuggestionsResponse * SageMakerClient::getSearchSuggestions(const GetSearchSuggestionsRequest &request)
{
    return qobject_cast<GetSearchSuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListAlgorithmsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the machine learning algorithms that have been
 */
ListAlgorithmsResponse * SageMakerClient::listAlgorithms(const ListAlgorithmsRequest &request)
{
    return qobject_cast<ListAlgorithmsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListCodeRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the Git repositories in your
 */
ListCodeRepositoriesResponse * SageMakerClient::listCodeRepositories(const ListCodeRepositoriesRequest &request)
{
    return qobject_cast<ListCodeRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListCompilationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists model compilation jobs that satisfy various
 *
 * filters>
 *
 * To create a model compilation job, use <a>CreateCompilationJob</a>. To get information about a particular model
 * compilation job you have created, use
 */
ListCompilationJobsResponse * SageMakerClient::listCompilationJobs(const ListCompilationJobsRequest &request)
{
    return qobject_cast<ListCompilationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListEndpointConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists endpoint
 */
ListEndpointConfigsResponse * SageMakerClient::listEndpointConfigs(const ListEndpointConfigsRequest &request)
{
    return qobject_cast<ListEndpointConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists
 */
ListEndpointsResponse * SageMakerClient::listEndpoints(const ListEndpointsRequest &request)
{
    return qobject_cast<ListEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListHyperParameterTuningJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of <a>HyperParameterTuningJobSummary</a> objects that describe the hyperparameter tuning jobs launched in
 * your
 */
ListHyperParameterTuningJobsResponse * SageMakerClient::listHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest &request)
{
    return qobject_cast<ListHyperParameterTuningJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListLabelingJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of labeling
 */
ListLabelingJobsResponse * SageMakerClient::listLabelingJobs(const ListLabelingJobsRequest &request)
{
    return qobject_cast<ListLabelingJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListLabelingJobsForWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of labeling jobs assigned to a specified work
 */
ListLabelingJobsForWorkteamResponse * SageMakerClient::listLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest &request)
{
    return qobject_cast<ListLabelingJobsForWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelPackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the model packages that have been
 */
ListModelPackagesResponse * SageMakerClient::listModelPackages(const ListModelPackagesRequest &request)
{
    return qobject_cast<ListModelPackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists models created with the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
 */
ListModelsResponse * SageMakerClient::listModels(const ListModelsRequest &request)
{
    return qobject_cast<ListModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListNotebookInstanceLifecycleConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists notebook instance lifestyle configurations created with the <a>CreateNotebookInstanceLifecycleConfig</a>
 */
ListNotebookInstanceLifecycleConfigsResponse * SageMakerClient::listNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest &request)
{
    return qobject_cast<ListNotebookInstanceLifecycleConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListNotebookInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Amazon SageMaker notebook instances in the requester's account in an AWS Region.
 */
ListNotebookInstancesResponse * SageMakerClient::listNotebookInstances(const ListNotebookInstancesRequest &request)
{
    return qobject_cast<ListNotebookInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListSubscribedWorkteamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the work teams that you are subscribed to in the AWS Marketplace. The list may be empty if no work team
 * satisfies the filter specified in the <code>NameContains</code>
 */
ListSubscribedWorkteamsResponse * SageMakerClient::listSubscribedWorkteams(const ListSubscribedWorkteamsRequest &request)
{
    return qobject_cast<ListSubscribedWorkteamsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tags for the specified Amazon SageMaker
 */
ListTagsResponse * SageMakerClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTrainingJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists training
 */
ListTrainingJobsResponse * SageMakerClient::listTrainingJobs(const ListTrainingJobsRequest &request)
{
    return qobject_cast<ListTrainingJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTrainingJobsForHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of <a>TrainingJobSummary</a> objects that describe the training jobs that a hyperparameter tuning job
 */
ListTrainingJobsForHyperParameterTuningJobResponse * SageMakerClient::listTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest &request)
{
    return qobject_cast<ListTrainingJobsForHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTransformJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists transform
 */
ListTransformJobsResponse * SageMakerClient::listTransformJobs(const ListTransformJobsRequest &request)
{
    return qobject_cast<ListTransformJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListWorkteamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of work teams that you have defined in a region. The list may be empty if no work team satisfies the filter
 * specified in the <code>NameContains</code>
 */
ListWorkteamsResponse * SageMakerClient::listWorkteams(const ListWorkteamsRequest &request)
{
    return qobject_cast<ListWorkteamsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * RenderUiTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Renders the UI template so that you can preview the worker's experience.
 */
RenderUiTemplateResponse * SageMakerClient::renderUiTemplate(const RenderUiTemplateRequest &request)
{
    return qobject_cast<RenderUiTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * SearchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Finds Amazon SageMaker resources that match a search query. Matching resource objects are returned as a list of
 * <code>SearchResult</code> objects in the response. You can sort the search results by any resource property in a
 * ascending or descending
 *
 * order>
 *
 * You can query against the following value types: numerical, text, Booleans, and
 */
SearchResponse * SageMakerClient::search(const SearchRequest &request)
{
    return qobject_cast<SearchResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StartNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches an ML compute instance with the latest version of the libraries and attaches your ML storage volume. After
 * configuring the notebook instance, Amazon SageMaker sets the notebook instance status to <code>InService</code>. A
 * notebook instance's status must be <code>InService</code> before you can connect to your Jupyter notebook.
 */
StartNotebookInstanceResponse * SageMakerClient::startNotebookInstance(const StartNotebookInstanceRequest &request)
{
    return qobject_cast<StartNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopCompilationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a model compilation
 *
 * job>
 *
 * To stop a job, Amazon SageMaker sends the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
 * hasn't stopped, it sends the SIGKILL
 *
 * signal>
 *
 * When it receives a <code>StopCompilationJob</code> request, Amazon SageMaker changes the
 * <a>CompilationJobSummary$CompilationJobStatus</a> of the job to <code>Stopping</code>. After Amazon SageMaker stops the
 * job, it sets the <a>CompilationJobSummary$CompilationJobStatus</a> to <code>Stopped</code>.
 */
StopCompilationJobResponse * SageMakerClient::stopCompilationJob(const StopCompilationJobRequest &request)
{
    return qobject_cast<StopCompilationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running hyperparameter tuning job and all running training jobs that the tuning job
 *
 * launched>
 *
 * All model artifacts output from the training jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that
 * the training jobs write to Amazon CloudWatch Logs are still available in CloudWatch. After the tuning job moves to the
 * <code>Stopped</code> state, it releases all reserved resources for the tuning
 */
StopHyperParameterTuningJobResponse * SageMakerClient::stopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest &request)
{
    return qobject_cast<StopHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopLabelingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running labeling job. A job that is stopped cannot be restarted. Any results obtained before the job is stopped
 * are placed in the Amazon S3 output
 */
StopLabelingJobResponse * SageMakerClient::stopLabelingJob(const StopLabelingJobRequest &request)
{
    return qobject_cast<StopLabelingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the ML compute instance. Before terminating the instance, Amazon SageMaker disconnects the ML storage volume
 * from it. Amazon SageMaker preserves the ML storage volume. Amazon SageMaker stops charging you for the ML compute
 * instance when you call
 *
 * <code>StopNotebookInstance</code>>
 *
 * To access data on the ML storage volume for a notebook instance that has been terminated, call the
 * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code> launches another ML compute instance,
 * configures it, and attaches the preserved ML storage volume so you can continue your work.
 */
StopNotebookInstanceResponse * SageMakerClient::stopNotebookInstance(const StopNotebookInstanceRequest &request)
{
    return qobject_cast<StopNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the <code>SIGTERM</code> signal, which delays
 * job termination for 120 seconds. Algorithms might use this 120-second window to save the model artifacts, so the results
 * of the training is not lost.
 *
 * </p
 *
 * When it receives a <code>StopTrainingJob</code> request, Amazon SageMaker changes the status of the job to
 * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the status to
 */
StopTrainingJobResponse * SageMakerClient::stopTrainingJob(const StopTrainingJobRequest &request)
{
    return qobject_cast<StopTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopTransformJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a transform
 *
 * job>
 *
 * When Amazon SageMaker receives a <code>StopTransformJob</code> request, the status of the job changes to
 * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set to <code>Stopped</code>. When you stop a
 * transform job before it is completed, Amazon SageMaker doesn't store the job's output in Amazon
 */
StopTransformJobResponse * SageMakerClient::stopTransformJob(const StopTransformJobRequest &request)
{
    return qobject_cast<StopTransformJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified Git repository with the specified
 */
UpdateCodeRepositoryResponse * SageMakerClient::updateCodeRepository(const UpdateCodeRepositoryRequest &request)
{
    return qobject_cast<UpdateCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploys the new <code>EndpointConfig</code> specified in the request, switches to using newly created endpoint, and then
 * deletes resources provisioned for the endpoint using the previous <code>EndpointConfig</code> (there is no availability
 * loss).
 *
 * </p
 *
 * When Amazon SageMaker receives the request, it sets the endpoint status to <code>Updating</code>. After updating the
 * endpoint, it sets the status to <code>InService</code>. To check the status of an endpoint, use the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a> API.
 *
 * </p <note>
 *
 * You must not delete an <code>EndpointConfig</code> in use by an endpoint that is live or while the
 * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being performed on the endpoint. To update an
 * endpoint, you must create a new
 */
UpdateEndpointResponse * SageMakerClient::updateEndpoint(const UpdateEndpointRequest &request)
{
    return qobject_cast<UpdateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateEndpointWeightsAndCapacitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates variant weight of one or more variants associated with an existing endpoint, or capacity of one variant
 * associated with an existing endpoint. When it receives the request, Amazon SageMaker sets the endpoint status to
 * <code>Updating</code>. After updating the endpoint, it sets the status to <code>InService</code>. To check the status of
 * an endpoint, use the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a> API.
 */
UpdateEndpointWeightsAndCapacitiesResponse * SageMakerClient::updateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest &request)
{
    return qobject_cast<UpdateEndpointWeightsAndCapacitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a notebook instance. NotebookInstance updates include upgrading or downgrading the ML compute instance used for
 * your notebook instance to accommodate changes in your workload
 */
UpdateNotebookInstanceResponse * SageMakerClient::updateNotebookInstance(const UpdateNotebookInstanceRequest &request)
{
    return qobject_cast<UpdateNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a notebook instance lifecycle configuration created with the <a>CreateNotebookInstanceLifecycleConfig</a>
 */
UpdateNotebookInstanceLifecycleConfigResponse * SageMakerClient::updateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<UpdateNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing work team with new member definitions or
 */
UpdateWorkteamResponse * SageMakerClient::updateWorkteam(const UpdateWorkteamRequest &request)
{
    return qobject_cast<UpdateWorkteamResponse *>(send(request));
}

/*!
 * \class QtAws::SageMaker::SageMakerClientPrivate
 * \brief The SageMakerClientPrivate class provides private implementation for SageMakerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerClientPrivate object with public implementation \a q.
 */
SageMakerClientPrivate::SageMakerClientPrivate(SageMakerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SageMaker
} // namespace QtAws
