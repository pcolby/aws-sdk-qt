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

#include "updateinapptemplaterequest.h"
#include "updateinapptemplaterequest_p.h"
#include "updateinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateRequest
 * \brief The UpdateInAppTemplateRequest class provides an interface for Pinpoint UpdateInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInAppTemplateRequest::UpdateInAppTemplateRequest(const UpdateInAppTemplateRequest &other)
    : PinpointRequest(new UpdateInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInAppTemplateRequest object.
 */
UpdateInAppTemplateRequest::UpdateInAppTemplateRequest()
    : PinpointRequest(new UpdateInAppTemplateRequestPrivate(PinpointRequest::UpdateInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateRequestPrivate
 * \brief The UpdateInAppTemplateRequestPrivate class provides private implementation for UpdateInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateInAppTemplateRequestPrivate::UpdateInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInAppTemplateRequest
 * class' copy constructor.
 */
UpdateInAppTemplateRequestPrivate::UpdateInAppTemplateRequestPrivate(
    const UpdateInAppTemplateRequestPrivate &other, UpdateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
