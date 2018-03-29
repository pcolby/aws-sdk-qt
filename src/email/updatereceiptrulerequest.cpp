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

#include "updatereceiptrulerequest.h"
#include "updatereceiptrulerequest_p.h"
#include "updatereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  UpdateReceiptRuleRequest
 *
 * @brief  Implements SES UpdateReceiptRule requests.
 *
 * @see    SESClient::updateReceiptRule
 */

/**
 * @brief  Constructs a new UpdateReceiptRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateReceiptRuleRequest::UpdateReceiptRuleRequest(const UpdateReceiptRuleRequest &other)
    : SESRequest(new UpdateReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateReceiptRuleRequest object.
 */
UpdateReceiptRuleRequest::UpdateReceiptRuleRequest()
    : SESRequest(new UpdateReceiptRuleRequestPrivate(SESRequest::UpdateReceiptRuleAction, this))
{

}

bool UpdateReceiptRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateReceiptRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateReceiptRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReceiptRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateReceiptRuleRequestPrivate
 *
 * @brief  Private implementation for UpdateReceiptRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateReceiptRuleRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateReceiptRuleRequest instance.
 */
UpdateReceiptRuleRequestPrivate::UpdateReceiptRuleRequestPrivate(
    const SESRequest::Action action, UpdateReceiptRuleRequest * const q)
    : UpdateReceiptRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateReceiptRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateReceiptRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateReceiptRuleRequest instance.
 */
UpdateReceiptRuleRequestPrivate::UpdateReceiptRuleRequestPrivate(
    const UpdateReceiptRuleRequestPrivate &other, UpdateReceiptRuleRequest * const q)
    : UpdateReceiptRulePrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
