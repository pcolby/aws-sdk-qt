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

#include "updatesmstemplaterequest.h"
#include "updatesmstemplaterequest_p.h"
#include "updatesmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateRequest
 * \brief The UpdateSmsTemplateRequest class provides an interface for Pinpoint UpdateSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSmsTemplateRequest::UpdateSmsTemplateRequest(const UpdateSmsTemplateRequest &other)
    : PinpointRequest(new UpdateSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSmsTemplateRequest object.
 */
UpdateSmsTemplateRequest::UpdateSmsTemplateRequest()
    : PinpointRequest(new UpdateSmsTemplateRequestPrivate(PinpointRequest::UpdateSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateRequestPrivate
 * \brief The UpdateSmsTemplateRequestPrivate class provides private implementation for UpdateSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateSmsTemplateRequestPrivate::UpdateSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSmsTemplateRequest
 * class' copy constructor.
 */
UpdateSmsTemplateRequestPrivate::UpdateSmsTemplateRequestPrivate(
    const UpdateSmsTemplateRequestPrivate &other, UpdateSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
