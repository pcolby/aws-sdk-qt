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

#include "setidentityfeedbackforwardingenabledrequest.h"
#include "setidentityfeedbackforwardingenabledrequest_p.h"
#include "setidentityfeedbackforwardingenabledresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  SetIdentityFeedbackForwardingEnabledRequest
 *
 * @brief  Implements SES SetIdentityFeedbackForwardingEnabled requests.
 *
 * @see    SESClient::setIdentityFeedbackForwardingEnabled
 */

/**
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityFeedbackForwardingEnabledResponse::SetIdentityFeedbackForwardingEnabledResponse(

/**
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetIdentityFeedbackForwardingEnabledRequest::SetIdentityFeedbackForwardingEnabledRequest(const SetIdentityFeedbackForwardingEnabledRequest &other)
    : SESRequest(new SetIdentityFeedbackForwardingEnabledRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledRequest object.
 */
SetIdentityFeedbackForwardingEnabledRequest::SetIdentityFeedbackForwardingEnabledRequest()
    : SESRequest(new SetIdentityFeedbackForwardingEnabledRequestPrivate(SESRequest::SetIdentityFeedbackForwardingEnabledAction, this))
{

}

bool SetIdentityFeedbackForwardingEnabledRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetIdentityFeedbackForwardingEnabledResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetIdentityFeedbackForwardingEnabledResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * SetIdentityFeedbackForwardingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityFeedbackForwardingEnabledResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetIdentityFeedbackForwardingEnabledRequestPrivate
 *
 * @brief  Private implementation for SetIdentityFeedbackForwardingEnabledRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SetIdentityFeedbackForwardingEnabledRequest instance.
 */
SetIdentityFeedbackForwardingEnabledRequestPrivate::SetIdentityFeedbackForwardingEnabledRequestPrivate(
    const SESRequest::Action action, SetIdentityFeedbackForwardingEnabledRequest * const q)
    : SetIdentityFeedbackForwardingEnabledPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityFeedbackForwardingEnabledRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetIdentityFeedbackForwardingEnabledRequest instance.
 */
SetIdentityFeedbackForwardingEnabledRequestPrivate::SetIdentityFeedbackForwardingEnabledRequestPrivate(
    const SetIdentityFeedbackForwardingEnabledRequestPrivate &other, SetIdentityFeedbackForwardingEnabledRequest * const q)
    : SetIdentityFeedbackForwardingEnabledPrivate(other, q)
{

}
