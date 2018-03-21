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

#include "disassociatedelegatefromresourcerequest.h"
#include "disassociatedelegatefromresourcerequest_p.h"
#include "disassociatedelegatefromresourceresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  DisassociateDelegateFromResourceRequest
 *
 * @brief  Implements WorkMail DisassociateDelegateFromResource requests.
 *
 * @see    WorkMailClient::disassociateDelegateFromResource
 */

/**
 * @brief  Constructs a new DisassociateDelegateFromResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateDelegateFromResourceResponse::DisassociateDelegateFromResourceResponse(

/**
 * @brief  Constructs a new DisassociateDelegateFromResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateDelegateFromResourceRequest::DisassociateDelegateFromResourceRequest(const DisassociateDelegateFromResourceRequest &other)
    : WorkMailRequest(new DisassociateDelegateFromResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateDelegateFromResourceRequest object.
 */
DisassociateDelegateFromResourceRequest::DisassociateDelegateFromResourceRequest()
    : WorkMailRequest(new DisassociateDelegateFromResourceRequestPrivate(WorkMailRequest::DisassociateDelegateFromResourceAction, this))
{

}

bool DisassociateDelegateFromResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateDelegateFromResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateDelegateFromResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DisassociateDelegateFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDelegateFromResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateDelegateFromResourceRequestPrivate
 *
 * @brief  Private implementation for DisassociateDelegateFromResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDelegateFromResourceRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DisassociateDelegateFromResourceRequest instance.
 */
DisassociateDelegateFromResourceRequestPrivate::DisassociateDelegateFromResourceRequestPrivate(
    const WorkMailRequest::Action action, DisassociateDelegateFromResourceRequest * const q)
    : DisassociateDelegateFromResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDelegateFromResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDelegateFromResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateDelegateFromResourceRequest instance.
 */
DisassociateDelegateFromResourceRequestPrivate::DisassociateDelegateFromResourceRequestPrivate(
    const DisassociateDelegateFromResourceRequestPrivate &other, DisassociateDelegateFromResourceRequest * const q)
    : DisassociateDelegateFromResourcePrivate(other, q)
{

}
