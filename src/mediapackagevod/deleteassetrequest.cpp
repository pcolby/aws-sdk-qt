// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
