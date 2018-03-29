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

#include "updatebytematchsetrequest.h"
#include "updatebytematchsetrequest_p.h"
#include "updatebytematchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  UpdateByteMatchSetRequest
 *
 * @brief  Implements WAF UpdateByteMatchSet requests.
 *
 * @see    WAFClient::updateByteMatchSet
 */

/**
 * @brief  Constructs a new UpdateByteMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateByteMatchSetRequest::UpdateByteMatchSetRequest(const UpdateByteMatchSetRequest &other)
    : WAFRequest(new UpdateByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateByteMatchSetRequest object.
 */
UpdateByteMatchSetRequest::UpdateByteMatchSetRequest()
    : WAFRequest(new UpdateByteMatchSetRequestPrivate(WAFRequest::UpdateByteMatchSetAction, this))
{

}

bool UpdateByteMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateByteMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateByteMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateByteMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateByteMatchSetRequestPrivate
 *
 * @brief  Private implementation for UpdateByteMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateByteMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateByteMatchSetRequest instance.
 */
UpdateByteMatchSetRequestPrivate::UpdateByteMatchSetRequestPrivate(
    const WAFRequest::Action action, UpdateByteMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateByteMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateByteMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateByteMatchSetRequest instance.
 */
UpdateByteMatchSetRequestPrivate::UpdateByteMatchSetRequestPrivate(
    const UpdateByteMatchSetRequestPrivate &other, UpdateByteMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
