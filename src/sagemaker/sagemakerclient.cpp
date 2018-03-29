/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sagemakerclient.h"
#include "sagemakerclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace SageMaker {

/**
 * @class  SageMakerClient
 *
 * @brief  Client for Amazon SageMaker Service
 *
 */

/**
 * @brief  Constructs a new SageMakerClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
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
    d->endpointPrefix = QStringLiteral("sagemaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Service");
    d->serviceName = QStringLiteral("sagemaker");
}

/**
 * @brief  Constructs a new SageMakerClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
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
    d->endpointPrefix = QStringLiteral("sagemaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Service");
    d->serviceName = QStringLiteral("sagemaker");
}

/**
 * Adds or overwrites one or more tags for the specified Amazon SageMaker resource. You can add tags to notebook instances,
 * training jobs, models, endpoint configurations, and endpoints.
 *
 * </p
 *
 * Each tag consists of a key and an optional value. Tag keys must be unique per resource. For more information about tags,
 * see <a href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
 * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User Guide</i>.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsResponse * SageMakerClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/**
 * Creates an endpoint using the endpoint configuration specified in the request. Amazon SageMaker uses the endpoint to
 * provision resources and deploy models. You create the endpoint configuration with the <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a> API.
 *
 * </p <note>
 *
 * Use this API only for hosting models using Amazon SageMaker hosting services.
 *
 * </p </note>
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
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
 *
 * API>
 *
 * For an example, see <a href="http://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1: Using the K-Means
 * Algorithm Provided by Amazon SageMaker</a>.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEndpointResponse * SageMakerClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/**
 * Creates an endpoint configuration that Amazon SageMaker hosting services uses to deploy models. In the configuration,
 * you identify one or more models, created using the <code>CreateModel</code> API, to deploy and the resources that you
 * want Amazon SageMaker to provision. Then you call the <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a> API.
 *
 * </p <note>
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
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEndpointConfigResponse * SageMakerClient::createEndpointConfig(const CreateEndpointConfigRequest &request)
{
    return qobject_cast<CreateEndpointConfigResponse *>(send(request));
}

/**
 * Creates a model in Amazon SageMaker. In the request, you name the model and describe one or more containers. For each
 * container, you specify the docker image containing inference code, artifacts (from prior training), and custom
 * environment map that the inference code uses when you deploy the model into production.
 *
 * </p
 *
 * Use this API to create a model only if you want to use Amazon SageMaker hosting services. To host your model, you create
 * an endpoint configuration with the <code>CreateEndpointConfig</code> API, and then create an endpoint with the
 * <code>CreateEndpoint</code> API.
 *
 * </p
 *
 * Amazon SageMaker then deploys all of the containers that you defined for the model in the hosting environment.
 *
 * </p
 *
 * In the <code>CreateModel</code> request, you must define a container with the <code>PrimaryContainer</code> parameter.
 *
 * </p
 *
 * In the request, you also provide an IAM role that Amazon SageMaker can assume to access model artifacts and docker image
 * for deployment on ML compute hosting instances. In addition, you also use the IAM role to manage permissions the
 * inference code needs. For example, if the inference code access any other AWS resources, you grant necessary permissions
 * via this
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateModelResponse * SageMakerClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/**
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
 * For more information, see <a href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It Works</a>.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateNotebookInstanceResponse * SageMakerClient::createNotebookInstance(const CreateNotebookInstanceRequest &request)
{
    return qobject_cast<CreateNotebookInstanceResponse *>(send(request));
}

/**
 * Creates a lifecycle configuration that you can associate with a notebook instance. A <i>lifecycle configuration</i> is a
 * collection of shell scripts that run when you create or start a notebook
 *
 * instance>
 *
 * For information about notebook instance lifestyle configurations, see
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateNotebookInstanceLifecycleConfigResponse * SageMakerClient::createNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<CreateNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/**
 * Returns a URL that you can use to connect to the Juypter server from a notebook instance. In the Amazon SageMaker
 * console, when you choose <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab showing the
 * Jupyter server home page from the notebook instance. The console uses this API to get the URL and show the page.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePresignedNotebookInstanceUrlResponse * SageMakerClient::createPresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    return qobject_cast<CreatePresignedNotebookInstanceUrlResponse *>(send(request));
}

/**
 * Starts a model training job. After training completes, Amazon SageMaker saves the resulting model artifacts to an Amazon
 * S3 location that you specify.
 *
 * </p
 *
 * If you choose to host your model using Amazon SageMaker hosting services, you can use the resulting model artifacts as
 * part of the model. You can also use the artifacts in a deep learning service other than Amazon SageMaker, provided that
 * you know how to use them for inferences.
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
 * <code>HyperParameters</code> - Specify these algorithm-specific parameters to influence the quality of the final model.
 * For a list of hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
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
 * <code>StoppingCondition</code> - Sets a duration for training. Use this parameter to cap model training costs.
 *
 * </p </li> </ul>
 *
 * For more information about Amazon SageMaker, see <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It Works</a>.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTrainingJobResponse * SageMakerClient::createTrainingJob(const CreateTrainingJobRequest &request)
{
    return qobject_cast<CreateTrainingJobResponse *>(send(request));
}

/**
 * Deletes an endpoint. Amazon SageMaker frees up all of the resources that were deployed when the endpoint was created.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEndpointResponse * SageMakerClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/**
 * Deletes an endpoint configuration. The <code>DeleteEndpoingConfig</code> API deletes only the specified configuration.
 * It does not delete endpoints created using the configuration.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEndpointConfigResponse * SageMakerClient::deleteEndpointConfig(const DeleteEndpointConfigRequest &request)
{
    return qobject_cast<DeleteEndpointConfigResponse *>(send(request));
}

/**
 * Deletes a model. The <code>DeleteModel</code> API deletes only the model entry that was created in Amazon SageMaker when
 * you called the <a href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a> API. It
 * does not delete model artifacts, inference code, or the IAM role that you specified when creating the model.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteModelResponse * SageMakerClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/**
 * Deletes an Amazon SageMaker notebook instance. Before you can delete a notebook instance, you must call the
 * <code>StopNotebookInstance</code> API.
 *
 * </p <b>
 *
 * When you delete a notebook instance, you lose all of your data. Amazon SageMaker removes the ML compute instance, and
 * deletes the ML storage volume and the network interface associated with the notebook instance.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteNotebookInstanceResponse * SageMakerClient::deleteNotebookInstance(const DeleteNotebookInstanceRequest &request)
{
    return qobject_cast<DeleteNotebookInstanceResponse *>(send(request));
}

/**
 * Deletes a notebook instance lifecycle
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteNotebookInstanceLifecycleConfigResponse * SageMakerClient::deleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<DeleteNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/**
 * Deletes the specified tags from an Amazon SageMaker
 *
 * resource>
 *
 * To list a resource's tags, use the <code>ListTags</code> API.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagsResponse * SageMakerClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/**
 * Returns the description of an
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEndpointResponse * SageMakerClient::describeEndpoint(const DescribeEndpointRequest &request)
{
    return qobject_cast<DescribeEndpointResponse *>(send(request));
}

/**
 * Returns the description of an endpoint configuration created using the <code>CreateEndpointConfig</code>
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEndpointConfigResponse * SageMakerClient::describeEndpointConfig(const DescribeEndpointConfigRequest &request)
{
    return qobject_cast<DescribeEndpointConfigResponse *>(send(request));
}

/**
 * Describes a model that you created using the <code>CreateModel</code>
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeModelResponse * SageMakerClient::describeModel(const DescribeModelRequest &request)
{
    return qobject_cast<DescribeModelResponse *>(send(request));
}

/**
 * Returns information about a notebook
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeNotebookInstanceResponse * SageMakerClient::describeNotebookInstance(const DescribeNotebookInstanceRequest &request)
{
    return qobject_cast<DescribeNotebookInstanceResponse *>(send(request));
}

/**
 * Returns a description of a notebook instance lifecycle
 *
 * configuration>
 *
 * For information about notebook instance lifestyle configurations, see
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeNotebookInstanceLifecycleConfigResponse * SageMakerClient::describeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<DescribeNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/**
 * Returns information about a training
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTrainingJobResponse * SageMakerClient::describeTrainingJob(const DescribeTrainingJobRequest &request)
{
    return qobject_cast<DescribeTrainingJobResponse *>(send(request));
}

/**
 * Lists endpoint
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListEndpointConfigsResponse * SageMakerClient::listEndpointConfigs(const ListEndpointConfigsRequest &request)
{
    return qobject_cast<ListEndpointConfigsResponse *>(send(request));
}

/**
 * Lists
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListEndpointsResponse * SageMakerClient::listEndpoints(const ListEndpointsRequest &request)
{
    return qobject_cast<ListEndpointsResponse *>(send(request));
}

/**
 * Lists models created with the <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListModelsResponse * SageMakerClient::listModels(const ListModelsRequest &request)
{
    return qobject_cast<ListModelsResponse *>(send(request));
}

/**
 * Lists notebook instance lifestyle configurations created with the
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListNotebookInstanceLifecycleConfigsResponse * SageMakerClient::listNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest &request)
{
    return qobject_cast<ListNotebookInstanceLifecycleConfigsResponse *>(send(request));
}

/**
 * Returns a list of the Amazon SageMaker notebook instances in the requester's account in an AWS Region.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListNotebookInstancesResponse * SageMakerClient::listNotebookInstances(const ListNotebookInstancesRequest &request)
{
    return qobject_cast<ListNotebookInstancesResponse *>(send(request));
}

/**
 * Returns the tags for the specified Amazon SageMaker
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsResponse * SageMakerClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/**
 * Lists training
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTrainingJobsResponse * SageMakerClient::listTrainingJobs(const ListTrainingJobsRequest &request)
{
    return qobject_cast<ListTrainingJobsResponse *>(send(request));
}

/**
 * Launches an ML compute instance with the latest version of the libraries and attaches your ML storage volume. After
 * configuring the notebook instance, Amazon SageMaker sets the notebook instance status to <code>InService</code>. A
 * notebook instance's status must be <code>InService</code> before you can connect to your Jupyter notebook.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartNotebookInstanceResponse * SageMakerClient::startNotebookInstance(const StartNotebookInstanceRequest &request)
{
    return qobject_cast<StartNotebookInstanceResponse *>(send(request));
}

/**
 * Terminates the ML compute instance. Before terminating the instance, Amazon SageMaker disconnects the ML storage volume
 * from it. Amazon SageMaker preserves the ML storage volume.
 *
 * </p
 *
 * To access data on the ML storage volume for a notebook instance that has been terminated, call the
 * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code> launches another ML compute instance,
 * configures it, and attaches the preserved ML storage volume so you can continue your work.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopNotebookInstanceResponse * SageMakerClient::stopNotebookInstance(const StopNotebookInstanceRequest &request)
{
    return qobject_cast<StopNotebookInstanceResponse *>(send(request));
}

/**
 * Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the <code>SIGTERM</code> signal, which delays
 * job termination for 120 seconds. Algorithms might use this 120-second window to save the model artifacts, so the results
 * of the training is not lost.
 *
 * </p
 *
 * Training algorithms provided by Amazon SageMaker save the intermediate results of a model training job. This
 * intermediate data is a valid model artifact. You can use the model artifacts that are saved when Amazon SageMaker stops
 * a training job to create a model.
 *
 * </p
 *
 * When it receives a <code>StopTrainingJob</code> request, Amazon SageMaker changes the status of the job to
 * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the status to
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopTrainingJobResponse * SageMakerClient::stopTrainingJob(const StopTrainingJobRequest &request)
{
    return qobject_cast<StopTrainingJobResponse *>(send(request));
}

/**
 * Deploys the new <code>EndpointConfig</code> specified in the request, switches to using newly created endpoint, and then
 * deletes resources provisioned for the endpoint using the previous <code>EndpointConfig</code> (there is no availability
 * loss).
 *
 * </p
 *
 * When Amazon SageMaker receives the request, it sets the endpoint status to <code>Updating</code>. After updating the
 * endpoint, it sets the status to <code>InService</code>. To check the status of an endpoint, use the <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a> API.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEndpointResponse * SageMakerClient::updateEndpoint(const UpdateEndpointRequest &request)
{
    return qobject_cast<UpdateEndpointResponse *>(send(request));
}

/**
 * Updates variant weight of one or more variants associated with an existing endpoint, or capacity of one variant
 * associated with an existing endpoint. When it receives the request, Amazon SageMaker sets the endpoint status to
 * <code>Updating</code>. After updating the endpoint, it sets the status to <code>InService</code>. To check the status of
 * an endpoint, use the <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a> API.
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEndpointWeightsAndCapacitiesResponse * SageMakerClient::updateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest &request)
{
    return qobject_cast<UpdateEndpointWeightsAndCapacitiesResponse *>(send(request));
}

/**
 * Updates a notebook instance. NotebookInstance updates include upgrading or downgrading the ML compute instance used for
 * your notebook instance to accommodate changes in your workload requirements. You can also update the VPC security
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateNotebookInstanceResponse * SageMakerClient::updateNotebookInstance(const UpdateNotebookInstanceRequest &request)
{
    return qobject_cast<UpdateNotebookInstanceResponse *>(send(request));
}

/**
 * Updates a notebook instance lifecycle configuration created with the
 *
 * @param  request Request to send to Amazon SageMaker Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateNotebookInstanceLifecycleConfigResponse * SageMakerClient::updateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<UpdateNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  SageMakerClientPrivate
 *
 * @brief  Private implementation for SageMakerClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerClientPrivate object.
 *
 * @param  q  Pointer to this object's public SageMakerClient instance.
 */
SageMakerClientPrivate::SageMakerClientPrivate(SageMakerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SageMaker
} // namespace QtAws
