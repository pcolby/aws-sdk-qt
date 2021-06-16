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

#include "updateoriginendpointrequest.h"
#include "updateoriginendpointrequest_p.h"
#include "updateoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::UpdateOriginEndpointRequest
 * \brief The UpdateOriginEndpointRequest class provides an interface for MediaPackage UpdateOriginEndpoint requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::updateOriginEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOriginEndpointRequest::UpdateOriginEndpointRequest(const UpdateOriginEndpointRequest &other)
    : MediaPackageRequest(new UpdateOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOriginEndpointRequest object.
 */
UpdateOriginEndpointRequest::UpdateOriginEndpointRequest()
    : MediaPackageRequest(new UpdateOriginEndpointRequestPrivate(MediaPackageRequest::UpdateOriginEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOriginEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOriginEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOriginEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::UpdateOriginEndpointRequestPrivate
 * \brief The UpdateOriginEndpointRequestPrivate class provides private implementation for UpdateOriginEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a UpdateOriginEndpointRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
UpdateOriginEndpointRequestPrivate::UpdateOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, UpdateOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOriginEndpointRequest
 * class' copy constructor.
 */
UpdateOriginEndpointRequestPrivate::UpdateOriginEndpointRequestPrivate(
    const UpdateOriginEndpointRequestPrivate &other, UpdateOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
