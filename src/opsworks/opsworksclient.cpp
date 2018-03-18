/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "opsworksclient.h"
#include "opsworksclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace OpsWorks {

/**
 * @class  OpsWorksClient
 *
 * @brief  Client for AWS OpsWorks
 *
 * <fullname>AWS OpsWorks</fullname>
 *
 * Welcome to the <i>AWS OpsWorks Stacks API Reference</i>. This guide provides descriptions, syntax, and usage examples
 * for AWS OpsWorks Stacks actions and data types, including common parameters and error codes.
 *
 * </p
 *
 * AWS OpsWorks Stacks is an application management service that provides an integrated experience for overseeing the
 * complete application lifecycle. For information about this product, go to the <a
 * href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page.
 *
 * </p
 *
 * <b>SDKs and CLI</b>
 *
 * </p
 *
 * The most common way to use the AWS OpsWorks Stacks API is by using the AWS Command Line Interface (CLI) or by using one
 * of the AWS SDKs to implement applications in your preferred language. For more information,
 *
 * see> <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS CLI</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="http://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
 * SDK for Java</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS SDK for .NET</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS SDK for PHP 2</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a>
 *
 * </p </li> <li>
 *
 * <a href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for Node.js</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for Python(Boto)</a>
 *
 * </p </li> </ul>
 *
 * <b>Endpoints</b>
 *
 * </p
 *
 * AWS OpsWorks Stacks supports the following endpoints, all HTTPS. You must connect to one of the following endpoints.
 * Stacks can only be accessed or managed within the endpoint in which they are
 *
 * created> <ul> <li>
 *
 * opsworks.us-east-1.amazonaws.co> </li> <li>
 *
 * opsworks.us-east-2.amazonaws.co> </li> <li>
 *
 * opsworks.us-west-1.amazonaws.co> </li> <li>
 *
 * opsworks.us-west-2.amazonaws.co> </li> <li>
 *
 * opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
 *
 * console> </li> <li>
 *
 * opsworks.eu-west-1.amazonaws.co> </li> <li>
 *
 * opsworks.eu-west-2.amazonaws.co> </li> <li>
 *
 * opsworks.eu-west-3.amazonaws.co> </li> <li>
 *
 * opsworks.eu-central-1.amazonaws.co> </li> <li>
 *
 * opsworks.ap-northeast-1.amazonaws.co> </li> <li>
 *
 * opsworks.ap-northeast-2.amazonaws.co> </li> <li>
 *
 * opsworks.ap-south-1.amazonaws.co> </li> <li>
 *
 * opsworks.ap-southeast-1.amazonaws.co> </li> <li>
 *
 * opsworks.ap-southeast-2.amazonaws.co> </li> <li>
 *
 * opsworks.sa-east-1.amazonaws.co> </li> </ul>
 *
 * <b>Chef Versions</b>
 *
 * </p
 *
 * When you call <a>CreateStack</a>, <a>CloneStack</a>, or <a>UpdateStack</a> we recommend you use the
 * <code>ConfigurationManager</code> parameter to specify the Chef version. The recommended and default value for Linux
 * stacks is currently 12. Windows stacks use Chef 12.2. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
 *
 * Versions</a>> <note>
 *
 * You can specify Chef 12, 11.10, or 11.4 for your Linux stack. We recommend migrating your existing Linux stacks to Chef
 * 12 as soon as
 */

/**
 * @brief  Constructs a new OpsWorksClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
OpsWorksClient::OpsWorksClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new OpsWorksClientPrivate(this), parent)
{
    Q_D(OpsWorksClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new OpsWorksClient object.
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
OpsWorksClient::OpsWorksClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new OpsWorksClientPrivate(this), parent)
{
    Q_D(OpsWorksClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Assign a registered instance to a
 *
 * layer> <ul> <li>
 *
 * You can assign registered on-premises instances to any layer
 *
 * type> </li> <li>
 *
 * You can assign registered Amazon EC2 instances only to custom
 *
 * layers> </li> <li>
 *
 * You cannot use this action with instances that were created with AWS OpsWorks
 *
 * Stacks> </li> </ul>
 *
 * <b>Required Permissions</b>: To use this action, an AWS Identity and Access Management (IAM) user must have a Manage
 * permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user
 * permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
 * User
 */
AssignInstanceResponse * OpsWorksClient::assignInstance(const AssignInstanceRequest &request)
{

}

