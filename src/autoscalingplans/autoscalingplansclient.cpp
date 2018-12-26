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

#include "autoscalingplansclient.h"
#include "autoscalingplansclient_p.h"

#include "core/awssignaturev4.h"
#include "createscalingplanrequest.h"
#include "createscalingplanresponse.h"
#include "deletescalingplanrequest.h"
#include "deletescalingplanresponse.h"
#include "describescalingplanresourcesrequest.h"
#include "describescalingplanresourcesresponse.h"
#include "describescalingplansrequest.h"
#include "describescalingplansresponse.h"
#include "getscalingplanresourceforecastdatarequest.h"
#include "getscalingplanresourceforecastdataresponse.h"
#include "updatescalingplanrequest.h"
#include "updatescalingplanresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AutoScalingPlans
 * \brief Contains classess for accessing AWS Auto Scaling Plans.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansClient
 * \brief The AutoScalingPlansClient class provides access to the AWS Auto Scaling Plans service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
 * 
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling and predictive scaling for your resources using scaling plans. Use this service in conjunction with the Amazon
 *  EC2 Auto Scaling, Application Auto Scaling, Amazon CloudWatch, and AWS CloudFormation services.
 * 
 *  </p
 * 
 *  Currently, predictive scaling is only available for Amazon EC2 Auto Scaling
 * 
 *  groups>
 * 
 *  For more information about AWS Auto Scaling, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 */

/*!
 * \brief Constructs a AutoScalingPlansClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AutoScalingPlansClient::AutoScalingPlansClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AutoScalingPlansClientPrivate(this), parent)
{
    Q_D(AutoScalingPlansClient);
    d->apiVersion = QStringLiteral("2018-01-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Auto Scaling Plans");
    d->serviceName = QStringLiteral("autoscaling-plans");
}

/*!
 * \overload AutoScalingPlansClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AutoScalingPlansClient::AutoScalingPlansClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AutoScalingPlansClientPrivate(this), parent)
{
    Q_D(AutoScalingPlansClient);
    d->apiVersion = QStringLiteral("2018-01-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Auto Scaling Plans");
    d->serviceName = QStringLiteral("autoscaling-plans");
}

/*!
 * Sends \a request to the AutoScalingPlansClient service, and returns a pointer to an
 * CreateScalingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a scaling
 */
CreateScalingPlanResponse * AutoScalingPlansClient::createScalingPlan(const CreateScalingPlanRequest &request)
{
    return qobject_cast<CreateScalingPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingPlansClient service, and returns a pointer to an
 * DeleteScalingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified scaling
 *
 * plan>
 *
 * Deleting a scaling plan deletes the underlying <a>ScalingInstruction</a> for all of the scalable resources that are
 * covered by the
 *
 * plan>
 *
 * If the plan has launched resources or has scaling activities in progress, you must delete those resources
 */
DeleteScalingPlanResponse * AutoScalingPlansClient::deleteScalingPlan(const DeleteScalingPlanRequest &request)
{
    return qobject_cast<DeleteScalingPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingPlansClient service, and returns a pointer to an
 * DescribeScalingPlanResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the scalable resources in the specified scaling
 */
DescribeScalingPlanResourcesResponse * AutoScalingPlansClient::describeScalingPlanResources(const DescribeScalingPlanResourcesRequest &request)
{
    return qobject_cast<DescribeScalingPlanResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingPlansClient service, and returns a pointer to an
 * DescribeScalingPlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your scaling
 */
DescribeScalingPlansResponse * AutoScalingPlansClient::describeScalingPlans(const DescribeScalingPlansRequest &request)
{
    return qobject_cast<DescribeScalingPlansResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingPlansClient service, and returns a pointer to an
 * GetScalingPlanResourceForecastDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the forecast data for a scalable
 *
 * resource>
 *
 * Capacity forecasts are represented as predicted values, or data points, that are calculated using historical data points
 * from a specified CloudWatch load metric. Data points are available for up to 56 days.
 */
GetScalingPlanResourceForecastDataResponse * AutoScalingPlansClient::getScalingPlanResourceForecastData(const GetScalingPlanResourceForecastDataRequest &request)
{
    return qobject_cast<GetScalingPlanResourceForecastDataResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingPlansClient service, and returns a pointer to an
 * UpdateScalingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified scaling
 *
 * plan>
 *
 * You cannot update a scaling plan if it is in the process of being created, updated, or
 */
UpdateScalingPlanResponse * AutoScalingPlansClient::updateScalingPlan(const UpdateScalingPlanRequest &request)
{
    return qobject_cast<UpdateScalingPlanResponse *>(send(request));
}

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansClientPrivate
 * \brief The AutoScalingPlansClientPrivate class provides private implementation for AutoScalingPlansClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a AutoScalingPlansClientPrivate object with public implementation \a q.
 */
AutoScalingPlansClientPrivate::AutoScalingPlansClientPrivate(AutoScalingPlansClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AutoScalingPlans
} // namespace QtAws
