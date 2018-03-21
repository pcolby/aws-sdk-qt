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

#include "updatebytematchsetrequest.h"
#include "updatebytematchsetrequest_p.h"
#include "updatebytematchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateByteMatchSetRequest
 *
 * @brief  Implements WAFRegional UpdateByteMatchSet requests.
 *
 * @see    WAFRegionalClient::updateByteMatchSet
 */

/**
 * @brief  Constructs a new UpdateByteMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateByteMatchSetResponse::UpdateByteMatchSetResponse(

/**
 * @brief  Constructs a new UpdateByteMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateByteMatchSetRequest::UpdateByteMatchSetRequest(const UpdateByteMatchSetRequest &other)
    : WAFRegionalRequest(new UpdateByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateByteMatchSetRequest object.
 */
UpdateByteMatchSetRequest::UpdateByteMatchSetRequest()
    : WAFRegionalRequest(new UpdateByteMatchSetRequestPrivate(WAFRegionalRequest::UpdateByteMatchSetAction, this))
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
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * UpdateByteMatchSetRequest::response(QNetworkReply * const reply) const
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateByteMatchSetRequest instance.
 */
UpdateByteMatchSetRequestPrivate::UpdateByteMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateByteMatchSetRequest * const q)
    : UpdateByteMatchSetPrivate(action, q)
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
    : UpdateByteMatchSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
