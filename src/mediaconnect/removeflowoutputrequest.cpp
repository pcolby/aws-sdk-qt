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

#include "removeflowoutputrequest.h"
#include "removeflowoutputrequest_p.h"
#include "removeflowoutputresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputRequest
 * \brief The RemoveFlowOutputRequest class provides an interface for MediaConnect RemoveFlowOutput requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowOutput
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFlowOutputRequest::RemoveFlowOutputRequest(const RemoveFlowOutputRequest &other)
    : MediaConnectRequest(new RemoveFlowOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFlowOutputRequest object.
 */
RemoveFlowOutputRequest::RemoveFlowOutputRequest()
    : MediaConnectRequest(new RemoveFlowOutputRequestPrivate(MediaConnectRequest::RemoveFlowOutputAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFlowOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFlowOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFlowOutputRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFlowOutputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputRequestPrivate
 * \brief The RemoveFlowOutputRequestPrivate class provides private implementation for RemoveFlowOutputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowOutputRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
RemoveFlowOutputRequestPrivate::RemoveFlowOutputRequestPrivate(
    const MediaConnectRequest::Action action, RemoveFlowOutputRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFlowOutputRequest
 * class' copy constructor.
 */
RemoveFlowOutputRequestPrivate::RemoveFlowOutputRequestPrivate(
    const RemoveFlowOutputRequestPrivate &other, RemoveFlowOutputRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
