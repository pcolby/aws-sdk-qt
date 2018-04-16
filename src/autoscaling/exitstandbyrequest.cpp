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

#include "exitstandbyrequest.h"
#include "exitstandbyrequest_p.h"
#include "exitstandbyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExitStandbyRequest
 *
 * \brief The ExitStandbyRequest class provides an interface for AutoScaling ExitStandby requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::exitStandby
 */

/*!
 * @brief  Constructs a new ExitStandbyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ExitStandbyRequest::ExitStandbyRequest(const ExitStandbyRequest &other)
    : AutoScalingRequest(new ExitStandbyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ExitStandbyRequest object.
 */
ExitStandbyRequest::ExitStandbyRequest()
    : AutoScalingRequest(new ExitStandbyRequestPrivate(AutoScalingRequest::ExitStandbyAction, this))
{

}

/*!
 * \reimp
 */
bool ExitStandbyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ExitStandbyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ExitStandbyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * ExitStandbyRequest::response(QNetworkReply * const reply) const
{
    return new ExitStandbyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ExitStandbyRequestPrivate
 *
 * @brief  Private implementation for ExitStandbyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExitStandbyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public ExitStandbyRequest instance.
 */
ExitStandbyRequestPrivate::ExitStandbyRequestPrivate(
    const AutoScalingRequest::Action action, ExitStandbyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ExitStandbyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ExitStandbyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ExitStandbyRequest instance.
 */
ExitStandbyRequestPrivate::ExitStandbyRequestPrivate(
    const ExitStandbyRequestPrivate &other, ExitStandbyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
