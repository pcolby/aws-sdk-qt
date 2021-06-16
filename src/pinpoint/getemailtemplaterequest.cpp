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

#include "getemailtemplaterequest.h"
#include "getemailtemplaterequest_p.h"
#include "getemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEmailTemplateRequest
 * \brief The GetEmailTemplateRequest class provides an interface for Pinpoint GetEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetEmailTemplateRequest::GetEmailTemplateRequest(const GetEmailTemplateRequest &other)
    : PinpointRequest(new GetEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEmailTemplateRequest object.
 */
GetEmailTemplateRequest::GetEmailTemplateRequest()
    : PinpointRequest(new GetEmailTemplateRequestPrivate(PinpointRequest::GetEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetEmailTemplateRequestPrivate
 * \brief The GetEmailTemplateRequestPrivate class provides private implementation for GetEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetEmailTemplateRequestPrivate::GetEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, GetEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEmailTemplateRequest
 * class' copy constructor.
 */
GetEmailTemplateRequestPrivate::GetEmailTemplateRequestPrivate(
    const GetEmailTemplateRequestPrivate &other, GetEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
