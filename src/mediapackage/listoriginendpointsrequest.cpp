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

#include "listoriginendpointsrequest.h"
#include "listoriginendpointsrequest_p.h"
#include "listoriginendpointsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListOriginEndpointsRequest
 * \brief The ListOriginEndpointsRequest class provides an interface for MediaPackage ListOriginEndpoints requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listOriginEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListOriginEndpointsRequest::ListOriginEndpointsRequest(const ListOriginEndpointsRequest &other)
    : MediaPackageRequest(new ListOriginEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOriginEndpointsRequest object.
 */
ListOriginEndpointsRequest::ListOriginEndpointsRequest()
    : MediaPackageRequest(new ListOriginEndpointsRequestPrivate(MediaPackageRequest::ListOriginEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOriginEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOriginEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOriginEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListOriginEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::ListOriginEndpointsRequestPrivate
 * \brief The ListOriginEndpointsRequestPrivate class provides private implementation for ListOriginEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListOriginEndpointsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
ListOriginEndpointsRequestPrivate::ListOriginEndpointsRequestPrivate(
    const MediaPackageRequest::Action action, ListOriginEndpointsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOriginEndpointsRequest
 * class' copy constructor.
 */
ListOriginEndpointsRequestPrivate::ListOriginEndpointsRequestPrivate(
    const ListOriginEndpointsRequestPrivate &other, ListOriginEndpointsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
