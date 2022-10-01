/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateconfigurationseteventdestinationrequest.h"
#include "updateconfigurationseteventdestinationrequest_p.h"
#include "updateconfigurationseteventdestinationresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::UpdateConfigurationSetEventDestinationRequest
 * \brief The UpdateConfigurationSetEventDestinationRequest class provides an interface for PinpointSmsVoice UpdateConfigurationSetEventDestination requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::updateConfigurationSetEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest(const UpdateConfigurationSetEventDestinationRequest &other)
    : PinpointSmsVoiceRequest(new UpdateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationSetEventDestinationRequest object.
 */
UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest()
    : PinpointSmsVoiceRequest(new UpdateConfigurationSetEventDestinationRequestPrivate(PinpointSmsVoiceRequest::UpdateConfigurationSetEventDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationSetEventDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetEventDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoice::UpdateConfigurationSetEventDestinationRequestPrivate
 * \brief The UpdateConfigurationSetEventDestinationRequestPrivate class provides private implementation for UpdateConfigurationSetEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
UpdateConfigurationSetEventDestinationRequestPrivate::UpdateConfigurationSetEventDestinationRequestPrivate(
    const PinpointSmsVoiceRequest::Action action, UpdateConfigurationSetEventDestinationRequest * const q)
    : PinpointSmsVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetEventDestinationRequest
 * class' copy constructor.
 */
UpdateConfigurationSetEventDestinationRequestPrivate::UpdateConfigurationSetEventDestinationRequestPrivate(
    const UpdateConfigurationSetEventDestinationRequestPrivate &other, UpdateConfigurationSetEventDestinationRequest * const q)
    : PinpointSmsVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
