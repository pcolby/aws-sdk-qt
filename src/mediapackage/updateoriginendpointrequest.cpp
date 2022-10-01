// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
