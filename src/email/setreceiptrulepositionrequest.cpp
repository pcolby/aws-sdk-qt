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

#include "setreceiptrulepositionrequest.h"
#include "setreceiptrulepositionrequest_p.h"
#include "setreceiptrulepositionresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  SetReceiptRulePositionRequest
 *
 * @brief  Implements SES SetReceiptRulePosition requests.
 *
 * @see    SESClient::setReceiptRulePosition
 */

/**
 * @brief  Constructs a new SetReceiptRulePositionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetReceiptRulePositionRequest::SetReceiptRulePositionRequest(const SetReceiptRulePositionRequest &other)
    : SESRequest(new SetReceiptRulePositionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetReceiptRulePositionRequest object.
 */
SetReceiptRulePositionRequest::SetReceiptRulePositionRequest()
    : SESRequest(new SetReceiptRulePositionRequestPrivate(SESRequest::SetReceiptRulePositionAction, this))
{

}

bool SetReceiptRulePositionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetReceiptRulePositionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetReceiptRulePositionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * SetReceiptRulePositionRequest::response(QNetworkReply * const reply) const
{
    return new SetReceiptRulePositionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetReceiptRulePositionRequestPrivate
 *
 * @brief  Private implementation for SetReceiptRulePositionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetReceiptRulePositionRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SetReceiptRulePositionRequest instance.
 */
SetReceiptRulePositionRequestPrivate::SetReceiptRulePositionRequestPrivate(
    const SESRequest::Action action, SetReceiptRulePositionRequest * const q)
    : SetReceiptRulePositionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetReceiptRulePositionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetReceiptRulePositionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetReceiptRulePositionRequest instance.
 */
SetReceiptRulePositionRequestPrivate::SetReceiptRulePositionRequestPrivate(
    const SetReceiptRulePositionRequestPrivate &other, SetReceiptRulePositionRequest * const q)
    : SetReceiptRulePositionPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
