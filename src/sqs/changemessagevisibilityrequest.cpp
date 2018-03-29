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

#include "changemessagevisibilityrequest.h"
#include "changemessagevisibilityrequest_p.h"
#include "changemessagevisibilityresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  ChangeMessageVisibilityRequest
 *
 * @brief  Implements SQS ChangeMessageVisibility requests.
 *
 * @see    SQSClient::changeMessageVisibility
 */

/**
 * @brief  Constructs a new ChangeMessageVisibilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ChangeMessageVisibilityRequest::ChangeMessageVisibilityRequest(const ChangeMessageVisibilityRequest &other)
    : SQSRequest(new ChangeMessageVisibilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ChangeMessageVisibilityRequest object.
 */
ChangeMessageVisibilityRequest::ChangeMessageVisibilityRequest()
    : SQSRequest(new ChangeMessageVisibilityRequestPrivate(SQSRequest::ChangeMessageVisibilityAction, this))
{

}

bool ChangeMessageVisibilityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ChangeMessageVisibilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ChangeMessageVisibilityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeMessageVisibilityRequest::response(QNetworkReply * const reply) const
{
    return new ChangeMessageVisibilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ChangeMessageVisibilityRequestPrivate
 *
 * @brief  Private implementation for ChangeMessageVisibilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ChangeMessageVisibilityRequest instance.
 */
ChangeMessageVisibilityRequestPrivate::ChangeMessageVisibilityRequestPrivate(
    const SQSRequest::Action action, ChangeMessageVisibilityRequest * const q)
    : ChangeMessageVisibilityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ChangeMessageVisibilityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ChangeMessageVisibilityRequest instance.
 */
ChangeMessageVisibilityRequestPrivate::ChangeMessageVisibilityRequestPrivate(
    const ChangeMessageVisibilityRequestPrivate &other, ChangeMessageVisibilityRequest * const q)
    : ChangeMessageVisibilityPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
