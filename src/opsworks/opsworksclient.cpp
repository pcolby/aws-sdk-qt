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

#include "opsworksclient.h"
#include "opsworksclient_p.h"

#include "core/awssignaturev4.h"
#include "assigninstancerequest.h"
#include "assigninstanceresponse.h"
#include "assignvolumerequest.h"
#include "assignvolumeresponse.h"
#include "associateelasticiprequest.h"
#include "associateelasticipresponse.h"
#include "attachelasticloadbalancerrequest.h"
#include "attachelasticloadbalancerresponse.h"
#include "clonestackrequest.h"
#include "clonestackresponse.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createinstancerequest.h"
#include "createinstanceresponse.h"
#include "createlayerrequest.h"
#include "createlayerresponse.h"
#include "createstackrequest.h"
#include "createstackresponse.h"
#include "createuserprofilerequest.h"
#include "createuserprofileresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deleteinstancerequest.h"
#include "deleteinstanceresponse.h"
#include "deletelayerrequest.h"
#include "deletelayerresponse.h"
#include "deletestackrequest.h"
#include "deletestackresponse.h"
#include "deleteuserprofilerequest.h"
#include "deleteuserprofileresponse.h"
#include "deregisterecsclusterrequest.h"
#include "deregisterecsclusterresponse.h"
#include "deregisterelasticiprequest.h"
#include "deregisterelasticipresponse.h"
#include "deregisterinstancerequest.h"
#include "deregisterinstanceresponse.h"
#include "deregisterrdsdbinstancerequest.h"
#include "deregisterrdsdbinstanceresponse.h"
#include "deregistervolumerequest.h"
#include "deregistervolumeresponse.h"
#include "describeagentversionsrequest.h"
#include "describeagentversionsresponse.h"
#include "describeappsrequest.h"
#include "describeappsresponse.h"
#include "describecommandsrequest.h"
#include "describecommandsresponse.h"
#include "describedeploymentsrequest.h"
#include "describedeploymentsresponse.h"
#include "describeecsclustersrequest.h"
#include "describeecsclustersresponse.h"
#include "describeelasticipsrequest.h"
#include "describeelasticipsresponse.h"
#include "describeelasticloadbalancersrequest.h"
#include "describeelasticloadbalancersresponse.h"
#include "describeinstancesrequest.h"
#include "describeinstancesresponse.h"
#include "describelayersrequest.h"
#include "describelayersresponse.h"
#include "describeloadbasedautoscalingrequest.h"
#include "describeloadbasedautoscalingresponse.h"
#include "describemyuserprofileresponse.h"
#include "describeoperatingsystemsresponse.h"
#include "describepermissionsrequest.h"
#include "describepermissionsresponse.h"
#include "describeraidarraysrequest.h"
#include "describeraidarraysresponse.h"
#include "describerdsdbinstancesrequest.h"
#include "describerdsdbinstancesresponse.h"
#include "describeserviceerrorsrequest.h"
#include "describeserviceerrorsresponse.h"
#include "describestackprovisioningparametersrequest.h"
#include "describestackprovisioningparametersresponse.h"
#include "describestacksummaryrequest.h"
#include "describestacksummaryresponse.h"
#include "describestacksrequest.h"
#include "describestacksresponse.h"
#include "describetimebasedautoscalingrequest.h"
#include "describetimebasedautoscalingresponse.h"
#include "describeuserprofilesrequest.h"
#include "describeuserprofilesresponse.h"
#include "describevolumesrequest.h"
#include "describevolumesresponse.h"
#include "detachelasticloadbalancerrequest.h"
#include "detachelasticloadbalancerresponse.h"
#include "disassociateelasticiprequest.h"
#include "disassociateelasticipresponse.h"
#include "gethostnamesuggestionrequest.h"
#include "gethostnamesuggestionresponse.h"
#include "grantaccessrequest.h"
#include "grantaccessresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "rebootinstancerequest.h"
#include "rebootinstanceresponse.h"
#include "registerecsclusterrequest.h"
#include "registerecsclusterresponse.h"
#include "registerelasticiprequest.h"
#include "registerelasticipresponse.h"
#include "registerinstancerequest.h"
#include "registerinstanceresponse.h"
#include "registerrdsdbinstancerequest.h"
#include "registerrdsdbinstanceresponse.h"
#include "registervolumerequest.h"
#include "registervolumeresponse.h"
#include "setloadbasedautoscalingrequest.h"
#include "setloadbasedautoscalingresponse.h"
#include "setpermissionrequest.h"
#include "setpermissionresponse.h"
#include "settimebasedautoscalingrequest.h"
#include "settimebasedautoscalingresponse.h"
#include "startinstancerequest.h"
#include "startinstanceresponse.h"
#include "startstackrequest.h"
#include "startstackresponse.h"
#include "stopinstancerequest.h"
#include "stopinstanceresponse.h"
#include "stopstackrequest.h"
#include "stopstackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unassigninstancerequest.h"
#include "unassigninstanceresponse.h"
#include "unassignvolumerequest.h"
#include "unassignvolumeresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapprequest.h"
#include "updateappresponse.h"
#include "updateelasticiprequest.h"
#include "updateelasticipresponse.h"
#include "updateinstancerequest.h"
#include "updateinstanceresponse.h"
#include "updatelayerrequest.h"
#include "updatelayerresponse.h"
#include "updatemyuserprofilerequest.h"
#include "updatemyuserprofileresponse.h"
#include "updaterdsdbinstancerequest.h"
#include "updaterdsdbinstanceresponse.h"
#include "updatestackrequest.h"
#include "updatestackresponse.h"
#include "updateuserprofilerequest.h"
#include "updateuserprofileresponse.h"
#include "updatevolumerequest.h"
#include "updatevolumeresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::OpsWorks
 * \brief Contains classess for accessing AWS OpsWorks.
 *
 * \inmodule QtAwsOpsWorks
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace OpsWorks {

/*!
 * \class QtAws::OpsWorks::OpsWorksClient
 * \brief The OpsWorksClient class provides access to the AWS OpsWorks service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOpsWorks
 *
 *  <fullname>AWS OpsWorks</fullname>
 * 
 *  Welcome to the <i>AWS OpsWorks Stacks API Reference</i>. This guide provides descriptions, syntax, and usage examples
 *  for AWS OpsWorks Stacks actions and data types, including common parameters and error codes.
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks is an application management service that provides an integrated experience for overseeing the
 *  complete application lifecycle. For information about this product, go to the <a
 *  href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page.
 * 
 *  </p
 * 
 *  <b>SDKs and CLI</b>
 * 
 *  </p
 * 
 *  The most common way to use the AWS OpsWorks Stacks API is by using the AWS Command Line Interface (CLI) or by using one
 *  of the AWS SDKs to implement applications in your preferred language. For more information,
 * 
 *  see> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS CLI</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="http://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
 *  SDK for Java</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS SDK for .NET</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS SDK for PHP 2</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for Node.js</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for Python(Boto)</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks supports the following endpoints, all HTTPS. You must connect to one of the following endpoints.
 *  Stacks can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
 * 
 *  console> </li> <li>
 * 
 *  opsworks.eu-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-3.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-south-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.sa-east-1.amazonaws.co> </li> </ul>
 * 
 *  <b>Chef Versions</b>
 * 
 *  </p
 * 
 *  When you call <a>CreateStack</a>, <a>CloneStack</a>, or <a>UpdateStack</a> we recommend you use the
 *  <code>ConfigurationManager</code> parameter to specify the Chef version. The recommended and default value for Linux
 *  stacks is currently 12. Windows stacks use Chef 12.2. For more information, see <a
 *  href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
 * 
 *  Versions</a>> <note>
 * 
 *  You can specify Chef 12, 11.10, or 11.4 for your Linux stack. We recommend migrating your existing Linux stacks to Chef
 *  12 as soon as
 */

/*!
 * \brief Constructs a OpsWorksClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
OpsWorksClient::OpsWorksClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OpsWorksClientPrivate(this), parent)
{
    Q_D(OpsWorksClient);
    d->apiVersion = QStringLiteral("2013-02-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("opsworks");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS OpsWorks");
    d->serviceName = QStringLiteral("opsworks");
}

/*!
 * \overload OpsWorksClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
OpsWorksClient::OpsWorksClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OpsWorksClientPrivate(this), parent)
{
    Q_D(OpsWorksClient);
    d->apiVersion = QStringLiteral("2013-02-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("opsworks");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS OpsWorks");
    d->serviceName = QStringLiteral("opsworks");
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * AssignInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<AssignInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * AssignVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<AssignVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * AssociateElasticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<AssociateElasticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * AttachElasticLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<AttachElasticLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CloneStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a clone of a specified stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone a Stack</a>. By default,
 * all parameters are set to the values used by the parent
 *
 * stack>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CloneStackResponse * OpsWorksClient::cloneStack(const CloneStackRequest &request)
{
    return qobject_cast<CloneStackResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CreateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CreateInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<CreateInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CreateLayerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<CreateLayerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CreateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new stack. For more information, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create a New
 *
 * Stack</a>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateStackResponse * OpsWorksClient::createStack(const CreateStackRequest &request)
{
    return qobject_cast<CreateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * CreateUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user
 *
 * profile>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
CreateUserProfileResponse * OpsWorksClient::createUserProfile(const CreateUserProfileRequest &request)
{
    return qobject_cast<CreateUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeleteInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeleteInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeleteLayerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeleteLayerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeleteStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeleteStackResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeleteUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user
 *
 * profile>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeleteUserProfileResponse * OpsWorksClient::deleteUserProfile(const DeleteUserProfileRequest &request)
{
    return qobject_cast<DeleteUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeregisterEcsClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeregisterEcsClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeregisterElasticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeregisterElasticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeregisterInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregister a registered Amazon EC2 or on-premises instance. This action removes the instance from the stack and returns
 * it to your control. This action cannot be used with instances that were created with AWS OpsWorks
 *
 * Stacks>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information on user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DeregisterInstanceResponse * OpsWorksClient::deregisterInstance(const DeregisterInstanceRequest &request)
{
    return qobject_cast<DeregisterInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeregisterRdsDbInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeregisterRdsDbInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DeregisterVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DeregisterVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeAgentVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available AWS OpsWorks Stacks agent versions. You must specify a stack ID or a configuration manager.
 * <code>DescribeAgentVersions</code> returns a list of available agent versions for the specified stack or configuration
 */
DescribeAgentVersionsResponse * OpsWorksClient::describeAgentVersions(const DescribeAgentVersionsRequest &request)
{
    return qobject_cast<DescribeAgentVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a description of a specified set of
 *
 * apps> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeAppsResponse * OpsWorksClient::describeApps(const DescribeAppsRequest &request)
{
    return qobject_cast<DescribeAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeCommandsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the results of specified
 *
 * commands> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeCommandsResponse * OpsWorksClient::describeCommands(const DescribeCommandsRequest &request)
{
    return qobject_cast<DescribeCommandsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a description of a specified set of
 *
 * deployments> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeDeploymentsResponse * OpsWorksClient::describeDeployments(const DescribeDeploymentsRequest &request)
{
    return qobject_cast<DescribeDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeEcsClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes Amazon ECS clusters that are registered with a stack. If you specify only a stack ID, you can use the
 * <code>MaxResults</code> and <code>NextToken</code> parameters to paginate the response. However, AWS OpsWorks Stacks
 * currently supports only one cluster per layer, so the result set has a maximum of one
 *
 * element>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack or an attached policy that explicitly grants permission. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 *
 * Permissions</a>>
 *
 * This call accepts only one resource-identifying
 */
DescribeEcsClustersResponse * OpsWorksClient::describeEcsClusters(const DescribeEcsClustersRequest &request)
{
    return qobject_cast<DescribeEcsClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeElasticIpsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP
 *
 * addresses</a>> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeElasticIpsResponse * OpsWorksClient::describeElasticIps(const DescribeElasticIpsRequest &request)
{
    return qobject_cast<DescribeElasticIpsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeElasticLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a stack's Elastic Load Balancing
 *
 * instances> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeElasticLoadBalancersResponse * OpsWorksClient::describeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest &request)
{
    return qobject_cast<DescribeElasticLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a description of a set of
 *
 * instances> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeInstancesResponse * OpsWorksClient::describeInstances(const DescribeInstancesRequest &request)
{
    return qobject_cast<DescribeInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeLayersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a description of one or more layers in a specified
 *
 * stack> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeLayersResponse * OpsWorksClient::describeLayers(const DescribeLayersRequest &request)
{
    return qobject_cast<DescribeLayersResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeLoadBasedAutoScalingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes load-based auto scaling configurations for specified
 *
 * layers> <note>
 *
 * You must specify at least one of the
 *
 * parameters> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeLoadBasedAutoScalingResponse * OpsWorksClient::describeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest &request)
{
    return qobject_cast<DescribeLoadBasedAutoScalingResponse *>(send(request));
}

/*!
 * Sends a DescribeMyUserProfile request to the OpsWorksClient service, and returns a pointer to an
 * DescribeMyUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a user's SSH
 *
 * information>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy
 * that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeMyUserProfileResponse * OpsWorksClient::describeMyUserProfile()
{
    return qobject_cast<DescribeMyUserProfileResponse *>(send());
}

/*!
 * Sends a DescribeOperatingSystems request to the OpsWorksClient service, and returns a pointer to an
 * DescribeOperatingSystemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the operating systems that are supported by AWS OpsWorks
 */
DescribeOperatingSystemsResponse * OpsWorksClient::describeOperatingSystems()
{
    return qobject_cast<DescribeOperatingSystemsResponse *>(send());
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DescribePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeRaidArraysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an instance's RAID
 *
 * arrays> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeRaidArraysResponse * OpsWorksClient::describeRaidArrays(const DescribeRaidArraysRequest &request)
{
    return qobject_cast<DescribeRaidArraysResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeRdsDbInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes Amazon RDS
 *
 * instances>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 *
 * Permissions</a>>
 *
 * This call accepts only one resource-identifying
 */
DescribeRdsDbInstancesResponse * OpsWorksClient::describeRdsDbInstances(const DescribeRdsDbInstancesRequest &request)
{
    return qobject_cast<DescribeRdsDbInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeServiceErrorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes AWS OpsWorks Stacks service
 *
 * errors>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 *
 * Permissions</a>>
 *
 * This call accepts only one resource-identifying
 */
DescribeServiceErrorsResponse * OpsWorksClient::describeServiceErrors(const DescribeServiceErrorsRequest &request)
{
    return qobject_cast<DescribeServiceErrorsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeStackProvisioningParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a description of a stack's provisioning
 *
 * parameters>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeStackProvisioningParametersResponse * OpsWorksClient::describeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest &request)
{
    return qobject_cast<DescribeStackProvisioningParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeStackSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the number of layers and apps in a specified stack, and the number of instances in each state, such as
 * <code>running_setup</code> or
 *
 * <code>online</code>>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeStackSummaryResponse * OpsWorksClient::describeStackSummary(const DescribeStackSummaryRequest &request)
{
    return qobject_cast<DescribeStackSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a description of one or more
 *
 * stacks>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeStacksResponse * OpsWorksClient::describeStacks(const DescribeStacksRequest &request)
{
    return qobject_cast<DescribeStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeTimeBasedAutoScalingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes time-based auto scaling configurations for specified
 *
 * instances> <note>
 *
 * You must specify at least one of the
 *
 * parameters> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeTimeBasedAutoScalingResponse * OpsWorksClient::describeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest &request)
{
    return qobject_cast<DescribeTimeBasedAutoScalingResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeUserProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe specified
 *
 * users>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeUserProfilesResponse * OpsWorksClient::describeUserProfiles(const DescribeUserProfilesRequest &request)
{
    return qobject_cast<DescribeUserProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DescribeVolumesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an instance's Amazon EBS
 *
 * volumes> <note>
 *
 * This call accepts only one resource-identifying
 *
 * parameter> </note>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for
 * the stack, or an attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
DescribeVolumesResponse * OpsWorksClient::describeVolumes(const DescribeVolumesRequest &request)
{
    return qobject_cast<DescribeVolumesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DetachElasticLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DetachElasticLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * DisassociateElasticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<DisassociateElasticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * GetHostnameSuggestionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<GetHostnameSuggestionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * GrantAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<GrantAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags that are applied to the specified stack or
 */
ListTagsResponse * OpsWorksClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * RebootInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<RebootInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * RegisterEcsClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<RegisterEcsClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * RegisterElasticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<RegisterElasticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * RegisterInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<RegisterInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * RegisterRdsDbInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<RegisterRdsDbInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * RegisterVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<RegisterVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * SetLoadBasedAutoScalingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<SetLoadBasedAutoScalingResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * SetPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<SetPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * SetTimeBasedAutoScalingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<SetTimeBasedAutoScalingResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * StartInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<StartInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * StartStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<StartStackResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * StopInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<StopInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * StopStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<StopStackResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks Stacks. For more information about how tagging
 * works, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a> in the AWS OpsWorks User
 */
TagResourceResponse * OpsWorksClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UnassignInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unassigns a registered instance from all layers that are using the instance. The instance remains in the stack as an
 * unassigned instance, and can be assigned to another layer as needed. You cannot use this action with instances that were
 * created with AWS OpsWorks
 *
 * Stacks>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an
 * attached policy that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UnassignInstanceResponse * OpsWorksClient::unassignInstance(const UnassignInstanceRequest &request)
{
    return qobject_cast<UnassignInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UnassignVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UnassignVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a specified stack or
 */
UntagResourceResponse * OpsWorksClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateElasticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateElasticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateLayerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateLayerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateMyUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a user's SSH public
 *
 * key>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy
 * that explicitly grants permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateMyUserProfileResponse * OpsWorksClient::updateMyUserProfile(const UpdateMyUserProfileRequest &request)
{
    return qobject_cast<UpdateMyUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateRdsDbInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateRdsDbInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specified user
 *
 * profile>
 *
 * <b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants
 * permissions. For more information about user permissions, see <a
 * href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User
 */
UpdateUserProfileResponse * OpsWorksClient::updateUserProfile(const UpdateUserProfileRequest &request)
{
    return qobject_cast<UpdateUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksClient service, and returns a pointer to an
 * UpdateVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateVolumeResponse *>(send(request));
}

/*!
 * \class QtAws::OpsWorks::OpsWorksClientPrivate
 * \brief The OpsWorksClientPrivate class provides private implementation for OpsWorksClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a OpsWorksClientPrivate object with public implementation \a q.
 */
OpsWorksClientPrivate::OpsWorksClientPrivate(OpsWorksClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace OpsWorks
} // namespace QtAws
