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

#include "describescalingplanresourcesrequest.h"
#include "describescalingplanresourcesrequest_p.h"
#include "describescalingplanresourcesresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlanResourcesRequest
 *
 * \brief The DescribeScalingPlanResourcesRequest class provides an interface for AutoScalingPlans DescribeScalingPlanResources requests.
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
 *
 * \sa AutoScalingPlansClient::describeScalingPlanResources
 */

/*!
 * @brief  Constructs a new DescribeScalingPlanResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScalingPlanResourcesRequest::DescribeScalingPlanResourcesRequest(const DescribeScalingPlanResourcesRequest &other)
    : AutoScalingPlansRequest(new DescribeScalingPlanResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeScalingPlanResourcesRequest object.
 */
DescribeScalingPlanResourcesRequest::DescribeScalingPlanResourcesRequest()
    : AutoScalingPlansRequest(new DescribeScalingPlanResourcesRequestPrivate(AutoScalingPlansRequest::DescribeScalingPlanResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScalingPlanResourcesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeScalingPlanResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScalingPlanResourcesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingPlansClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingPlanResourcesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingPlanResourcesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeScalingPlanResourcesRequestPrivate
 *
 * @brief  Private implementation for DescribeScalingPlanResourcesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScalingPlanResourcesRequestPrivate object.
 *
 * @param  action  AutoScalingPlans action being performed.
 * @param  q       Pointer to this object's public DescribeScalingPlanResourcesRequest instance.
 */
DescribeScalingPlanResourcesRequestPrivate::DescribeScalingPlanResourcesRequestPrivate(
    const AutoScalingPlansRequest::Action action, DescribeScalingPlanResourcesRequest * const q)
    : AutoScalingPlansRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScalingPlanResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingPlanResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScalingPlanResourcesRequest instance.
 */
DescribeScalingPlanResourcesRequestPrivate::DescribeScalingPlanResourcesRequestPrivate(
    const DescribeScalingPlanResourcesRequestPrivate &other, DescribeScalingPlanResourcesRequest * const q)
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
