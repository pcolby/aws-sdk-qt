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
