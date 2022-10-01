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

#include "getconfigurationseteventdestinationsrequest.h"
#include "getconfigurationseteventdestinationsrequest_p.h"
#include "getconfigurationseteventdestinationsresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::GetConfigurationSetEventDestinationsRequest
 * \brief The GetConfigurationSetEventDestinationsRequest class provides an interface for PinpointSmsVoice GetConfigurationSetEventDestinations requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::getConfigurationSetEventDestinations
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigurationSetEventDestinationsRequest::GetConfigurationSetEventDestinationsRequest(const GetConfigurationSetEventDestinationsRequest &other)
    : PinpointSmsVoiceRequest(new GetConfigurationSetEventDestinationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigurationSetEventDestinationsRequest object.
 */
GetConfigurationSetEventDestinationsRequest::GetConfigurationSetEventDestinationsRequest()
    : PinpointSmsVoiceRequest(new GetConfigurationSetEventDestinationsRequestPrivate(PinpointSmsVoiceRequest::GetConfigurationSetEventDestinationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigurationSetEventDestinationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigurationSetEventDestinationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigurationSetEventDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigurationSetEventDestinationsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoice::GetConfigurationSetEventDestinationsRequestPrivate
 * \brief The GetConfigurationSetEventDestinationsRequestPrivate class provides private implementation for GetConfigurationSetEventDestinationsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
GetConfigurationSetEventDestinationsRequestPrivate::GetConfigurationSetEventDestinationsRequestPrivate(
    const PinpointSmsVoiceRequest::Action action, GetConfigurationSetEventDestinationsRequest * const q)
    : PinpointSmsVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigurationSetEventDestinationsRequest
 * class' copy constructor.
 */
GetConfigurationSetEventDestinationsRequestPrivate::GetConfigurationSetEventDestinationsRequestPrivate(
    const GetConfigurationSetEventDestinationsRequestPrivate &other, GetConfigurationSetEventDestinationsRequest * const q)
    : PinpointSmsVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
