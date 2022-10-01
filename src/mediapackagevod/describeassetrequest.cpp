// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassetrequest.h"
#include "describeassetrequest_p.h"
#include "describeassetresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DescribeAssetRequest
 * \brief The DescribeAssetRequest class provides an interface for MediaPackageVod DescribeAsset requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::describeAsset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssetRequest::DescribeAssetRequest(const DescribeAssetRequest &other)
    : MediaPackageVodRequest(new DescribeAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssetRequest object.
 */
DescribeAssetRequest::DescribeAssetRequest()
    : MediaPackageVodRequest(new DescribeAssetRequestPrivate(MediaPackageVodRequest::DescribeAssetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::DescribeAssetRequestPrivate
 * \brief The DescribeAssetRequestPrivate class provides private implementation for DescribeAssetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DescribeAssetRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
DescribeAssetRequestPrivate::DescribeAssetRequestPrivate(
    const MediaPackageVodRequest::Action action, DescribeAssetRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssetRequest
 * class' copy constructor.
 */
DescribeAssetRequestPrivate::DescribeAssetRequestPrivate(
    const DescribeAssetRequestPrivate &other, DescribeAssetRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