/**
 * Assigns one of the stack's registered Amazon EBS volumes to a specified instance. The volume must first be registered
 * with the stack by calling <a>RegisterVolume</a>. After you register the volume, you must call <a>UpdateVolume</a> to
 * specify a mount point before calling <code>AssignVolume</code>. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
AssignVolumeResponse * OpsWorksClient::assignVolume(const AssignVolumeRequest &request)
{

}

/**
 * Associates one of the stack's registered Elastic IP addresses with a specified instance. The address must first be
 * registered with the stack by calling <a>RegisterElasticIp</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
AssociateElasticIpResponse * OpsWorksClient::associateElasticIp(const AssociateElasticIpRequest &request)
{

}

/**
 * Attaches an Elastic Load Balancing load balancer to a specified layer. AWS OpsWorks Stacks does not support Application
 * Load Balancer. You can only use Classic Load Balancer with AWS OpsWorks Stacks. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/layers-elb.html">Elastic Load
 *
 * Balancing</a>> <note>
 *
 * You must create the Elastic Load Balancing instance separately, by using the Elastic Load Balancing console, API, or
 * CLI. For more information, see <a
 * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html"> Elastic Load Balancing
 * Developer
 *
 * Guide</a>> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
AttachElasticLoadBalancerResponse * OpsWorksClient::attachElasticLoadBalancer(const AttachElasticLoadBalancerRequest &request)
{

}

/**
 * Creates a clone of a specified stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone a Stack</a>. By default,
 * all parameters are set to the values used by the parent
 *
 * stack>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CloneStackResponse * OpsWorksClient::cloneStack(const CloneStackRequest &request)
{

}

/**
 * Creates an app for a specified stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
 *
 * Apps</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateAppResponse * OpsWorksClient::createApp(const CreateAppRequest &request)
{

}

/**
 * Runs deployment or stack commands. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying Apps</a> and <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run Stack
 *
 * Commands</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the
 * stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateDeploymentResponse * OpsWorksClient::createDeployment(const CreateDeploymentRequest &request)
{

}

/**
 * Creates an instance in a specified stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding an Instance to a
 *
 * Layer</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateInstanceResponse * OpsWorksClient::createInstance(const CreateInstanceRequest &request)
{

}

/**
 * Creates a layer. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How to Create a
 *
 * Layer</a>> <note>
 *
 * You should use <b>CreateLayer</b> for noncustom layer types such as PHP App Server only if the stack does not have an
 * existing layer of that type. A stack can have at most one instance of each noncustom layer; if you attempt to create a
 * second instance, <b>CreateLayer</b> fails. A stack can have an arbitrary number of custom layers, so you can call
 * <b>CreateLayer</b> as many times as you like for that layer
 *
 * type> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateLayerResponse * OpsWorksClient::createLayer(const CreateLayerRequest &request)
{

}

/**
 * Creates a new stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create a New
 *
 * Stack</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateStackResponse * OpsWorksClient::createStack(const CreateStackRequest &request)
{

}

/**
 * Creates a new user
 *
 * profile>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateUserProfileResponse * OpsWorksClient::createUserProfile(const CreateUserProfileRequest &request)
{

}

/**
 * Deletes a specified
 *
 * app>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeleteAppResponse * OpsWorksClient::deleteApp(const DeleteAppRequest &request)
{

}

/**
 * Deletes a specified instance, which terminates the associated Amazon EC2 instance. You must stop an instance before you
 * can delete
 *
 * it>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting
 *
 * Instances</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeleteInstanceResponse * OpsWorksClient::deleteInstance(const DeleteInstanceRequest &request)
{

}

/**
 * Deletes a specified layer. You must first stop and then delete all associated instances or unassign registered
 * instances. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How to Delete a
 *
 * Layer</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeleteLayerResponse * OpsWorksClient::deleteLayer(const DeleteLayerRequest &request)
{

}

/**
 * Deletes a specified stack. You must first delete all instances, layers, and apps or deregister registered instances. For
 * more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut
 * Down a
 *
 * Stack</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeleteStackResponse * OpsWorksClient::deleteStack(const DeleteStackRequest &request)
{

}

/**
 * Deletes a user
 *
 * profile>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeleteUserProfileResponse * OpsWorksClient::deleteUserProfile(const DeleteUserProfileRequest &request)
{

}

/**
 * Deregisters a specified Amazon ECS cluster from a stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html#workinglayers-ecscluster-delete">
 * Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 */
DeregisterEcsClusterResponse * OpsWorksClient::deregisterEcsCluster(const DeregisterEcsClusterRequest &request)
{

}

