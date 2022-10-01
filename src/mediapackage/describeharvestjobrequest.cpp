// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
