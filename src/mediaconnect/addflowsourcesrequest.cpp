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

#include "addflowsourcesrequest.h"
#include "addflowsourcesrequest_p.h"
#include "addflowsourcesresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesRequest
 * \brief The AddFlowSourcesRequest class provides an interface for MediaConnect AddFlowSources requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowSources
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowSourcesRequest::AddFlowSourcesRequest(const AddFlowSourcesRequest &other)
    : MediaConnectRequest(new AddFlowSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowSourcesRequest object.
 */
AddFlowSourcesRequest::AddFlowSourcesRequest()
    : MediaConnectRequest(new AddFlowSourcesRequestPrivate(MediaConnectRequest::AddFlowSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowSourcesRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesRequestPrivate
 * \brief The AddFlowSourcesRequestPrivate class provides private implementation for AddFlowSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowSourcesRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowSourcesRequestPrivate::AddFlowSourcesRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowSourcesRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowSourcesRequest
 * class' copy constructor.
 */
AddFlowSourcesRequestPrivate::AddFlowSourcesRequestPrivate(
    const AddFlowSourcesRequestPrivate &other, AddFlowSourcesRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
