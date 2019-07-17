/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteassetrequest.h"
#include "deleteassetrequest_p.h"
#include "deleteassetresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeleteAssetRequest
 * \brief The DeleteAssetRequest class provides an interface for MediaPackageVod DeleteAsset requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deleteAsset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssetRequest::DeleteAssetRequest(const DeleteAssetRequest &other)
    : MediaPackageVodRequest(new DeleteAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssetRequest object.
 */
DeleteAssetRequest::DeleteAssetRequest()
    : MediaPackageVodRequest(new DeleteAssetRequestPrivate(MediaPackageVodRequest::DeleteAssetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::DeleteAssetRequestPrivate
 * \brief The DeleteAssetRequestPrivate class provides private implementation for DeleteAssetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeleteAssetRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
DeleteAssetRequestPrivate::DeleteAssetRequestPrivate(
    const MediaPackageVodRequest::Action action, DeleteAssetRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssetRequest
 * class' copy constructor.
 */
DeleteAssetRequestPrivate::DeleteAssetRequestPrivate(
    const DeleteAssetRequestPrivate &other, DeleteAssetRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
