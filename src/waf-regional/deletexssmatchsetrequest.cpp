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

#include "deletexssmatchsetrequest.h"
#include "deletexssmatchsetrequest_p.h"
#include "deletexssmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteXssMatchSetRequest
 *
 * @brief  Implements WAFRegional DeleteXssMatchSet requests.
 *
 * @see    WAFRegionalClient::deleteXssMatchSet
 */

/**
 * @brief  Constructs a new DeleteXssMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteXssMatchSetResponse::DeleteXssMatchSetResponse(

/**
 * @brief  Constructs a new DeleteXssMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteXssMatchSetRequest::DeleteXssMatchSetRequest(const DeleteXssMatchSetRequest &other)
    : WAFRegionalRequest(new DeleteXssMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteXssMatchSetRequest object.
 */
DeleteXssMatchSetRequest::DeleteXssMatchSetRequest()
    : WAFRegionalRequest(new DeleteXssMatchSetRequestPrivate(WAFRegionalRequest::DeleteXssMatchSetAction, this))
{

}

bool DeleteXssMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteXssMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteXssMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeleteXssMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteXssMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteXssMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteXssMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteXssMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteXssMatchSetRequest instance.
 */
DeleteXssMatchSetRequestPrivate::DeleteXssMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteXssMatchSetRequest * const q)
    : DeleteXssMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteXssMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteXssMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteXssMatchSetRequest instance.
 */
DeleteXssMatchSetRequestPrivate::DeleteXssMatchSetRequestPrivate(
    const DeleteXssMatchSetRequestPrivate &other, DeleteXssMatchSetRequest * const q)
    : DeleteXssMatchSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
