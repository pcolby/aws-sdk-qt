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

#include "liststudiosrequest.h"
#include "liststudiosrequest_p.h"
#include "liststudiosresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStudiosRequest
 * \brief The ListStudiosRequest class provides an interface for NimbleStudio ListStudios requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStudios
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudiosRequest::ListStudiosRequest(const ListStudiosRequest &other)
    : NimbleStudioRequest(new ListStudiosRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudiosRequest object.
 */
ListStudiosRequest::ListStudiosRequest()
    : NimbleStudioRequest(new ListStudiosRequestPrivate(NimbleStudioRequest::ListStudiosAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudiosRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudiosResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudiosRequest::response(QNetworkReply * const reply) const
{
    return new ListStudiosResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListStudiosRequestPrivate
 * \brief The ListStudiosRequestPrivate class provides private implementation for ListStudiosRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStudiosRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListStudiosRequestPrivate::ListStudiosRequestPrivate(
    const NimbleStudioRequest::Action action, ListStudiosRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudiosRequest
 * class' copy constructor.
 */
ListStudiosRequestPrivate::ListStudiosRequestPrivate(
    const ListStudiosRequestPrivate &other, ListStudiosRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
