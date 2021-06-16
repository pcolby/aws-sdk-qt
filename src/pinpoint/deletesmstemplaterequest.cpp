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

#include "deletesmstemplaterequest.h"
#include "deletesmstemplaterequest_p.h"
#include "deletesmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateRequest
 * \brief The DeleteSmsTemplateRequest class provides an interface for Pinpoint DeleteSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSmsTemplateRequest::DeleteSmsTemplateRequest(const DeleteSmsTemplateRequest &other)
    : PinpointRequest(new DeleteSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSmsTemplateRequest object.
 */
DeleteSmsTemplateRequest::DeleteSmsTemplateRequest()
    : PinpointRequest(new DeleteSmsTemplateRequestPrivate(PinpointRequest::DeleteSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateRequestPrivate
 * \brief The DeleteSmsTemplateRequestPrivate class provides private implementation for DeleteSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteSmsTemplateRequestPrivate::DeleteSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSmsTemplateRequest
 * class' copy constructor.
 */
DeleteSmsTemplateRequestPrivate::DeleteSmsTemplateRequestPrivate(
    const DeleteSmsTemplateRequestPrivate &other, DeleteSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
