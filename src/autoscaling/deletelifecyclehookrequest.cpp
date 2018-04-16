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

#include "deletelifecyclehookrequest.h"
#include "deletelifecyclehookrequest_p.h"
#include "deletelifecyclehookresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteLifecycleHookRequest
 *
 * \brief The DeleteLifecycleHookRequest class encapsulates AutoScaling DeleteLifecycleHook requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::deleteLifecycleHook
 */

/*!
 * @brief  Constructs a new DeleteLifecycleHookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLifecycleHookRequest::DeleteLifecycleHookRequest(const DeleteLifecycleHookRequest &other)
    : AutoScalingRequest(new DeleteLifecycleHookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteLifecycleHookRequest object.
 */
DeleteLifecycleHookRequest::DeleteLifecycleHookRequest()
    : AutoScalingRequest(new DeleteLifecycleHookRequestPrivate(AutoScalingRequest::DeleteLifecycleHookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLifecycleHookRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteLifecycleHookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLifecycleHookResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLifecycleHookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecycleHookResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteLifecycleHookRequestPrivate
 *
 * @brief  Private implementation for DeleteLifecycleHookRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteLifecycleHookRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DeleteLifecycleHookRequest instance.
 */
DeleteLifecycleHookRequestPrivate::DeleteLifecycleHookRequestPrivate(
    const AutoScalingRequest::Action action, DeleteLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteLifecycleHookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecycleHookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLifecycleHookRequest instance.
 */
DeleteLifecycleHookRequestPrivate::DeleteLifecycleHookRequestPrivate(
    const DeleteLifecycleHookRequestPrivate &other, DeleteLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
