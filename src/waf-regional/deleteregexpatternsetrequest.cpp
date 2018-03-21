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

#include "deleteregexpatternsetrequest.h"
#include "deleteregexpatternsetrequest_p.h"
#include "deleteregexpatternsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteRegexPatternSetRequest
 *
 * @brief  Implements WAFRegional DeleteRegexPatternSet requests.
 *
 * @see    WAFRegionalClient::deleteRegexPatternSet
 */

/**
 * @brief  Constructs a new DeleteRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegexPatternSetResponse::DeleteRegexPatternSetResponse(

/**
 * @brief  Constructs a new DeleteRegexPatternSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRegexPatternSetRequest::DeleteRegexPatternSetRequest(const DeleteRegexPatternSetRequest &other)
    : WAFRegionalRequest(new DeleteRegexPatternSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRegexPatternSetRequest object.
 */
DeleteRegexPatternSetRequest::DeleteRegexPatternSetRequest()
    : WAFRegionalRequest(new DeleteRegexPatternSetRequestPrivate(WAFRegionalRequest::DeleteRegexPatternSetAction, this))
{

}

bool DeleteRegexPatternSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRegexPatternSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRegexPatternSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeleteRegexPatternSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegexPatternSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRegexPatternSetRequestPrivate
 *
 * @brief  Private implementation for DeleteRegexPatternSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegexPatternSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteRegexPatternSetRequest instance.
 */
DeleteRegexPatternSetRequestPrivate::DeleteRegexPatternSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteRegexPatternSetRequest * const q)
    : DeleteRegexPatternSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegexPatternSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegexPatternSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRegexPatternSetRequest instance.
 */
DeleteRegexPatternSetRequestPrivate::DeleteRegexPatternSetRequestPrivate(
    const DeleteRegexPatternSetRequestPrivate &other, DeleteRegexPatternSetRequest * const q)
    : DeleteRegexPatternSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
