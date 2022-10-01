// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