/**
 * Deregisters a specified Elastic IP address. The address can then be registered by another stack. For more information,
 * see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeregisterElasticIpResponse * OpsWorksClient::deregisterElasticIp(const DeregisterElasticIpRequest &request)
{

}

/**
 * Deregister a registered Amazon EC2 or on-premises instance. This action removes the instance from the stack and returns
 * it to your control. This action can not be used with instances that were created with AWS OpsWorks
 *
 * Stacks>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeregisterInstanceResponse * OpsWorksClient::deregisterInstance(const DeregisterInstanceRequest &request)
{

}

/**
 * Deregisters an Amazon RDS
 *
 * instance>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeregisterRdsDbInstanceResponse * OpsWorksClient::deregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest &request)
{

}

/**
 * Deregisters an Amazon EBS volume. The volume can then be registered by another stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeregisterVolumeResponse * OpsWorksClient::deregisterVolume(const DeregisterVolumeRequest &request)
{

}

/**
 * Describes the available AWS OpsWorks Stacks agent versions. You must specify a stack ID or a configuration manager.
 * <code>DescribeAgentVersions</code> returns a list of available agent versions for the specified stack or configuration
 */
DescribeAgentVersionsResponse * OpsWorksClient::describeAgentVersions(const DescribeAgentVersionsRequest &request)
{

}

/**
 * Requests a description of a specified set of
 *
 * apps> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeAppsResponse * OpsWorksClient::describeApps(const DescribeAppsRequest &request)
{

}

/**
 * Describes the results of specified
 *
 * commands> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeCommandsResponse * OpsWorksClient::describeCommands(const DescribeCommandsRequest &request)
{

}

/**
 * Requests a description of a specified set of
 *
 * deployments> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeDeploymentsResponse * OpsWorksClient::describeDeployments(const DescribeDeploymentsRequest &request)
{

}

/**
 * Describes Amazon ECS clusters that are registered with a stack. If you specify only a stack ID, you can use the
 * <code>MaxResults</code> and <code>NextToken</code> parameters to paginate the response. However, AWS OpsWorks Stacks
 * currently supports only one cluster per layer, so the result set has a maximum of one
 *
 * element>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack or an attached policy that explicitly grants permission. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 *
 * Permissions</a>>
 *
 * This call accepts only one resource-identifying
 */
DescribeEcsClustersResponse * OpsWorksClient::describeEcsClusters(const DescribeEcsClustersRequest &request)
{

}

/**
 * Describes <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP
 *
 * addresses</a>> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeElasticIpsResponse * OpsWorksClient::describeElasticIps(const DescribeElasticIpsRequest &request)
{

}

/**
 * Describes a stack's Elastic Load Balancing
 *
 * instances> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeElasticLoadBalancersResponse * OpsWorksClient::describeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest &request)
{

}

/**
 * Requests a description of a set of
 *
 * instances> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeInstancesResponse * OpsWorksClient::describeInstances(const DescribeInstancesRequest &request)
{

}

/**
 * Requests a description of one or more layers in a specified
 *
 * stack> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeLayersResponse * OpsWorksClient::describeLayers(const DescribeLayersRequest &request)
{

}

/**
 * Describes load-based auto scaling configurations for specified
 *
 * layers> <note>
 *
 * You must specify at least one of the
 *
 * parameters> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeLoadBasedAutoScalingResponse * OpsWorksClient::describeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest &request)
{

}

/**
 * Describes a user's SSH
 *
 * information>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy
 * that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeMyUserProfileResponse * OpsWorksClient::describeMyUserProfile()
{

}

/**
 * Describes the operating systems that are supported by AWS OpsWorks
 */
DescribeOperatingSystemsResponse * OpsWorksClient::describeOperatingSystems()
{

}

/**
 * Describes the permissions for a specified
 *
 * stack>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribePermissionsResponse * OpsWorksClient::describePermissions(const DescribePermissionsRequest &request)
{

}

/**
 * Describe an instance's RAID
 *
 * arrays> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeRaidArraysResponse * OpsWorksClient::describeRaidArrays(const DescribeRaidArraysRequest &request)
{

}

/**
 * Describes Amazon RDS
 *
 * instances>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 *
 * Permissions</a>>
 *
 * This call accepts only one resource-identifying
 */
DescribeRdsDbInstancesResponse * OpsWorksClient::describeRdsDbInstances(const DescribeRdsDbInstancesRequest &request)
{

}

/**
 * Describes AWS OpsWorks Stacks service
 *
 * errors>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 *
 * Permissions</a>>
 *
 * This call accepts only one resource-identifying
 */
DescribeServiceErrorsResponse * OpsWorksClient::describeServiceErrors(const DescribeServiceErrorsRequest &request)
{

}

