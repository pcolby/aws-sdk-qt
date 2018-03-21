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

#include "deletereceiptrulesetrequest.h"
#include "deletereceiptrulesetrequest_p.h"
#include "deletereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  DeleteReceiptRuleSetRequest
 *
 * @brief  Implements SES DeleteReceiptRuleSet requests.
 *
 * @see    SESClient::deleteReceiptRuleSet
 */

/**
 * @brief  Constructs a new DeleteReceiptRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReceiptRuleSetResponse::DeleteReceiptRuleSetResponse(

/**
 * @brief  Constructs a new DeleteReceiptRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest(const DeleteReceiptRuleSetRequest &other)
    : SESRequest(new DeleteReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReceiptRuleSetRequest object.
 */
DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest()
    : SESRequest(new DeleteReceiptRuleSetRequestPrivate(SESRequest::DeleteReceiptRuleSetAction, this))
{

}

bool DeleteReceiptRuleSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReceiptRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReceiptRuleSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DeleteReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptRuleSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReceiptRuleSetRequestPrivate
 *
 * @brief  Private implementation for DeleteReceiptRuleSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptRuleSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteReceiptRuleSetRequest instance.
 */
DeleteReceiptRuleSetRequestPrivate::DeleteReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, DeleteReceiptRuleSetRequest * const q)
    : DeleteReceiptRuleSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReceiptRuleSetRequest instance.
 */
DeleteReceiptRuleSetRequestPrivate::DeleteReceiptRuleSetRequestPrivate(
    const DeleteReceiptRuleSetRequestPrivate &other, DeleteReceiptRuleSetRequest * const q)
    : DeleteReceiptRuleSetPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
