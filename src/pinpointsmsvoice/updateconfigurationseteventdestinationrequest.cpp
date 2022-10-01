// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
