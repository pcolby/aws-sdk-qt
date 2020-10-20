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

#include "updateflowoutputrequest.h"
#include "updateflowoutputrequest_p.h"
#include "updateflowoutputresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowOutputRequest
 * \brief The UpdateFlowOutputRequest class provides an interface for MediaConnect UpdateFlowOutput requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowOutput
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowOutputRequest::UpdateFlowOutputRequest(const UpdateFlowOutputRequest &other)
    : MediaConnectRequest(new UpdateFlowOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowOutputRequest object.
 */
UpdateFlowOutputRequest::UpdateFlowOutputRequest()
    : MediaConnectRequest(new UpdateFlowOutputRequestPrivate(MediaConnectRequest::UpdateFlowOutputAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowOutputRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowOutputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowOutputRequestPrivate
 * \brief The UpdateFlowOutputRequestPrivate class provides private implementation for UpdateFlowOutputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowOutputRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowOutputRequestPrivate::UpdateFlowOutputRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowOutputRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowOutputRequest
 * class' copy constructor.
 */
UpdateFlowOutputRequestPrivate::UpdateFlowOutputRequestPrivate(
    const UpdateFlowOutputRequestPrivate &other, UpdateFlowOutputRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
