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

#include "ecsclient.h"
#include "ecsclient_p.h"

#include "core/awssignaturev4.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "deleteattributesrequest.h"
#include "deleteattributesresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "deregistercontainerinstancerequest.h"
#include "deregistercontainerinstanceresponse.h"
#include "deregistertaskdefinitionrequest.h"
#include "deregistertaskdefinitionresponse.h"
#include "describeclustersrequest.h"
#include "describeclustersresponse.h"
#include "describecontainerinstancesrequest.h"
#include "describecontainerinstancesresponse.h"
#include "describeservicesrequest.h"
#include "describeservicesresponse.h"
#include "describetaskdefinitionrequest.h"
#include "describetaskdefinitionresponse.h"
#include "describetasksrequest.h"
#include "describetasksresponse.h"
#include "discoverpollendpointrequest.h"
#include "discoverpollendpointresponse.h"
#include "listattributesrequest.h"
#include "listattributesresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listcontainerinstancesrequest.h"
#include "listcontainerinstancesresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "listtaskdefinitionfamiliesrequest.h"
#include "listtaskdefinitionfamiliesresponse.h"
#include "listtaskdefinitionsrequest.h"
#include "listtaskdefinitionsresponse.h"
#include "listtasksrequest.h"
#include "listtasksresponse.h"
#include "putattributesrequest.h"
#include "putattributesresponse.h"
#include "registercontainerinstancerequest.h"
#include "registercontainerinstanceresponse.h"
#include "registertaskdefinitionrequest.h"
#include "registertaskdefinitionresponse.h"
#include "runtaskrequest.h"
#include "runtaskresponse.h"
#include "starttaskrequest.h"
#include "starttaskresponse.h"
#include "stoptaskrequest.h"
#include "stoptaskresponse.h"
#include "submitcontainerstatechangerequest.h"
#include "submitcontainerstatechangeresponse.h"
#include "submittaskstatechangerequest.h"
#include "submittaskstatechangeresponse.h"
#include "updatecontaineragentrequest.h"
#include "updatecontaineragentresponse.h"
#include "updatecontainerinstancesstaterequest.h"
#include "updatecontainerinstancesstateresponse.h"
#include "updateservicerequest.h"
#include "updateserviceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ECS
 * \brief The QtAws::ECS contains stuff...
 *
 * \inmodule QtAwsEcs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::EcsClient
 * \brief The EcsClient class provides access to the Amazon EC2 Container Service ( ECS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsECS
 *
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 */

/*!
 * \brief Constructs a EcsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EcsClient::EcsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EcsClientPrivate(this), parent)
{
    Q_D(EcsClient);
    d->apiVersion = QStringLiteral("2014-11-13");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ecs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon EC2 Container Service");
    d->serviceName = QStringLiteral("ecs");
}

/*!
 * \overload EcsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EcsClient::EcsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EcsClientPrivate(this), parent)
{
    Q_D(EcsClient);
    d->apiVersion = QStringLiteral("2014-11-13");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ecs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon EC2 Container Service");
    d->serviceName = QStringLiteral("ecs");
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon ECS cluster. By default, your account receives a <code>default</code> cluster when you launch your
 * first container instance. However, you can create your own cluster with a unique name with the
 * <code>CreateCluster</code>
 *
 * action> <note>
 *
 * When you call the <a>CreateCluster</a> API operation, Amazon ECS attempts to create the service-linked role for your
 * account so that required resources in other AWS services can be managed on your behalf. However, if the IAM user that
 * makes the call does not have permissions to create the service-linked role, it is not created. For more information, see
 * <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
 * Service-Linked Roles for Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
 */
CreateClusterResponse * EcsClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a
 * service drops below <code>desiredCount</code>, Amazon ECS spawns another copy of the task in the specified cluster. To
 * update an existing service, see
 *
 * <a>UpdateService</a>>
 *
 * In addition to maintaining the desired count of tasks in your service, you can optionally run your service behind a load
 * balancer. The load balancer distributes traffic across the tasks that are associated with the service. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service Load Balancing</a>
 * in the <i>Amazon Elastic Container Service Developer
 *
 * Guide</i>>
 *
 * You can optionally specify a deployment configuration for your service. During a deployment, the service scheduler uses
 * the <code>minimumHealthyPercent</code> and <code>maximumPercent</code> parameters to determine the deployment strategy.
 * The deployment is triggered by changing the task definition or the desired count of a service with an
 * <a>UpdateService</a>
 *
 * operation>
 *
 * The <code>minimumHealthyPercent</code> represents a lower limit on the number of your service's tasks that must remain
 * in the <code>RUNNING</code> state during a deployment, as a percentage of the <code>desiredCount</code> (rounded up to
 * the nearest integer). This parameter enables you to deploy without using additional cluster capacity. For example, if
 * your service has a <code>desiredCount</code> of four tasks and a <code>minimumHealthyPercent</code> of 50%, the
 * scheduler can stop two existing tasks to free up cluster capacity before starting two new tasks. Tasks for services that
 * <i>do not</i> use a load balancer are considered healthy if they are in the <code>RUNNING</code> state. Tasks for
 * services that <i>do</i> use a load balancer are considered healthy if they are in the <code>RUNNING</code> state and the
 * container instance they are hosted on is reported as healthy by the load balancer. The default value for
 * <code>minimumHealthyPercent</code> is 50% in the console and 100% for the AWS CLI, the AWS SDKs, and the
 *
 * APIs>
 *
 * The <code>maximumPercent</code> parameter represents an upper limit on the number of your service's tasks that are
 * allowed in the <code>RUNNING</code> or <code>PENDING</code> state during a deployment, as a percentage of the
 * <code>desiredCount</code> (rounded down to the nearest integer). This parameter enables you to define the deployment
 * batch size. For example, if your service has a <code>desiredCount</code> of four tasks and a <code>maximumPercent</code>
 * value of 200%, the scheduler can start four new tasks before stopping the four older tasks (provided that the cluster
 * resources required to do this are available). The default value for <code>maximumPercent</code> is
 *
 * 200%>
 *
 * When the service scheduler launches new tasks, it determines task placement in your cluster using the following
 *
 * logic> <ul> <li>
 *
 * Determine which of the container instances in your cluster can support your service's task definition (for example, they
 * have the required CPU, memory, ports, and container instance
 *
 * attributes)> </li> <li>
 *
 * By default, the service scheduler attempts to balance tasks across Availability Zones in this manner (although you can
 * choose a different placement strategy) with the <code>placementStrategy</code>
 *
 * parameter)> <ul> <li>
 *
 * Sort the valid container instances by the fewest number of running tasks for this service in the same Availability Zone
 * as the instance. For example, if zone A has one running service task and zones B and C each have zero, valid container
 * instances in either zone B or C are considered optimal for
 *
 * placement> </li> <li>
 *
 * Place the new service task on a valid container instance in an optimal Availability Zone (based on the previous steps),
 * favoring container instances with the fewest number of running tasks for this
 */
