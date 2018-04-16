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

#include "describescalingactivitiesrequest.h"
#include "describescalingactivitiesrequest_p.h"
#include "describescalingactivitiesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScalingActivitiesRequest
 *
 * \brief The DescribeScalingActivitiesRequest class encapsulates AutoScaling DescribeScalingActivities requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeScalingActivities
 */

/*!
 * @brief  Constructs a new DescribeScalingActivitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest(const DescribeScalingActivitiesRequest &other)
    : AutoScalingRequest(new DescribeScalingActivitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeScalingActivitiesRequest object.
 */
DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest()
    : AutoScalingRequest(new DescribeScalingActivitiesRequestPrivate(AutoScalingRequest::DescribeScalingActivitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScalingActivitiesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeScalingActivitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScalingActivitiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingActivitiesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeScalingActivitiesRequestPrivate
 *
 * @brief  Private implementation for DescribeScalingActivitiesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScalingActivitiesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeScalingActivitiesRequest instance.
 */
DescribeScalingActivitiesRequestPrivate::DescribeScalingActivitiesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeScalingActivitiesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScalingActivitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingActivitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScalingActivitiesRequest instance.
 */
DescribeScalingActivitiesRequestPrivate::DescribeScalingActivitiesRequestPrivate(
    const DescribeScalingActivitiesRequestPrivate &other, DescribeScalingActivitiesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
