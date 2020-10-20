/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteflowrequest.h"
#include "deleteflowrequest_p.h"
#include "deleteflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DeleteFlowRequest
 * \brief The DeleteFlowRequest class provides an interface for MediaConnect DeleteFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::deleteFlow
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFlowRequest::DeleteFlowRequest(const DeleteFlowRequest &other)
    : MediaConnectRequest(new DeleteFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFlowRequest object.
 */
DeleteFlowRequest::DeleteFlowRequest()
    : MediaConnectRequest(new DeleteFlowRequestPrivate(MediaConnectRequest::DeleteFlowAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFlowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::DeleteFlowRequestPrivate
 * \brief The DeleteFlowRequestPrivate class provides private implementation for DeleteFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DeleteFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
DeleteFlowRequestPrivate::DeleteFlowRequestPrivate(
    const MediaConnectRequest::Action action, DeleteFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFlowRequest
 * class' copy constructor.
 */
DeleteFlowRequestPrivate::DeleteFlowRequestPrivate(
    const DeleteFlowRequestPrivate &other, DeleteFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
