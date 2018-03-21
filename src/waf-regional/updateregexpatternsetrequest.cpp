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

#include "updateregexpatternsetrequest.h"
#include "updateregexpatternsetrequest_p.h"
#include "updateregexpatternsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateRegexPatternSetRequest
 *
 * @brief  Implements WAFRegional UpdateRegexPatternSet requests.
 *
 * @see    WAFRegionalClient::updateRegexPatternSet
 */

/**
 * @brief  Constructs a new UpdateRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRegexPatternSetResponse::UpdateRegexPatternSetResponse(

/**
 * @brief  Constructs a new UpdateRegexPatternSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRegexPatternSetRequest::UpdateRegexPatternSetRequest(const UpdateRegexPatternSetRequest &other)
    : WAFRegionalRequest(new UpdateRegexPatternSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRegexPatternSetRequest object.
 */
UpdateRegexPatternSetRequest::UpdateRegexPatternSetRequest()
    : WAFRegionalRequest(new UpdateRegexPatternSetRequestPrivate(WAFRegionalRequest::UpdateRegexPatternSetAction, this))
{

}

bool UpdateRegexPatternSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRegexPatternSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRegexPatternSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * UpdateRegexPatternSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegexPatternSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRegexPatternSetRequestPrivate
 *
 * @brief  Private implementation for UpdateRegexPatternSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRegexPatternSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateRegexPatternSetRequest instance.
 */
UpdateRegexPatternSetRequestPrivate::UpdateRegexPatternSetRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateRegexPatternSetRequest * const q)
    : UpdateRegexPatternSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRegexPatternSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegexPatternSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRegexPatternSetRequest instance.
 */
UpdateRegexPatternSetRequestPrivate::UpdateRegexPatternSetRequestPrivate(
    const UpdateRegexPatternSetRequestPrivate &other, UpdateRegexPatternSetRequest * const q)
    : UpdateRegexPatternSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
