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

#include "deleteipsetrequest.h"
#include "deleteipsetrequest_p.h"
#include "deleteipsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteIPSetRequest
 *
 * @brief  Implements WAFRegional DeleteIPSet requests.
 *
 * @see    WAFRegionalClient::deleteIPSet
 */

/**
 * @brief  Constructs a new DeleteIPSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIPSetResponse::DeleteIPSetResponse(

/**
 * @brief  Constructs a new DeleteIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIPSetRequest::DeleteIPSetRequest(const DeleteIPSetRequest &other)
    : WAFRegionalRequest(new DeleteIPSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIPSetRequest object.
 */
DeleteIPSetRequest::DeleteIPSetRequest()
    : WAFRegionalRequest(new DeleteIPSetRequestPrivate(WAFRegionalRequest::DeleteIPSetAction, this))
{

}

bool DeleteIPSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIPSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeleteIPSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIPSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIPSetRequestPrivate
 *
 * @brief  Private implementation for DeleteIPSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIPSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteIPSetRequest instance.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteIPSetRequest * const q)
    : DeleteIPSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIPSetRequest instance.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const DeleteIPSetRequestPrivate &other, DeleteIPSetRequest * const q)
    : DeleteIPSetPrivate(other, q)
{

}
