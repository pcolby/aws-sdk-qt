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

#include "startoutboundvoicecontactrequest.h"
#include "startoutboundvoicecontactrequest_p.h"
#include "startoutboundvoicecontactresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/**
 * @class  StartOutboundVoiceContactRequest
 *
 * @brief  Implements Connect StartOutboundVoiceContact requests.
 *
 * @see    ConnectClient::startOutboundVoiceContact
 */

/**
 * @brief  Constructs a new StartOutboundVoiceContactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartOutboundVoiceContactRequest::StartOutboundVoiceContactRequest(const StartOutboundVoiceContactRequest &other)
    : ConnectRequest(new StartOutboundVoiceContactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartOutboundVoiceContactRequest object.
 */
StartOutboundVoiceContactRequest::StartOutboundVoiceContactRequest()
    : ConnectRequest(new StartOutboundVoiceContactRequestPrivate(ConnectRequest::StartOutboundVoiceContactAction, this))
{

}

bool StartOutboundVoiceContactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartOutboundVoiceContactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartOutboundVoiceContactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOutboundVoiceContactRequest::response(QNetworkReply * const reply) const
{
    return new StartOutboundVoiceContactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartOutboundVoiceContactRequestPrivate
 *
 * @brief  Private implementation for StartOutboundVoiceContactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartOutboundVoiceContactRequestPrivate object.
 *
 * @param  action  Connect action being performed.
 * @param  q       Pointer to this object's public StartOutboundVoiceContactRequest instance.
 */
StartOutboundVoiceContactRequestPrivate::StartOutboundVoiceContactRequestPrivate(
    const ConnectRequest::Action action, StartOutboundVoiceContactRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartOutboundVoiceContactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartOutboundVoiceContactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartOutboundVoiceContactRequest instance.
 */
StartOutboundVoiceContactRequestPrivate::StartOutboundVoiceContactRequestPrivate(
    const StartOutboundVoiceContactRequestPrivate &other, StartOutboundVoiceContactRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
