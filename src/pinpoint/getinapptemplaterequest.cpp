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

#include "getinapptemplaterequest.h"
#include "getinapptemplaterequest_p.h"
#include "getinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateRequest
 * \brief The GetInAppTemplateRequest class provides an interface for Pinpoint GetInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetInAppTemplateRequest::GetInAppTemplateRequest(const GetInAppTemplateRequest &other)
    : PinpointRequest(new GetInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInAppTemplateRequest object.
 */
GetInAppTemplateRequest::GetInAppTemplateRequest()
    : PinpointRequest(new GetInAppTemplateRequestPrivate(PinpointRequest::GetInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateRequestPrivate
 * \brief The GetInAppTemplateRequestPrivate class provides private implementation for GetInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetInAppTemplateRequestPrivate::GetInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, GetInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInAppTemplateRequest
 * class' copy constructor.
 */
GetInAppTemplateRequestPrivate::GetInAppTemplateRequestPrivate(
    const GetInAppTemplateRequestPrivate &other, GetInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
