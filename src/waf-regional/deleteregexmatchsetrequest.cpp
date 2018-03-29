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

#include "deleteregexmatchsetrequest.h"
#include "deleteregexmatchsetrequest_p.h"
#include "deleteregexmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeleteRegexMatchSetRequest
 *
 * @brief  Implements WAFRegional DeleteRegexMatchSet requests.
 *
 * @see    WAFRegionalClient::deleteRegexMatchSet
 */

/**
 * @brief  Constructs a new DeleteRegexMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRegexMatchSetRequest::DeleteRegexMatchSetRequest(const DeleteRegexMatchSetRequest &other)
    : WAFRegionalRequest(new DeleteRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRegexMatchSetRequest object.
 */
DeleteRegexMatchSetRequest::DeleteRegexMatchSetRequest()
    : WAFRegionalRequest(new DeleteRegexMatchSetRequestPrivate(WAFRegionalRequest::DeleteRegexMatchSetAction, this))
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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRegexMatchSetRequest::response(QNetworkReply * const reply) const
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteRegexMatchSetRequest instance.
 */
DeleteRegexMatchSetRequestPrivate::DeleteRegexMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteRegexMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
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
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
