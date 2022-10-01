// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationrequest_p.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::CreateConfigurationSetEventDestinationRequest
 * \brief The CreateConfigurationSetEventDestinationRequest class provides an interface for PinpointSmsVoice CreateConfigurationSetEventDestination requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::createConfigurationSetEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest(const CreateConfigurationSetEventDestinationRequest &other)
    : PinpointSmsVoiceRequest(new CreateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationSetEventDestinationRequest object.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest()
    : PinpointSmsVoiceRequest(new CreateConfigurationSetEventDestinationRequestPrivate(PinpointSmsVoiceRequest::CreateConfigurationSetEventDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigurationSetEventDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationSetEventDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoice::CreateConfigurationSetEventDestinationRequestPrivate
 * \brief The CreateConfigurationSetEventDestinationRequestPrivate class provides private implementation for CreateConfigurationSetEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const PinpointSmsVoiceRequest::Action action, CreateConfigurationSetEventDestinationRequest * const q)
    : PinpointSmsVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationSetEventDestinationRequest
 * class' copy constructor.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const CreateConfigurationSetEventDestinationRequestPrivate &other, CreateConfigurationSetEventDestinationRequest * const q)
    : PinpointSmsVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
