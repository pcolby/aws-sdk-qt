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

#include "subscriberequest.h"
#include "subscriberequest_p.h"
#include "subscriberesponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  SubscribeRequest
 *
 * @brief  Implements SNS Subscribe requests.
 *
 * @see    SNSClient::subscribe
 */

/**
 * @brief  Constructs a new SubscribeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubscribeRequest::SubscribeRequest(const SubscribeRequest &other)
    : SNSRequest(new SubscribeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SubscribeRequest object.
 */
SubscribeRequest::SubscribeRequest()
    : SNSRequest(new SubscribeRequestPrivate(SNSRequest::SubscribeAction, this))
{

}

bool SubscribeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SubscribeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubscribeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * SubscribeRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SubscribeRequestPrivate
 *
 * @brief  Private implementation for SubscribeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SubscribeRequest instance.
 */
SubscribeRequestPrivate::SubscribeRequestPrivate(
    const SNSRequest::Action action, SubscribeRequest * const q)
    : SubscribePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubscribeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubscribeRequest instance.
 */
SubscribeRequestPrivate::SubscribeRequestPrivate(
    const SubscribeRequestPrivate &other, SubscribeRequest * const q)
    : SubscribePrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
