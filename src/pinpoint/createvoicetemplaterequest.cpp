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

#include "createvoicetemplaterequest.h"
#include "createvoicetemplaterequest_p.h"
#include "createvoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateRequest
 * \brief The CreateVoiceTemplateRequest class provides an interface for Pinpoint CreateVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVoiceTemplateRequest::CreateVoiceTemplateRequest(const CreateVoiceTemplateRequest &other)
    : PinpointRequest(new CreateVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVoiceTemplateRequest object.
 */
CreateVoiceTemplateRequest::CreateVoiceTemplateRequest()
    : PinpointRequest(new CreateVoiceTemplateRequestPrivate(PinpointRequest::CreateVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateRequestPrivate
 * \brief The CreateVoiceTemplateRequestPrivate class provides private implementation for CreateVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateVoiceTemplateRequestPrivate::CreateVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, CreateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVoiceTemplateRequest
 * class' copy constructor.
 */
CreateVoiceTemplateRequestPrivate::CreateVoiceTemplateRequestPrivate(
    const CreateVoiceTemplateRequestPrivate &other, CreateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
