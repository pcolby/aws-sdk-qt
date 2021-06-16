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

#include "describeharvestjobrequest.h"
#include "describeharvestjobrequest_p.h"
#include "describeharvestjobresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeHarvestJobRequest
 * \brief The DescribeHarvestJobRequest class provides an interface for MediaPackage DescribeHarvestJob requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeHarvestJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHarvestJobRequest::DescribeHarvestJobRequest(const DescribeHarvestJobRequest &other)
    : MediaPackageRequest(new DescribeHarvestJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHarvestJobRequest object.
 */
DescribeHarvestJobRequest::DescribeHarvestJobRequest()
    : MediaPackageRequest(new DescribeHarvestJobRequestPrivate(MediaPackageRequest::DescribeHarvestJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHarvestJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHarvestJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHarvestJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHarvestJobResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::DescribeHarvestJobRequestPrivate
 * \brief The DescribeHarvestJobRequestPrivate class provides private implementation for DescribeHarvestJobRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeHarvestJobRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
DescribeHarvestJobRequestPrivate::DescribeHarvestJobRequestPrivate(
    const MediaPackageRequest::Action action, DescribeHarvestJobRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHarvestJobRequest
 * class' copy constructor.
 */
DescribeHarvestJobRequestPrivate::DescribeHarvestJobRequestPrivate(
    const DescribeHarvestJobRequestPrivate &other, DescribeHarvestJobRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
