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

#include "deleteinapptemplaterequest.h"
#include "deleteinapptemplaterequest_p.h"
#include "deleteinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateRequest
 * \brief The DeleteInAppTemplateRequest class provides an interface for Pinpoint DeleteInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInAppTemplateRequest::DeleteInAppTemplateRequest(const DeleteInAppTemplateRequest &other)
    : PinpointRequest(new DeleteInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInAppTemplateRequest object.
 */
DeleteInAppTemplateRequest::DeleteInAppTemplateRequest()
    : PinpointRequest(new DeleteInAppTemplateRequestPrivate(PinpointRequest::DeleteInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateRequestPrivate
 * \brief The DeleteInAppTemplateRequestPrivate class provides private implementation for DeleteInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteInAppTemplateRequestPrivate::DeleteInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInAppTemplateRequest
 * class' copy constructor.
 */
DeleteInAppTemplateRequestPrivate::DeleteInAppTemplateRequestPrivate(
    const DeleteInAppTemplateRequestPrivate &other, DeleteInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