/**
 * Requests a description of a stack's provisioning
 *
 * parameters>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeStackProvisioningParametersResponse * OpsWorksClient::describeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest &request)
{

}

/**
 * Describes the number of layers and apps in a specified stack, and the number of instances in each state, such as
 * <code>running_setup</code> or
 *
 * <code>online</code>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeStackSummaryResponse * OpsWorksClient::describeStackSummary(const DescribeStackSummaryRequest &request)
{

}

/**
 * Requests a description of one or more
 *
 * stacks>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeStacksResponse * OpsWorksClient::describeStacks(const DescribeStacksRequest &request)
{

}

/**
 * Describes time-based auto scaling configurations for specified
 *
 * instances> <note>
 *
 * You must specify at least one of the
 *
 * parameters> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeTimeBasedAutoScalingResponse * OpsWorksClient::describeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest &request)
{

}

/**
 * Describe specified
 *
 * users>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeUserProfilesResponse * OpsWorksClient::describeUserProfiles(const DescribeUserProfilesRequest &request)
{

}

/**
 * Describes an instance's Amazon EBS
 *
 * volumes> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeVolumesResponse * OpsWorksClient::describeVolumes(const DescribeVolumesRequest &request)
{

}

/**
 * Detaches a specified Elastic Load Balancing instance from its
 *
 * layer>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DetachElasticLoadBalancerResponse * OpsWorksClient::detachElasticLoadBalancer(const DetachElasticLoadBalancerRequest &request)
{

}

/**
 * Disassociates an Elastic IP address from its instance. The address remains registered with the stack. For more
 * information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DisassociateElasticIpResponse * OpsWorksClient::disassociateElasticIp(const DisassociateElasticIpRequest &request)
{

}

/**
 * Gets a generated host name for the specified layer, based on the current host name
 *
 * theme>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
GetHostnameSuggestionResponse * OpsWorksClient::getHostnameSuggestion(const GetHostnameSuggestionRequest &request)
{

}

/**
 * <note>
 *
 * This action can be used only with Windows
 *
 * stacks> </note>
 *
 * Grants RDP access to a Windows instance for a specified time
 */
GrantAccessResponse * OpsWorksClient::grantAccess(const GrantAccessRequest &request)
{

}

/**
 * Returns a list of tags that are applied to the specified stack or
 */
ListTagsResponse * OpsWorksClient::listTags(const ListTagsRequest &request)
{

}

/**
 * Reboots a specified instance. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and
 * Rebooting
 *
 * Instances</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
RebootInstanceResponse * OpsWorksClient::rebootInstance(const RebootInstanceRequest &request)
{

}

/**
 * Registers a specified Amazon ECS cluster with a stack. You can register only one cluster with a stack. A cluster can be
 * registered with only one stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html"> Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html"> Managing User
 */
RegisterEcsClusterResponse * OpsWorksClient::registerEcsCluster(const RegisterEcsClusterRequest &request)
{

}

