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

#include "getvoicetemplaterequest.h"
#include "getvoicetemplaterequest_p.h"
#include "getvoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceTemplateRequest
 * \brief The GetVoiceTemplateRequest class provides an interface for Pinpoint GetVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetVoiceTemplateRequest::GetVoiceTemplateRequest(const GetVoiceTemplateRequest &other)
    : PinpointRequest(new GetVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVoiceTemplateRequest object.
 */
GetVoiceTemplateRequest::GetVoiceTemplateRequest()
    : PinpointRequest(new GetVoiceTemplateRequestPrivate(PinpointRequest::GetVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetVoiceTemplateRequestPrivate
 * \brief The GetVoiceTemplateRequestPrivate class provides private implementation for GetVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetVoiceTemplateRequestPrivate::GetVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, GetVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVoiceTemplateRequest
 * class' copy constructor.
 */
GetVoiceTemplateRequestPrivate::GetVoiceTemplateRequestPrivate(
    const GetVoiceTemplateRequestPrivate &other, GetVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
