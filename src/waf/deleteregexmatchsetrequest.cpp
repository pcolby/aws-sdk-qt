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

#include "deleteregexmatchsetrequest.h"
#include "deleteregexmatchsetrequest_p.h"
#include "deleteregexmatchsetresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  DeleteRegexMatchSetRequest
 *
 * @brief  Implements WAF DeleteRegexMatchSet requests.
 *
 * @see    WAFClient::deleteRegexMatchSet
 */

/**
 * @brief  Constructs a new DeleteRegexMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegexMatchSetResponse::DeleteRegexMatchSetResponse(

/**
 * @brief  Constructs a new DeleteRegexMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRegexMatchSetRequest::DeleteRegexMatchSetRequest(const DeleteRegexMatchSetRequest &other)
    : WAFRequest(new DeleteRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRegexMatchSetRequest object.
 */
DeleteRegexMatchSetRequest::DeleteRegexMatchSetRequest()
    : WAFRequest(new DeleteRegexMatchSetRequestPrivate(WAFRequest::DeleteRegexMatchSetAction, this))
{

}

bool DeleteRegexMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRegexMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRegexMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * DeleteRegexMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegexMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRegexMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteRegexMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegexMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteRegexMatchSetRequest instance.
 */
DeleteRegexMatchSetRequestPrivate::DeleteRegexMatchSetRequestPrivate(
    const WAFRequest::Action action, DeleteRegexMatchSetRequest * const q)
    : DeleteRegexMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegexMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegexMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRegexMatchSetRequest instance.
 */
DeleteRegexMatchSetRequestPrivate::DeleteRegexMatchSetRequestPrivate(
    const DeleteRegexMatchSetRequestPrivate &other, DeleteRegexMatchSetRequest * const q)
    : DeleteRegexMatchSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
