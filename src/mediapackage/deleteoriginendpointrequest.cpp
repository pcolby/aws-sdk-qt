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

#include "deleteoriginendpointrequest.h"
#include "deleteoriginendpointrequest_p.h"
#include "deleteoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DeleteOriginEndpointRequest
 * \brief The DeleteOriginEndpointRequest class provides an interface for MediaPackage DeleteOriginEndpoint requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::deleteOriginEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOriginEndpointRequest::DeleteOriginEndpointRequest(const DeleteOriginEndpointRequest &other)
    : MediaPackageRequest(new DeleteOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOriginEndpointRequest object.
 */
DeleteOriginEndpointRequest::DeleteOriginEndpointRequest()
    : MediaPackageRequest(new DeleteOriginEndpointRequestPrivate(MediaPackageRequest::DeleteOriginEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOriginEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOriginEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOriginEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::DeleteOriginEndpointRequestPrivate
 * \brief The DeleteOriginEndpointRequestPrivate class provides private implementation for DeleteOriginEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DeleteOriginEndpointRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
DeleteOriginEndpointRequestPrivate::DeleteOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, DeleteOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOriginEndpointRequest
 * class' copy constructor.
 */
DeleteOriginEndpointRequestPrivate::DeleteOriginEndpointRequestPrivate(
    const DeleteOriginEndpointRequestPrivate &other, DeleteOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
