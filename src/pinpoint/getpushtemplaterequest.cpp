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

#include "getpushtemplaterequest.h"
#include "getpushtemplaterequest_p.h"
#include "getpushtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetPushTemplateRequest
 * \brief The GetPushTemplateRequest class provides an interface for Pinpoint GetPushTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getPushTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetPushTemplateRequest::GetPushTemplateRequest(const GetPushTemplateRequest &other)
    : PinpointRequest(new GetPushTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPushTemplateRequest object.
 */
GetPushTemplateRequest::GetPushTemplateRequest()
    : PinpointRequest(new GetPushTemplateRequestPrivate(PinpointRequest::GetPushTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetPushTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPushTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPushTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetPushTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetPushTemplateRequestPrivate
 * \brief The GetPushTemplateRequestPrivate class provides private implementation for GetPushTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetPushTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetPushTemplateRequestPrivate::GetPushTemplateRequestPrivate(
    const PinpointRequest::Action action, GetPushTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPushTemplateRequest
 * class' copy constructor.
 */
GetPushTemplateRequestPrivate::GetPushTemplateRequestPrivate(
    const GetPushTemplateRequestPrivate &other, GetPushTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