CreateServiceResponse * EcsClient::createService(const CreateServiceRequest &request)
{
    return qobject_cast<CreateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DeleteAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more custom attributes from an Amazon ECS
 */
DeleteAttributesResponse * EcsClient::deleteAttributes(const DeleteAttributesRequest &request)
{
    return qobject_cast<DeleteAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it.
 * You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with
 */
DeleteClusterResponse * EcsClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified service within a cluster. You can delete a service if you have no running tasks in it and the
 * desired task count is zero. If the service is actively maintaining tasks, you cannot delete it, and you must update the
 * service to a desired task count of zero. For more information, see
 *
 * <a>UpdateService</a>> <note>
 *
 * When you delete a service, if there are still running tasks that require cleanup, the service status moves from
 * <code>ACTIVE</code> to <code>DRAINING</code>, and the service is no longer visible in the console or in
 * <a>ListServices</a> API operations. After the tasks have stopped, then the service status moves from
 * <code>DRAINING</code> to <code>INACTIVE</code>. Services in the <code>DRAINING</code> or <code>INACTIVE</code> status
 * can still be viewed with <a>DescribeServices</a> API operations. However, in the future, <code>INACTIVE</code> services
 * may be cleaned up and purged from Amazon ECS record keeping, and <a>DescribeServices</a> API operations on those
 * services return a <code>ServiceNotFoundException</code>
 */
DeleteServiceResponse * EcsClient::deleteService(const DeleteServiceRequest &request)
{
    return qobject_cast<DeleteServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DeregisterContainerInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters an Amazon ECS container instance from the specified cluster. This instance is no longer available to run
 *
 * tasks>
 *
 * If you intend to use the container instance for some other purpose after deregistration, you should stop all of the
 * tasks running on the container instance before deregistration. That prevents any orphaned tasks from consuming
 *
 * resources>
 *
 * Deregistering a container instance removes the instance from a cluster, but it does not terminate the EC2 instance; if
 * you are finished using the instance, be sure to terminate it in the Amazon EC2 console to stop
 *
 * billing> <note>
 *
 * If you terminate a running container instance, Amazon ECS automatically deregisters the instance from your cluster
 * (stopped container instances or instances with disconnected agents are not automatically deregistered when
 */
DeregisterContainerInstanceResponse * EcsClient::deregisterContainerInstance(const DeregisterContainerInstanceRequest &request)
{
    return qobject_cast<DeregisterContainerInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DeregisterTaskDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as
 * <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to
 * run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or
 * down by modifying the service's desired
 *
 * count>
 *
 * You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update
 * an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10-minute
 * window following deregistration where these restrictions have not yet taken
 *
 * effect)> <note>
 *
 * At this time, <code>INACTIVE</code> task definitions remain discoverable in your account indefinitely; however, this
 * behavior is subject to change in the future, so you should not rely on <code>INACTIVE</code> task definitions persisting
 * beyond the lifecycle of any associated tasks and
 */
DeregisterTaskDefinitionResponse * EcsClient::deregisterTaskDefinition(const DeregisterTaskDefinitionRequest &request)
{
    return qobject_cast<DeregisterTaskDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DescribeClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your
 */
DescribeClustersResponse * EcsClient::describeClusters(const DescribeClustersRequest &request)
{
    return qobject_cast<DescribeClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DescribeContainerInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes Amazon Elastic Container Service container instances. Returns metadata about registered and remaining
 * resources on each container instance
 */
DescribeContainerInstancesResponse * EcsClient::describeContainerInstances(const DescribeContainerInstancesRequest &request)
{
    return qobject_cast<DescribeContainerInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DescribeServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified services running in your
 */
DescribeServicesResponse * EcsClient::describeServices(const DescribeServicesRequest &request)
{
    return qobject_cast<DescribeServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DescribeTaskDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information about a
 * specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that
 *
 * family> <note>
 *
 * You can only describe <code>INACTIVE</code> task definitions while an active task or service references
 */
DescribeTaskDefinitionResponse * EcsClient::describeTaskDefinition(const DescribeTaskDefinitionRequest &request)
{
    return qobject_cast<DescribeTaskDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DescribeTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a specified task or
 */
DescribeTasksResponse * EcsClient::describeTasks(const DescribeTasksRequest &request)
{
    return qobject_cast<DescribeTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * DiscoverPollEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action is only used by the Amazon ECS agent, and it is not intended for use outside of the
 *
 * agent> </note>
 *
 * Returns an endpoint for the Amazon ECS agent to poll for
 */
DiscoverPollEndpointResponse * EcsClient::discoverPollEndpoint(const DiscoverPollEndpointRequest &request)
{
    return qobject_cast<DiscoverPollEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the attributes for Amazon ECS resources within a specified target type and cluster. When you specify a target type
 * and cluster, <code>ListAttributes</code> returns a list of attribute objects, one for each attribute on each resource.
 * You can filter the list of results to a single attribute name to only return results that have that name. You can also
 * filter the results by attribute name and value, for example, to see which container instances in a cluster are running a
 * Linux AMI (<code>ecs.os-type=linux</code>).
 */
ListAttributesResponse * EcsClient::listAttributes(const ListAttributesRequest &request)
{
    return qobject_cast<ListAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing
 */
ListClustersResponse * EcsClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListContainerInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of container instances in a specified cluster. You can filter the results of a
 * <code>ListContainerInstances</code> operation with cluster query language statements inside the <code>filter</code>
 * parameter. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster Query Language</a>
 * in the <i>Amazon Elastic Container Service Developer
 */
ListContainerInstancesResponse * EcsClient::listContainerInstances(const ListContainerInstancesRequest &request)
{
    return qobject_cast<ListContainerInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the services that are running in a specified
 */
ListServicesResponse * EcsClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListTaskDefinitionFamiliesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of task definition families that are registered to your account (which may include task definition
 * families that no longer have any <code>ACTIVE</code> task definition
 *
 * revisions)>
 *
 * You can filter out task definition families that do not contain any <code>ACTIVE</code> task definition revisions by
 * setting the <code>status</code> parameter to <code>ACTIVE</code>. You can also filter the results with the
 * <code>familyPrefix</code>
 */
ListTaskDefinitionFamiliesResponse * EcsClient::listTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest &request)
{
    return qobject_cast<ListTaskDefinitionFamiliesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListTaskDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of task definitions that are registered to your account. You can filter the results by family name with
 * the <code>familyPrefix</code> parameter or by status with the <code>status</code>
 */
ListTaskDefinitionsResponse * EcsClient::listTaskDefinitions(const ListTaskDefinitionsRequest &request)
{
    return qobject_cast<ListTaskDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * ListTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container
 * instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and
 * <code>desiredStatus</code>
 *
 * parameters>
 *
 * Recently stopped tasks might appear in the returned results. Currently, stopped tasks appear in the returned results for
 * at least one hour.
 */
ListTasksResponse * EcsClient::listTasks(const ListTasksRequest &request)
{
    return qobject_cast<ListTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * PutAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create or update an attribute on an Amazon ECS resource. If the attribute does not exist, it is created. If the
 * attribute exists, its value is replaced with the specified value. To delete an attribute, use <a>DeleteAttributes</a>.
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
 * in the <i>Amazon Elastic Container Service Developer
 */
PutAttributesResponse * EcsClient::putAttributes(const PutAttributesRequest &request)
{
    return qobject_cast<PutAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * RegisterContainerInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action is only used by the Amazon ECS agent, and it is not intended for use outside of the
 *
 * agent> </note>
 *
 * Registers an EC2 instance into the specified cluster. This instance becomes available to place containers
 */
RegisterContainerInstanceResponse * EcsClient::registerContainerInstance(const RegisterContainerInstanceRequest &request)
{
    return qobject_cast<RegisterContainerInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * RegisterTaskDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally,
 * you can add data volumes to your containers with the <code>volumes</code> parameter. For more information about task
 * definition parameters and defaults, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a>
 * in the <i>Amazon Elastic Container Service Developer
 *
 * Guide</i>>
 *
 * You can specify an IAM role for your task with the <code>taskRoleArn</code> parameter. When you specify an IAM role for
 * a task, its containers can then use the latest versions of the AWS CLI or SDKs to make API requests to the AWS services
 * that are specified in the IAM policy associated with the role. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM Roles for Tasks</a> in the
 * <i>Amazon Elastic Container Service Developer
 *
 * Guide</i>>
 *
 * You can specify a Docker networking mode for the containers in your task definition with the <code>networkMode</code>
 * parameter. The available network modes correspond to those described in <a
 * href="https://docs.docker.com/engine/reference/run/#/network-settings">Network settings</a> in the Docker run reference.
 * If you specify the <code>awsvpc</code> network mode, the task is allocated an Elastic Network Interface, and you must
 * specify a <a>NetworkConfiguration</a> when you create a service or run a task with the task definition. For more
 * information, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
 * Networking</a> in the <i>Amazon Elastic Container Service Developer
 */
RegisterTaskDefinitionResponse * EcsClient::registerTaskDefinition(const RegisterTaskDefinitionRequest &request)
{
    return qobject_cast<RegisterTaskDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * RunTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new task using the specified task
 *
 * definition>
 *
 * You can allow Amazon ECS to place tasks for you, or you can customize how Amazon ECS places tasks using placement
 * constraints and placement strategies. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling Tasks</a> in the
 * <i>Amazon Elastic Container Service Developer
 *
 * Guide</i>>
 *
 * Alternatively, you can use <a>StartTask</a> to use your own scheduler or place tasks manually on specific container
 *
 * instances>
 *
 * The Amazon ECS API follows an eventual consistency model, due to the distributed nature of the system supporting the
 * API. This means that the result of an API command you run that affects your Amazon ECS resources might not be
 * immediately visible to all subsequent commands you run. You should keep this in mind when you carry out an API command
 * that immediately follows a previous API
 *
 * command>
 *
 * To manage eventual consistency, you can do the
 *
 * following> <ul> <li>
 *
 * Confirm the state of the resource before you run a command to modify it. Run the DescribeTasks command using an
 * exponential backoff algorithm to ensure that you allow enough time for the previous command to propagate through the
 * system. To do this, run the DescribeTasks command repeatedly, starting with a couple of seconds of wait time, and
 * increasing gradually up to five minutes of wait
 *
 * time> </li> <li>
 *
 * Add wait time between subsequent commands, even if the DescribeTasks command returns an accurate response. Apply an
 * exponential backoff algorithm starting with a couple of seconds of wait time, and increase gradually up to about five
 * minutes of wait
 */
RunTaskResponse * EcsClient::runTask(const RunTaskRequest &request)
{
    return qobject_cast<RunTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * StartTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new task from the specified task definition on the specified container instance or
 *
 * instances>
 *
 * Alternatively, you can use <a>RunTask</a> to place tasks for you. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling Tasks</a> in the
 * <i>Amazon Elastic Container Service Developer
 */
StartTaskResponse * EcsClient::startTask(const StartTaskRequest &request)
{
    return qobject_cast<StartTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * StopTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running
 *
 * task>
 *
 * When <a>StopTask</a> is called on a task, the equivalent of <code>docker stop</code> is issued to the containers running
 * in the task. This results in a <code>SIGTERM</code> and a default 30-second timeout, after which <code>SIGKILL</code> is
 * sent and the containers are forcibly stopped. If the container handles the <code>SIGTERM</code> gracefully and exits
 * within 30 seconds from receiving it, no <code>SIGKILL</code> is
 *
 * sent> <note>
 *
 * The default 30-second timeout can be configured on the Amazon ECS container agent with the
 * <code>ECS_CONTAINER_STOP_TIMEOUT</code> variable. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon ECS Container Agent
 * Configuration</a> in the <i>Amazon Elastic Container Service Developer
 */
StopTaskResponse * EcsClient::stopTask(const StopTaskRequest &request)
{
    return qobject_cast<StopTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * SubmitContainerStateChangeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action is only used by the Amazon ECS agent, and it is not intended for use outside of the
 *
 * agent> </note>
 *
 * Sent to acknowledge that a container changed
 */
SubmitContainerStateChangeResponse * EcsClient::submitContainerStateChange(const SubmitContainerStateChangeRequest &request)
{
    return qobject_cast<SubmitContainerStateChangeResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * SubmitTaskStateChangeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This action is only used by the Amazon ECS agent, and it is not intended for use outside of the
 *
 * agent> </note>
 *
 * Sent to acknowledge that a task changed
 */
SubmitTaskStateChangeResponse * EcsClient::submitTaskStateChange(const SubmitTaskStateChangeRequest &request)
{
    return qobject_cast<SubmitTaskStateChangeResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * UpdateContainerAgentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Amazon ECS container agent on a specified container instance. Updating the Amazon ECS container agent does
 * not interrupt running tasks or services on the container instance. The process for updating the agent differs depending
 * on whether your container instance was launched with the Amazon ECS-optimized AMI or another operating
 *
 * system>
 *
 * <code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or Amazon Linux with the <code>ecs-init</code>
 * service installed and running. For help updating the Amazon ECS container agent on other operating systems, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually
 * Updating the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service Developer
 */
UpdateContainerAgentResponse * EcsClient::updateContainerAgent(const UpdateContainerAgentRequest &request)
{
    return qobject_cast<UpdateContainerAgentResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * UpdateContainerInstancesStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the status of an Amazon ECS container
 *
 * instance>
 *
 * You can change the status of a container instance to <code>DRAINING</code> to manually remove an instance from a
 * cluster, for example to perform system updates, update the Docker daemon, or scale down the cluster size.
 *
 * </p
 *
 * When you set a container instance to <code>DRAINING</code>, Amazon ECS prevents new tasks from being scheduled for
 * placement on the container instance and replacement service tasks are started on other container instances in the
 * cluster if the resources are available. Service tasks on the container instance that are in the <code>PENDING</code>
 * state are stopped
 *
 * immediately>
 *
 * Service tasks on the container instance that are in the <code>RUNNING</code> state are stopped and replaced according to
 * the service's deployment configuration parameters, <code>minimumHealthyPercent</code> and <code>maximumPercent</code>.
 * You can change the deployment configuration of your service using
 *
 * <a>UpdateService</a>> <ul> <li>
 *
 * If <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
 * during task replacement. For example, <code>desiredCount</code> is four tasks, a minimum of 50% allows the scheduler to
 * stop two existing tasks before starting two new tasks. If the minimum is 100%, the service scheduler can't remove
 * existing tasks until the replacement tasks are considered healthy. Tasks for services that do not use a load balancer
 * are considered healthy if they are in the <code>RUNNING</code> state. Tasks for services that use a load balancer are
 * considered healthy if they are in the <code>RUNNING</code> state and the container instance they are hosted on is
 * reported as healthy by the load
 *
 * balancer> </li> <li>
 *
 * The <code>maximumPercent</code> parameter represents an upper limit on the number of running tasks during task
 * replacement, which enables you to define the replacement batch size. For example, if <code>desiredCount</code> of four
 * tasks, a maximum of 200% starts four new tasks before stopping the four tasks to be drained (provided that the cluster
 * resources required to do this are available). If the maximum is 100%, then replacement tasks can't start until the
 * draining tasks have
 *
 * stopped> </li> </ul>
 *
 * Any <code>PENDING</code> or <code>RUNNING</code> tasks that do not belong to a service are not affected; you must wait
 * for them to finish or stop them
 *
 * manually>
 *
 * A container instance has completed draining when it has no more <code>RUNNING</code> tasks. You can verify this using
 *
 * <a>ListTasks</a>>
 *
 * When you set a container instance to <code>ACTIVE</code>, the Amazon ECS scheduler can begin scheduling tasks on the
 * instance
 */
UpdateContainerInstancesStateResponse * EcsClient::updateContainerInstancesState(const UpdateContainerInstancesStateRequest &request)
{
    return qobject_cast<UpdateContainerInstancesStateResponse *>(send(request));
}

/*!
 * Sends \a request to the EcsClient service, and returns a pointer to an
 * UpdateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the desired count, deployment configuration, network configuration, or task definition used in a
 *
 * service>
 *
 * You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster
 * that the service is running in and a new <code>desiredCount</code>
 *
 * parameter>
 *
 * If you have updated the Docker image of your application, you can create a new task definition with that image and
 * deploy it to your service. The service scheduler uses the minimum healthy percent and maximum percent parameters (in the
 * service's deployment configuration) to determine the deployment
 *
 * strategy> <note>
 *
 * If your updated Docker image uses the same tag as what is in the existing task definition for your service (for example,
 * <code>my_image:latest</code>), you do not need to create a new revision of your task definition. You can update the
 * service using the <code>forceNewDeployment</code> option. The new tasks launched by the deployment pull the current
 * image/tag combination from your repository when they
 *
 * start> </note>
 *
 * You can also update the deployment configuration of a service. When a deployment is triggered by updating the task
 * definition of a service, the service scheduler uses the deployment configuration parameters,
 * <code>minimumHealthyPercent</code> and <code>maximumPercent</code>, to determine the deployment
 *
 * strategy> <ul> <li>
 *
 * If <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
 * during a deployment. For example, if <code>desiredCount</code> is four tasks, a minimum of 50% allows the scheduler to
 * stop two existing tasks before starting two new tasks. Tasks for services that do not use a load balancer are considered
 * healthy if they are in the <code>RUNNING</code> state. Tasks for services that use a load balancer are considered
 * healthy if they are in the <code>RUNNING</code> state and the container instance they are hosted on is reported as
 * healthy by the load
 *
 * balancer> </li> <li>
 *
 * The <code>maximumPercent</code> parameter represents an upper limit on the number of running tasks during a deployment,
 * which enables you to define the deployment batch size. For example, if <code>desiredCount</code> is four tasks, a
 * maximum of 200% starts four new tasks before stopping the four older tasks (provided that the cluster resources required
 * to do this are
 *
 * available)> </li> </ul>
 *
 * When <a>UpdateService</a> stops a task during a deployment, the equivalent of <code>docker stop</code> is issued to the
 * containers running in the task. This results in a <code>SIGTERM</code> and a 30-second timeout, after which
 * <code>SIGKILL</code> is sent and the containers are forcibly stopped. If the container handles the <code>SIGTERM</code>
 * gracefully and exits within 30 seconds from receiving it, no <code>SIGKILL</code> is
 *
 * sent>
 *
 * When the service scheduler launches new tasks, it determines task placement in your cluster with the following
 *
 * logic> <ul> <li>
 *
 * Determine which of the container instances in your cluster can support your service's task definition (for example, they
 * have the required CPU, memory, ports, and container instance
 *
 * attributes)> </li> <li>
 *
 * By default, the service scheduler attempts to balance tasks across Availability Zones in this manner (although you can
 * choose a different placement
 *
 * strategy)> <ul> <li>
 *
 * Sort the valid container instances by the fewest number of running tasks for this service in the same Availability Zone
 * as the instance. For example, if zone A has one running service task and zones B and C each have zero, valid container
 * instances in either zone B or C are considered optimal for
 *
 * placement> </li> <li>
 *
 * Place the new service task on a valid container instance in an optimal Availability Zone (based on the previous steps),
 * favoring container instances with the fewest number of running tasks for this
 *
 * service> </li> </ul> </li> </ul>
 *
 * When the service scheduler stops running tasks, it attempts to maintain balance across the Availability Zones in your
 * cluster using the following logic:
 *
 * </p <ul> <li>
 *
 * Sort the container instances by the largest number of running tasks for this service in the same Availability Zone as
 * the instance. For example, if zone A has one running service task and zones B and C each have two, container instances
 * in either zone B or C are considered optimal for
 *
 * termination> </li> <li>
 *
 * Stop the task on a container instance in an optimal Availability Zone (based on the previous steps), favoring container
 * instances with the largest number of running tasks for this
 */
UpdateServiceResponse * EcsClient::updateService(const UpdateServiceRequest &request)
{
    return qobject_cast<UpdateServiceResponse *>(send(request));
}

/*!
 * \class QtAws::ECS::EcsClientPrivate
 * \brief The EcsClientPrivate class provides private implementation for EcsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a EcsClientPrivate object with public implementation \a q.
 */
EcsClientPrivate::EcsClientPrivate(EcsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ECS
} // namespace QtAws
