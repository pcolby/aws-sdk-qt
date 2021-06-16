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

#include "rotateingestendpointcredentialsrequest.h"
#include "rotateingestendpointcredentialsrequest_p.h"
#include "rotateingestendpointcredentialsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::RotateIngestEndpointCredentialsRequest
 * \brief The RotateIngestEndpointCredentialsRequest class provides an interface for MediaPackage RotateIngestEndpointCredentials requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::rotateIngestEndpointCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
RotateIngestEndpointCredentialsRequest::RotateIngestEndpointCredentialsRequest(const RotateIngestEndpointCredentialsRequest &other)
    : MediaPackageRequest(new RotateIngestEndpointCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RotateIngestEndpointCredentialsRequest object.
 */
RotateIngestEndpointCredentialsRequest::RotateIngestEndpointCredentialsRequest()
    : MediaPackageRequest(new RotateIngestEndpointCredentialsRequestPrivate(MediaPackageRequest::RotateIngestEndpointCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool RotateIngestEndpointCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RotateIngestEndpointCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RotateIngestEndpointCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new RotateIngestEndpointCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::RotateIngestEndpointCredentialsRequestPrivate
 * \brief The RotateIngestEndpointCredentialsRequestPrivate class provides private implementation for RotateIngestEndpointCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a RotateIngestEndpointCredentialsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
RotateIngestEndpointCredentialsRequestPrivate::RotateIngestEndpointCredentialsRequestPrivate(
    const MediaPackageRequest::Action action, RotateIngestEndpointCredentialsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RotateIngestEndpointCredentialsRequest
 * class' copy constructor.
 */
RotateIngestEndpointCredentialsRequestPrivate::RotateIngestEndpointCredentialsRequestPrivate(
    const RotateIngestEndpointCredentialsRequestPrivate &other, RotateIngestEndpointCredentialsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
