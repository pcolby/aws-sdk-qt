/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteconfigurationseteventdestinationrequest.h"
#include "deleteconfigurationseteventdestinationrequest_p.h"
#include "deleteconfigurationseteventdestinationresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::DeleteConfigurationSetEventDestinationRequest
 * \brief The DeleteConfigurationSetEventDestinationRequest class provides an interface for PinpointSMSVoice DeleteConfigurationSetEventDestination requests.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::deleteConfigurationSetEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConfigurationSetEventDestinationRequest::DeleteConfigurationSetEventDestinationRequest(const DeleteConfigurationSetEventDestinationRequest &other)
    : PinpointSMSVoiceRequest(new DeleteConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConfigurationSetEventDestinationRequest object.
 */
DeleteConfigurationSetEventDestinationRequest::DeleteConfigurationSetEventDestinationRequest()
    : PinpointSMSVoiceRequest(new DeleteConfigurationSetEventDestinationRequestPrivate(PinpointSMSVoiceRequest::DeleteConfigurationSetEventDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConfigurationSetEventDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetEventDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSMSVoice::DeleteConfigurationSetEventDestinationRequestPrivate
 * \brief The DeleteConfigurationSetEventDestinationRequestPrivate class provides private implementation for DeleteConfigurationSetEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a DeleteConfigurationSetEventDestinationRequestPrivate object for PinpointSMSVoice \a action,
 * with public implementation \a q.
 */
DeleteConfigurationSetEventDestinationRequestPrivate::DeleteConfigurationSetEventDestinationRequestPrivate(
    const PinpointSMSVoiceRequest::Action action, DeleteConfigurationSetEventDestinationRequest * const q)
    : PinpointSMSVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetEventDestinationRequest
 * class' copy constructor.
 */
DeleteConfigurationSetEventDestinationRequestPrivate::DeleteConfigurationSetEventDestinationRequestPrivate(
    const DeleteConfigurationSetEventDestinationRequestPrivate &other, DeleteConfigurationSetEventDestinationRequest * const q)
    : PinpointSMSVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSMSVoice
} // namespace QtAws
