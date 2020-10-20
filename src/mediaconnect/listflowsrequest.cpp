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

#include "listflowsrequest.h"
#include "listflowsrequest_p.h"
#include "listflowsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListFlowsRequest
 * \brief The ListFlowsRequest class provides an interface for MediaConnect ListFlows requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listFlows
 */

/*!
 * Constructs a copy of \a other.
 */
ListFlowsRequest::ListFlowsRequest(const ListFlowsRequest &other)
    : MediaConnectRequest(new ListFlowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFlowsRequest object.
 */
ListFlowsRequest::ListFlowsRequest()
    : MediaConnectRequest(new ListFlowsRequestPrivate(MediaConnectRequest::ListFlowsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFlowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFlowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFlowsRequest::response(QNetworkReply * const reply) const
{
    return new ListFlowsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::ListFlowsRequestPrivate
 * \brief The ListFlowsRequestPrivate class provides private implementation for ListFlowsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListFlowsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
ListFlowsRequestPrivate::ListFlowsRequestPrivate(
    const MediaConnectRequest::Action action, ListFlowsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFlowsRequest
 * class' copy constructor.
 */
ListFlowsRequestPrivate::ListFlowsRequestPrivate(
    const ListFlowsRequestPrivate &other, ListFlowsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
