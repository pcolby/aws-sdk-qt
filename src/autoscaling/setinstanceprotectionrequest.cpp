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

#include "setinstanceprotectionrequest.h"
#include "setinstanceprotectionrequest_p.h"
#include "setinstanceprotectionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetInstanceProtectionRequest
 *
 * \brief The SetInstanceProtectionRequest class provides an interface for AutoScaling SetInstanceProtection requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::setInstanceProtection
 */

/*!
 * @brief  Constructs a new SetInstanceProtectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetInstanceProtectionRequest::SetInstanceProtectionRequest(const SetInstanceProtectionRequest &other)
    : AutoScalingRequest(new SetInstanceProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SetInstanceProtectionRequest object.
 */
SetInstanceProtectionRequest::SetInstanceProtectionRequest()
    : AutoScalingRequest(new SetInstanceProtectionRequestPrivate(AutoScalingRequest::SetInstanceProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool SetInstanceProtectionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SetInstanceProtectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetInstanceProtectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * SetInstanceProtectionRequest::response(QNetworkReply * const reply) const
{
    return new SetInstanceProtectionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SetInstanceProtectionRequestPrivate
 *
 * @brief  Private implementation for SetInstanceProtectionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetInstanceProtectionRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public SetInstanceProtectionRequest instance.
 */
SetInstanceProtectionRequestPrivate::SetInstanceProtectionRequestPrivate(
    const AutoScalingRequest::Action action, SetInstanceProtectionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SetInstanceProtectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetInstanceProtectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetInstanceProtectionRequest instance.
 */
SetInstanceProtectionRequestPrivate::SetInstanceProtectionRequestPrivate(
    const SetInstanceProtectionRequestPrivate &other, SetInstanceProtectionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
