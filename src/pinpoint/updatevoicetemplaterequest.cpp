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

#include "updatevoicetemplaterequest.h"
#include "updatevoicetemplaterequest_p.h"
#include "updatevoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateRequest
 * \brief The UpdateVoiceTemplateRequest class provides an interface for Pinpoint UpdateVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVoiceTemplateRequest::UpdateVoiceTemplateRequest(const UpdateVoiceTemplateRequest &other)
    : PinpointRequest(new UpdateVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVoiceTemplateRequest object.
 */
UpdateVoiceTemplateRequest::UpdateVoiceTemplateRequest()
    : PinpointRequest(new UpdateVoiceTemplateRequestPrivate(PinpointRequest::UpdateVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateRequestPrivate
 * \brief The UpdateVoiceTemplateRequestPrivate class provides private implementation for UpdateVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateVoiceTemplateRequestPrivate::UpdateVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVoiceTemplateRequest
 * class' copy constructor.
 */
UpdateVoiceTemplateRequestPrivate::UpdateVoiceTemplateRequestPrivate(
    const UpdateVoiceTemplateRequestPrivate &other, UpdateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
