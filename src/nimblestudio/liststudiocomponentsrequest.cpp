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

#include "liststudiocomponentsrequest.h"
#include "liststudiocomponentsrequest_p.h"
#include "liststudiocomponentsresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStudioComponentsRequest
 * \brief The ListStudioComponentsRequest class provides an interface for NimbleStudio ListStudioComponents requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStudioComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudioComponentsRequest::ListStudioComponentsRequest(const ListStudioComponentsRequest &other)
    : NimbleStudioRequest(new ListStudioComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudioComponentsRequest object.
 */
ListStudioComponentsRequest::ListStudioComponentsRequest()
    : NimbleStudioRequest(new ListStudioComponentsRequestPrivate(NimbleStudioRequest::ListStudioComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudioComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudioComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudioComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListStudioComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListStudioComponentsRequestPrivate
 * \brief The ListStudioComponentsRequestPrivate class provides private implementation for ListStudioComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStudioComponentsRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListStudioComponentsRequestPrivate::ListStudioComponentsRequestPrivate(
    const NimbleStudioRequest::Action action, ListStudioComponentsRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudioComponentsRequest
 * class' copy constructor.
 */
ListStudioComponentsRequestPrivate::ListStudioComponentsRequestPrivate(
    const ListStudioComponentsRequestPrivate &other, ListStudioComponentsRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
