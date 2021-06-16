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

#include "updatepushtemplaterequest.h"
#include "updatepushtemplaterequest_p.h"
#include "updatepushtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateRequest
 * \brief The UpdatePushTemplateRequest class provides an interface for Pinpoint UpdatePushTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updatePushTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePushTemplateRequest::UpdatePushTemplateRequest(const UpdatePushTemplateRequest &other)
    : PinpointRequest(new UpdatePushTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePushTemplateRequest object.
 */
UpdatePushTemplateRequest::UpdatePushTemplateRequest()
    : PinpointRequest(new UpdatePushTemplateRequestPrivate(PinpointRequest::UpdatePushTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePushTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePushTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePushTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePushTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateRequestPrivate
 * \brief The UpdatePushTemplateRequestPrivate class provides private implementation for UpdatePushTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdatePushTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdatePushTemplateRequestPrivate::UpdatePushTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdatePushTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePushTemplateRequest
 * class' copy constructor.
 */
UpdatePushTemplateRequestPrivate::UpdatePushTemplateRequestPrivate(
    const UpdatePushTemplateRequestPrivate &other, UpdatePushTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
