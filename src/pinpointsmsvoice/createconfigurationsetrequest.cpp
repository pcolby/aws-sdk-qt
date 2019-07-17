/*
    Copyright 2013-2019 Paul Colby

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

#include "createconfigurationsetrequest.h"
#include "createconfigurationsetrequest_p.h"
#include "createconfigurationsetresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::CreateConfigurationSetRequest
 * \brief The CreateConfigurationSetRequest class provides an interface for PinpointSMSVoice CreateConfigurationSet requests.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::createConfigurationSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationSetRequest::CreateConfigurationSetRequest(const CreateConfigurationSetRequest &other)
    : PinpointSMSVoiceRequest(new CreateConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationSetRequest object.
 */
CreateConfigurationSetRequest::CreateConfigurationSetRequest()
    : PinpointSMSVoiceRequest(new CreateConfigurationSetRequestPrivate(PinpointSMSVoiceRequest::CreateConfigurationSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigurationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigurationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationSetResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSMSVoice::CreateConfigurationSetRequestPrivate
 * \brief The CreateConfigurationSetRequestPrivate class provides private implementation for CreateConfigurationSetRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a CreateConfigurationSetRequestPrivate object for PinpointSMSVoice \a action,
 * with public implementation \a q.
 */
CreateConfigurationSetRequestPrivate::CreateConfigurationSetRequestPrivate(
    const PinpointSMSVoiceRequest::Action action, CreateConfigurationSetRequest * const q)
    : PinpointSMSVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationSetRequest
 * class' copy constructor.
 */
CreateConfigurationSetRequestPrivate::CreateConfigurationSetRequestPrivate(
    const CreateConfigurationSetRequestPrivate &other, CreateConfigurationSetRequest * const q)
    : PinpointSMSVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSMSVoice
} // namespace QtAws
