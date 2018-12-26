/*
    Copyright 2013-2018 Paul Colby

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

#include "updateflowsourcerequest.h"
#include "updateflowsourcerequest_p.h"
#include "updateflowsourceresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceRequest
 * \brief The UpdateFlowSourceRequest class provides an interface for MediaConnect UpdateFlowSource requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowSourceRequest::UpdateFlowSourceRequest(const UpdateFlowSourceRequest &other)
    : MediaConnectRequest(new UpdateFlowSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowSourceRequest object.
 */
UpdateFlowSourceRequest::UpdateFlowSourceRequest()
    : MediaConnectRequest(new UpdateFlowSourceRequestPrivate(MediaConnectRequest::UpdateFlowSourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceRequestPrivate
 * \brief The UpdateFlowSourceRequestPrivate class provides private implementation for UpdateFlowSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowSourceRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowSourceRequestPrivate::UpdateFlowSourceRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowSourceRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowSourceRequest
 * class' copy constructor.
 */
UpdateFlowSourceRequestPrivate::UpdateFlowSourceRequestPrivate(
    const UpdateFlowSourceRequestPrivate &other, UpdateFlowSourceRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
