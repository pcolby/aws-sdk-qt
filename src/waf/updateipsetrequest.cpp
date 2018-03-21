/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateipsetrequest.h"
#include "updateipsetrequest_p.h"
#include "updateipsetresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  UpdateIPSetRequest
 *
 * @brief  Implements WAF UpdateIPSet requests.
 *
 * @see    WAFClient::updateIPSet
 */

/**
 * @brief  Constructs a new UpdateIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIPSetRequest::UpdateIPSetRequest(const UpdateIPSetRequest &other)
    : WAFRequest(new UpdateIPSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateIPSetRequest object.
 */
UpdateIPSetRequest::UpdateIPSetRequest()
    : WAFRequest(new UpdateIPSetRequestPrivate(WAFRequest::UpdateIPSetAction, this))
{

}

bool UpdateIPSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIPSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * UpdateIPSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIPSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateIPSetRequestPrivate
 *
 * @brief  Private implementation for UpdateIPSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateIPSetRequest instance.
 */
UpdateIPSetRequestPrivate::UpdateIPSetRequestPrivate(
    const WAFRequest::Action action, UpdateIPSetRequest * const q)
    : UpdateIPSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIPSetRequest instance.
 */
UpdateIPSetRequestPrivate::UpdateIPSetRequestPrivate(
    const UpdateIPSetRequestPrivate &other, UpdateIPSetRequest * const q)
    : UpdateIPSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