/**
 * Registers an Elastic IP address with a specified stack. An address can be registered with only one stack at a time. If
 * the address is already registered, you must first deregister it by calling <a>DeregisterElasticIp</a>. For more
 * information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
RegisterElasticIpResponse * OpsWorksClient::registerElasticIp(const RegisterElasticIpRequest &request)
{

}

/**
 * Registers instances that were created outside of AWS OpsWorks Stacks with a specified
 *
 * stack> <note>
 *
 * We do not recommend using this action to register instances. The complete registration operation includes two tasks:
 * installing the AWS OpsWorks Stacks agent on the instance, and registering the instance with the stack.
 * <code>RegisterInstance</code> handles only the second step. You should instead use the AWS CLI <code>register</code>
 * command, which performs the entire registration operation. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register.html"> Registering an Instance
 * with an AWS OpsWorks Stacks
 *
 * Stack</a>> </note>
 *
 * Registered instances have the same requirements as instances that are created by using the <a>CreateInstance</a> API.
 * For example, registered instances must be running a supported Linux-based operating system, and they must have a
 * supported instance type. For more information about requirements for instances that you want to register, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register-registering-preparer.html">
 * Preparing the
 *
 * Instance</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
RegisterInstanceResponse * OpsWorksClient::registerInstance(const RegisterInstanceRequest &request)
{

}

/**
 * Registers an Amazon RDS instance with a
 *
 * stack>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
RegisterRdsDbInstanceResponse * OpsWorksClient::registerRdsDbInstance(const RegisterRdsDbInstanceRequest &request)
{

}

/**
 * Registers an Amazon EBS volume with a specified stack. A volume can be registered with only one stack at a time. If the
 * volume is already registered, you must first deregister it by calling <a>DeregisterVolume</a>. For more information, see
 * <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
RegisterVolumeResponse * OpsWorksClient::registerVolume(const RegisterVolumeRequest &request)
{

}

/**
 * Specify the load-based auto scaling configuration for a specified layer. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with
 * Time-based and Load-based
 *
 * Instances</a>> <note>
 *
 * To use load-based auto scaling, you must create a set of load-based auto scaling instances. Load-based auto scaling
 * operates only on the instances from that set, so you must ensure that you have created enough instances to handle the
 * maximum anticipated
 *
 * load> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
SetLoadBasedAutoScalingResponse * OpsWorksClient::setLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest &request)
{

}

/**
 * Specifies a user's permissions. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security and
 *
 * Permissions</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
SetPermissionResponse * OpsWorksClient::setPermission(const SetPermissionRequest &request)
{

}

/**
 * Specify the time-based auto scaling configuration for a specified instance. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with
 * Time-based and Load-based
 *
 * Instances</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
SetTimeBasedAutoScalingResponse * OpsWorksClient::setTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest &request)
{

}

/**
 * Starts a specified instance. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and
 * Rebooting
 *
 * Instances</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
StartInstanceResponse * OpsWorksClient::startInstance(const StartInstanceRequest &request)
{

}

/**
 * Starts a stack's
 *
 * instances>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
StartStackResponse * OpsWorksClient::startStack(const StartStackRequest &request)
{

}

/**
 * Stops a specified instance. When you stop a standard instance, the data disappears and must be reinstalled when you
 * restart the instance. You can stop an Amazon EBS-backed instance without losing data. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and
 * Rebooting
 *
 * Instances</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
StopInstanceResponse * OpsWorksClient::stopInstance(const StopInstanceRequest &request)
{

}

/**
 * Stops a specified
 *
 * stack>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
StopStackResponse * OpsWorksClient::stopStack(const StopStackRequest &request)
{

}

/**
 * Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks Stacks. For more information about how tagging
 * works, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a> in the AWS OpsWorks User
 */
TagResourceResponse * OpsWorksClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Unassigns a registered instance from all of it's layers. The instance remains in the stack as an unassigned instance and
 * can be assigned to another layer, as needed. You cannot use this action with instances that were created with AWS
 * OpsWorks
 *
 * Stacks>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UnassignInstanceResponse * OpsWorksClient::unassignInstance(const UnassignInstanceRequest &request)
{

}

/**
 * Unassigns an assigned Amazon EBS volume. The volume remains registered with the stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UnassignVolumeResponse * OpsWorksClient::unassignVolume(const UnassignVolumeRequest &request)
{

}

/**
 * Removes tags from a specified stack or
 */
UntagResourceResponse * OpsWorksClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Updates a specified
 *
 * app>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the
 * stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateAppResponse * OpsWorksClient::updateApp(const UpdateAppRequest &request)
{

}

/**
 * Updates a registered Elastic IP address's name. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateElasticIpResponse * OpsWorksClient::updateElasticIp(const UpdateElasticIpRequest &request)
{

}

/**
 * Updates a specified
 *
 * instance>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateInstanceResponse * OpsWorksClient::updateInstance(const UpdateInstanceRequest &request)
{

}

/**
 * Updates a specified
 *
 * layer>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateLayerResponse * OpsWorksClient::updateLayer(const UpdateLayerRequest &request)
{

}

/**
 * Updates a user's SSH public
 *
 * key>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy
 * that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateMyUserProfileResponse * OpsWorksClient::updateMyUserProfile(const UpdateMyUserProfileRequest &request)
{

}

/**
 * Updates an Amazon RDS
 *
 * instance>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateRdsDbInstanceResponse * OpsWorksClient::updateRdsDbInstance(const UpdateRdsDbInstanceRequest &request)
{

}

/**
 * Updates a specified
 *
 * stack>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateStackResponse * OpsWorksClient::updateStack(const UpdateStackRequest &request)
{

}

/**
 * Updates a specified user
 *
 * profile>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateUserProfileResponse * OpsWorksClient::updateUserProfile(const UpdateUserProfileRequest &request)
{

}

/**
 * Updates an Amazon EBS volume's name or mount point. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
 *
 * Management</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateVolumeResponse * OpsWorksClient::updateVolume(const UpdateVolumeRequest &request)
{

}

/**
 * @internal
 *
 * @class  OpsWorksClientPrivate
 *
 * @brief  Private implementation for OpsWorksClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OpsWorksClientPrivate object.
 *
 * @param  q  Pointer to this object's public OpsWorksClient instance.
 */
OpsWorksClientPrivate::OpsWorksClientPrivate(OpsWorksClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace OpsWorks
} // namespace AWS
