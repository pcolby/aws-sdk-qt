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

#include "updateemailtemplaterequest.h"
#include "updateemailtemplaterequest_p.h"
#include "updateemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateRequest
 * \brief The UpdateEmailTemplateRequest class provides an interface for Pinpoint UpdateEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEmailTemplateRequest::UpdateEmailTemplateRequest(const UpdateEmailTemplateRequest &other)
    : PinpointRequest(new UpdateEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEmailTemplateRequest object.
 */
UpdateEmailTemplateRequest::UpdateEmailTemplateRequest()
    : PinpointRequest(new UpdateEmailTemplateRequestPrivate(PinpointRequest::UpdateEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateRequestPrivate
 * \brief The UpdateEmailTemplateRequestPrivate class provides private implementation for UpdateEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEmailTemplateRequestPrivate::UpdateEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmailTemplateRequest
 * class' copy constructor.
 */
UpdateEmailTemplateRequestPrivate::UpdateEmailTemplateRequestPrivate(
    const UpdateEmailTemplateRequestPrivate &other, UpdateEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
