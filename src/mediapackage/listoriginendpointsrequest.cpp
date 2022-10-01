// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
