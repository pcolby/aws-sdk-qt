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

#include "getsmstemplaterequest.h"
#include "getsmstemplaterequest_p.h"
#include "getsmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateRequest
 * \brief The GetSmsTemplateRequest class provides an interface for Pinpoint GetSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetSmsTemplateRequest::GetSmsTemplateRequest(const GetSmsTemplateRequest &other)
    : PinpointRequest(new GetSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSmsTemplateRequest object.
 */
GetSmsTemplateRequest::GetSmsTemplateRequest()
    : PinpointRequest(new GetSmsTemplateRequestPrivate(PinpointRequest::GetSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateRequestPrivate
 * \brief The GetSmsTemplateRequestPrivate class provides private implementation for GetSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSmsTemplateRequestPrivate::GetSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, GetSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSmsTemplateRequest
 * class' copy constructor.
 */
GetSmsTemplateRequestPrivate::GetSmsTemplateRequestPrivate(
    const GetSmsTemplateRequestPrivate &other, GetSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
