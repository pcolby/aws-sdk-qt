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

#include "applicationautoscalingclient.h"
#include "applicationautoscalingclient_p.h"

#include "core/awssignaturev4.h"
#include "deletescalingpolicyrequest.h"
#include "deletescalingpolicyresponse.h"
#include "deletescheduledactionrequest.h"
#include "deletescheduledactionresponse.h"
#include "deregisterscalabletargetrequest.h"
#include "deregisterscalabletargetresponse.h"
#include "describescalabletargetsrequest.h"
#include "describescalabletargetsresponse.h"
#include "describescalingactivitiesrequest.h"
#include "describescalingactivitiesresponse.h"
#include "describescalingpoliciesrequest.h"
#include "describescalingpoliciesresponse.h"
#include "describescheduledactionsrequest.h"
#include "describescheduledactionsresponse.h"
#include "putscalingpolicyrequest.h"
#include "putscalingpolicyresponse.h"
#include "putscheduledactionrequest.h"
#include "putscheduledactionresponse.h"
#include "registerscalabletargetrequest.h"
#include "registerscalabletargetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApplicationAutoScaling
 * \brief Contains classess for accessing Application Auto Scaling.
 *
 * \inmodule QtAwsApplicationAutoScaling
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingClient
 * \brief The ApplicationAutoScalingClient class provides access to the Application Auto Scaling service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for your scalable resources. You can use Application
 *  Auto Scaling to accomplish the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Define scaling policies to automatically scale your AWS or custom
 * 
 *  resource> </li> <li>
 * 
 *  Scale your resources in response to CloudWatch
 * 
 *  alarm> </li> <li>
 * 
 *  Schedule one-time or recurring scaling
 * 
 *  action> </li> <li>
 * 
 *  View the history of your scaling
 * 
 *  event> </li> </ul>
 * 
 *  Application Auto Scaling can scale the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon ECS services. For more information, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-auto-scaling.html">Service Auto Scaling</a> in
 *  the <i>Amazon Elastic Container Service Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon EC2 Spot fleets. For more information, see <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-auto-scaling.html">Automatic Scaling for Spot Fleet</a>
 *  in the <i>Amazon EC2 User
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon EMR clusters. For more information, see <a
 *  href="http://docs.aws.amazon.com/ElasticMapReduce/latest/ManagementGuide/emr-automatic-scaling.html">Using Automatic
 *  Scaling in Amazon EMR</a> in the <i>Amazon EMR Management
 * 
 *  Guide</i>> </li> <li>
 * 
 *  AppStream 2.0 fleets. For more information, see <a
 *  href="http://docs.aws.amazon.com/appstream2/latest/developerguide/autoscaling.html">Fleet Auto Scaling for Amazon
 *  AppStream 2.0</a> in the <i>Amazon AppStream 2.0 Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Provisioned read and write capacity for Amazon DynamoDB tables and global secondary indexes. For more information, see
 *  <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/AutoScaling.html">Managing Throughput Capacity
 *  Automatically with DynamoDB Auto Scaling</a> in the <i>Amazon DynamoDB Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon Aurora Replicas. For more information, see <a
 *  href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Integrating.AutoScaling.html">Using Amazon Aurora
 *  Auto Scaling with Aurora
 * 
 *  Replicas</a>> </li> <li>
 * 
 *  Amazon SageMaker endpoint variants. For more information, see <a
 *  href="http://docs.aws.amazon.com/sagemaker/latest/dg/endpoint-auto-scaling.html">Automatically Scaling Amazon SageMaker
 * 
 *  Models</a>> </li> <li>
 * 
 *  Custom resources provided by your own applications or services. More information is available in our <a
 *  href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub repository</a>.
 * 
 *  </p </li> </ul>
 * 
 *  To learn more about Application Auto Scaling, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
 *  Auto Scaling User
 * 
 *  Guide</a>>
 * 
 *  To configure automatic scaling for multiple resources across multiple services, use AWS Auto Scaling to create a scaling
 *  plan for your application. For more information, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 */

/*!
 * \brief Constructs a ApplicationAutoScalingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->apiVersion = QStringLiteral("2016-02-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Application Auto Scaling");
    d->serviceName = QStringLiteral("application-autoscaling");
}

/*!
 * \overload ApplicationAutoScalingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->apiVersion = QStringLiteral("2016-02-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Application Auto Scaling");
    d->serviceName = QStringLiteral("application-autoscaling");
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DeleteScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Application Auto Scaling scaling
 *
 * policy>
 *
 * Deleting a policy deletes the underlying alarm action, but does not delete the CloudWatch alarm associated with the
 * scaling policy, even if it no longer has an associated
 *
 * action>
 *
 * To create a scaling policy or update an existing one, see
 */
DeleteScalingPolicyResponse * ApplicationAutoScalingClient::deleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    return qobject_cast<DeleteScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DeleteScheduledActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Application Auto Scaling scheduled
 */
