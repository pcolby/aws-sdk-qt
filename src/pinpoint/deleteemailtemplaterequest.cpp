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

#include "deleteemailtemplaterequest.h"
#include "deleteemailtemplaterequest_p.h"
#include "deleteemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateRequest
 * \brief The DeleteEmailTemplateRequest class provides an interface for Pinpoint DeleteEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailTemplateRequest::DeleteEmailTemplateRequest(const DeleteEmailTemplateRequest &other)
    : PinpointRequest(new DeleteEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailTemplateRequest object.
 */
DeleteEmailTemplateRequest::DeleteEmailTemplateRequest()
    : PinpointRequest(new DeleteEmailTemplateRequestPrivate(PinpointRequest::DeleteEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateRequestPrivate
 * \brief The DeleteEmailTemplateRequestPrivate class provides private implementation for DeleteEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEmailTemplateRequestPrivate::DeleteEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailTemplateRequest
 * class' copy constructor.
 */
DeleteEmailTemplateRequestPrivate::DeleteEmailTemplateRequestPrivate(
    const DeleteEmailTemplateRequestPrivate &other, DeleteEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
