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

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AutoScalingPlans
 * \brief The QtAws::AutoScalingPlans contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansClient
 *
 * \brief The AutoScalingPlansClient class provides access to the AWS Auto Scaling Plans service.
 *
 * \ingroup AutoScalingPlans
 *
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling for your scalable
 * 
 *  resources>
 * 
 *  To get started, create a scaling plan with a set of instructions used to configure dynamic scaling for the scalable
 *  resources in your application. AWS Auto Scaling creates target tracking scaling policies for the scalable resources in
 *  your scaling plan. Target tracking scaling policies adjust the capacity of your scalable resource as required to
 *  maintain resource utilization at the target value that you
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
 * \a  AwsEndpoint::getEndpoint()
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
 * Creates a scaling
 *
 * plan>
 *
 * A scaling plan contains a set of instructions used to configure dynamic scaling for the scalable resources in your
 * application. AWS Auto Scaling creates target tracking scaling policies based on the scaling instructions in your scaling
 *
 * @param  request Request to send to AWS Auto Scaling Plans.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateScalingPlanResponse * AutoScalingPlansClient::createScalingPlan(const CreateScalingPlanRequest &request)
{
    return qobject_cast<CreateScalingPlanResponse *>(send(request));
}

/*!
 * Deletes the specified scaling
 *
 * @param  request Request to send to AWS Auto Scaling Plans.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteScalingPlanResponse * AutoScalingPlansClient::deleteScalingPlan(const DeleteScalingPlanRequest &request)
{
    return qobject_cast<DeleteScalingPlanResponse *>(send(request));
}

/*!
 * Describes the scalable resources in the specified scaling
 *
 * @param  request Request to send to AWS Auto Scaling Plans.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingPlanResourcesResponse * AutoScalingPlansClient::describeScalingPlanResources(const DescribeScalingPlanResourcesRequest &request)
{
    return qobject_cast<DescribeScalingPlanResourcesResponse *>(send(request));
}

/*!
 * Describes the specified scaling plans or all of your scaling
 *
 * @param  request Request to send to AWS Auto Scaling Plans.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingPlansResponse * AutoScalingPlansClient::describeScalingPlans(const DescribeScalingPlansRequest &request)
{
    return qobject_cast<DescribeScalingPlansResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  AutoScalingPlansClientPrivate
 *
 * @brief  Private implementation for AutoScalingPlansClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AutoScalingPlansClientPrivate object.
 *
 * @param  q  Pointer to this object's public AutoScalingPlansClient instance.
 */
AutoScalingPlansClientPrivate::AutoScalingPlansClientPrivate(AutoScalingPlansClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AutoScalingPlans
} // namespace QtAws
