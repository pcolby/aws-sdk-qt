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

#include "liststreamingimagesrequest.h"
#include "liststreamingimagesrequest_p.h"
#include "liststreamingimagesresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStreamingImagesRequest
 * \brief The ListStreamingImagesRequest class provides an interface for NimbleStudio ListStreamingImages requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStreamingImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamingImagesRequest::ListStreamingImagesRequest(const ListStreamingImagesRequest &other)
    : NimbleStudioRequest(new ListStreamingImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamingImagesRequest object.
 */
ListStreamingImagesRequest::ListStreamingImagesRequest()
    : NimbleStudioRequest(new ListStreamingImagesRequestPrivate(NimbleStudioRequest::ListStreamingImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamingImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamingImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamingImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamingImagesResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListStreamingImagesRequestPrivate
 * \brief The ListStreamingImagesRequestPrivate class provides private implementation for ListStreamingImagesRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStreamingImagesRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListStreamingImagesRequestPrivate::ListStreamingImagesRequestPrivate(
    const NimbleStudioRequest::Action action, ListStreamingImagesRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamingImagesRequest
 * class' copy constructor.
 */
ListStreamingImagesRequestPrivate::ListStreamingImagesRequestPrivate(
    const ListStreamingImagesRequestPrivate &other, ListStreamingImagesRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