DeleteScheduledActionResponse * ApplicationAutoScalingClient::deleteScheduledAction(const DeleteScheduledActionRequest &request)
{
    return qobject_cast<DeleteScheduledActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DeregisterScalableTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters a scalable
 *
 * target>
 *
 * Deregistering a scalable target deletes the scaling policies that are associated with
 *
 * it>
 *
 * To create a scalable target or update an existing one, see
 */
DeregisterScalableTargetResponse * ApplicationAutoScalingClient::deregisterScalableTarget(const DeregisterScalableTargetRequest &request)
{
    return qobject_cast<DeregisterScalableTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScalableTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the scalable targets in the specified
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceIds</code> and <code>ScalableDimension</code>
 *
 * parameters>
 *
 * To create a scalable target or update an existing one, see <a>RegisterScalableTarget</a>. If you are no longer using a
 * scalable target, you can deregister it using
 */
DescribeScalableTargetsResponse * ApplicationAutoScalingClient::describeScalableTargets(const DescribeScalableTargetsRequest &request)
{
    return qobject_cast<DescribeScalableTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScalingActivitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides descriptive information about the scaling activities in the specified namespace from the previous six
 *
 * weeks>
 *
 * You can filter the results using the <code>ResourceId</code> and <code>ScalableDimension</code>
 *
 * parameters>
 *
 * Scaling activities are triggered by CloudWatch alarms that are associated with scaling policies. To view the scaling
 * policies for a service namespace, see <a>DescribeScalingPolicies</a>. To create a scaling policy or update an existing
 * one, see
 */
DescribeScalingActivitiesResponse * ApplicationAutoScalingClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request)
{
    return qobject_cast<DescribeScalingActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScalingPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the scaling policies for the specified service
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceId</code>, <code>ScalableDimension</code>, and
 * <code>PolicyNames</code>
 *
 * parameters>
 *
 * To create a scaling policy or update an existing one, see <a>PutScalingPolicy</a>. If you are no longer using a scaling
 * policy, you can delete it using
 */
DescribeScalingPoliciesResponse * ApplicationAutoScalingClient::describeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    return qobject_cast<DescribeScalingPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScheduledActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the scheduled actions for the specified service
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceId</code>, <code>ScalableDimension</code>, and
 * <code>ScheduledActionNames</code>
 *
 * parameters>
 *
 * To create a scheduled action or update an existing one, see <a>PutScheduledAction</a>. If you are no longer using a
 * scheduled action, you can delete it using
 */
DescribeScheduledActionsResponse * ApplicationAutoScalingClient::describeScheduledActions(const DescribeScheduledActionsRequest &request)
{
    return qobject_cast<DescribeScheduledActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * PutScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a policy for an Application Auto Scaling scalable
 *
 * target>
 *
 * Each scalable target is identified by a service namespace, resource ID, and scalable dimension. A scaling policy applies
 * to the scalable target identified by those three attributes. You cannot create a scaling policy until you register the
 * scalable target using
 *
 * <a>RegisterScalableTarget</a>>
 *
 * To update a policy, specify its policy name and the parameters that you want to change. Any parameters that you don't
 * specify are not changed by this update
 *
 * request>
 *
 * You can view the scaling policies for a service namespace using <a>DescribeScalingPolicies</a>. If you are no longer
 * using a scaling policy, you can delete it using
 */
PutScalingPolicyResponse * ApplicationAutoScalingClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return qobject_cast<PutScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * PutScheduledActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a scheduled action for an Application Auto Scaling scalable
 *
 * target>
 *
 * Each scalable target is identified by a service namespace, resource ID, and scalable dimension. A scheduled action
 * applies to the scalable target identified by those three attributes. You cannot create a scheduled action until you
 * register the scalable target using
 *
 * <a>RegisterScalableTarget</a>>
 *
 * To update an action, specify its name and the parameters that you want to change. If you don't specify start and end
 * times, the old values are deleted. Any other parameters that you don't specify are not changed by this update
 *
 * request>
 *
 * You can view the scheduled actions using <a>DescribeScheduledActions</a>. If you are no longer using a scheduled action,
 * you can delete it using
 */
PutScheduledActionResponse * ApplicationAutoScalingClient::putScheduledAction(const PutScheduledActionRequest &request)
{
    return qobject_cast<PutScheduledActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * RegisterScalableTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers or updates a scalable target. A scalable target is a resource that Application Auto Scaling can scale out or
 * scale in. After you have registered a scalable target, you can use this operation to update the minimum and maximum
 * values for its scalable
 *
 * dimension>
 *
 * After you register a scalable target, you can create and apply scaling policies using <a>PutScalingPolicy</a>. You can
 * view the scaling policies for a service namespace using <a>DescribeScalableTargets</a>. If you no longer need a scalable
 * target, you can deregister it using
 */
RegisterScalableTargetResponse * ApplicationAutoScalingClient::registerScalableTarget(const RegisterScalableTargetRequest &request)
{
    return qobject_cast<RegisterScalableTargetResponse *>(send(request));
}

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingClientPrivate
 * \brief The ApplicationAutoScalingClientPrivate class provides private implementation for ApplicationAutoScalingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingClientPrivate object with public implementation \a q.
 */
ApplicationAutoScalingClientPrivate::ApplicationAutoScalingClientPrivate(ApplicationAutoScalingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
