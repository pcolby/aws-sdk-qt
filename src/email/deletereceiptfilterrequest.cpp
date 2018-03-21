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

#include "deletereceiptfilterrequest.h"
#include "deletereceiptfilterrequest_p.h"
#include "deletereceiptfilterresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  DeleteReceiptFilterRequest
 *
 * @brief  Implements SES DeleteReceiptFilter requests.
 *
 * @see    SESClient::deleteReceiptFilter
 */

/**
 * @brief  Constructs a new DeleteReceiptFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReceiptFilterRequest::DeleteReceiptFilterRequest(const DeleteReceiptFilterRequest &other)
    : SESRequest(new DeleteReceiptFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReceiptFilterRequest object.
 */
DeleteReceiptFilterRequest::DeleteReceiptFilterRequest()
    : SESRequest(new DeleteReceiptFilterRequestPrivate(SESRequest::DeleteReceiptFilterAction, this))
{

}

bool DeleteReceiptFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReceiptFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReceiptFilterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DeleteReceiptFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReceiptFilterRequestPrivate
 *
 * @brief  Private implementation for DeleteReceiptFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptFilterRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteReceiptFilterRequest instance.
 */
DeleteReceiptFilterRequestPrivate::DeleteReceiptFilterRequestPrivate(
    const SESRequest::Action action, DeleteReceiptFilterRequest * const q)
    : DeleteReceiptFilterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReceiptFilterRequest instance.
 */
DeleteReceiptFilterRequestPrivate::DeleteReceiptFilterRequestPrivate(
    const DeleteReceiptFilterRequestPrivate &other, DeleteReceiptFilterRequest * const q)
    : DeleteReceiptFilterPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
