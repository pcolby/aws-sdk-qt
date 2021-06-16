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

#include "updatetemplateactiveversionrequest.h"
#include "updatetemplateactiveversionrequest_p.h"
#include "updatetemplateactiveversionresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateTemplateActiveVersionRequest
 * \brief The UpdateTemplateActiveVersionRequest class provides an interface for Pinpoint UpdateTemplateActiveVersion requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateTemplateActiveVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTemplateActiveVersionRequest::UpdateTemplateActiveVersionRequest(const UpdateTemplateActiveVersionRequest &other)
    : PinpointRequest(new UpdateTemplateActiveVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTemplateActiveVersionRequest object.
 */
UpdateTemplateActiveVersionRequest::UpdateTemplateActiveVersionRequest()
    : PinpointRequest(new UpdateTemplateActiveVersionRequestPrivate(PinpointRequest::UpdateTemplateActiveVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTemplateActiveVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTemplateActiveVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTemplateActiveVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTemplateActiveVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateTemplateActiveVersionRequestPrivate
 * \brief The UpdateTemplateActiveVersionRequestPrivate class provides private implementation for UpdateTemplateActiveVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateTemplateActiveVersionRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateTemplateActiveVersionRequestPrivate::UpdateTemplateActiveVersionRequestPrivate(
    const PinpointRequest::Action action, UpdateTemplateActiveVersionRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTemplateActiveVersionRequest
 * class' copy constructor.
 */
UpdateTemplateActiveVersionRequestPrivate::UpdateTemplateActiveVersionRequestPrivate(
    const UpdateTemplateActiveVersionRequestPrivate &other, UpdateTemplateActiveVersionRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
