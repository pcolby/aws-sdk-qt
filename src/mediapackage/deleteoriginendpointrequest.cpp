// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
