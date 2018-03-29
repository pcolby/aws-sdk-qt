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

#include "updateregexmatchsetrequest.h"
#include "updateregexmatchsetrequest_p.h"
#include "updateregexmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  UpdateRegexMatchSetRequest
 *
 * @brief  Implements WAF UpdateRegexMatchSet requests.
 *
 * @see    WAFClient::updateRegexMatchSet
 */

/**
 * @brief  Constructs a new UpdateRegexMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRegexMatchSetRequest::UpdateRegexMatchSetRequest(const UpdateRegexMatchSetRequest &other)
    : WAFRequest(new UpdateRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRegexMatchSetRequest object.
 */
UpdateRegexMatchSetRequest::UpdateRegexMatchSetRequest()
    : WAFRequest(new UpdateRegexMatchSetRequestPrivate(WAFRequest::UpdateRegexMatchSetAction, this))
{

}

bool UpdateRegexMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRegexMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRegexMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegexMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegexMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRegexMatchSetRequestPrivate
 *
 * @brief  Private implementation for UpdateRegexMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRegexMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateRegexMatchSetRequest instance.
 */
UpdateRegexMatchSetRequestPrivate::UpdateRegexMatchSetRequestPrivate(
    const WAFRequest::Action action, UpdateRegexMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRegexMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegexMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRegexMatchSetRequest instance.
 */
UpdateRegexMatchSetRequestPrivate::UpdateRegexMatchSetRequestPrivate(
    const UpdateRegexMatchSetRequestPrivate &other, UpdateRegexMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
