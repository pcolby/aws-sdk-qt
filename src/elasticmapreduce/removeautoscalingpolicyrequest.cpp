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

#include "removeautoscalingpolicyrequest.h"
#include "removeautoscalingpolicyrequest_p.h"
#include "removeautoscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RemoveAutoScalingPolicyRequest
 *
 * \brief The RemoveAutoScalingPolicyRequest class provides an interface for EMR RemoveAutoScalingPolicy requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::removeAutoScalingPolicy
 */

/*!
 * @brief  Constructs a new RemoveAutoScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest(const RemoveAutoScalingPolicyRequest &other)
    : EMRRequest(new RemoveAutoScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RemoveAutoScalingPolicyRequest object.
 */
RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest()
    : EMRRequest(new RemoveAutoScalingPolicyRequestPrivate(EMRRequest::RemoveAutoScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAutoScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RemoveAutoScalingPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveAutoScalingPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAutoScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAutoScalingPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RemoveAutoScalingPolicyRequestPrivate
 *
 * @brief  Private implementation for RemoveAutoScalingPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveAutoScalingPolicyRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public RemoveAutoScalingPolicyRequest instance.
 */
RemoveAutoScalingPolicyRequestPrivate::RemoveAutoScalingPolicyRequestPrivate(
    const EMRRequest::Action action, RemoveAutoScalingPolicyRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveAutoScalingPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveAutoScalingPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveAutoScalingPolicyRequest instance.
 */
RemoveAutoScalingPolicyRequestPrivate::RemoveAutoScalingPolicyRequestPrivate(
    const RemoveAutoScalingPolicyRequestPrivate &other, RemoveAutoScalingPolicyRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
