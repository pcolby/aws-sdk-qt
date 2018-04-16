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

/*!
 * \class QtAws::SES::SetReceiptRulePositionRequest
 *
 * \brief The SetReceiptRulePositionRequest class provides an interface for SES SetReceiptRulePosition requests.
 *
 * \ingroup SES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::setReceiptRulePosition
 */

/*!
 * @brief  Constructs a new SetReceiptRulePositionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetReceiptRulePositionRequest::SetReceiptRulePositionRequest(const SetReceiptRulePositionRequest &other)
    : SESRequest(new SetReceiptRulePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SetReceiptRulePositionRequest object.
 */
SetReceiptRulePositionRequest::SetReceiptRulePositionRequest()
    : SESRequest(new SetReceiptRulePositionRequestPrivate(SESRequest::SetReceiptRulePositionAction, this))
{

}

/*!
 * \reimp
 */
bool SetReceiptRulePositionRequest::isValid() const
{
    return false;
}


/*!
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

/*!
 * @internal
 *
 * @class  SetReceiptRulePositionRequestPrivate
 *
 * @brief  Private implementation for SetReceiptRulePositionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetReceiptRulePositionRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SetReceiptRulePositionRequest instance.
 */
SetReceiptRulePositionRequestPrivate::SetReceiptRulePositionRequestPrivate(
    const SESRequest::Action action, SetReceiptRulePositionRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
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
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
