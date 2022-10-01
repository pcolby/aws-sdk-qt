// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackageimportjobrequest.h"
#include "describepackageimportjobrequest_p.h"
#include "describepackageimportjobresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageImportJobRequest
 * \brief The DescribePackageImportJobRequest class provides an interface for Panorama DescribePackageImportJob requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::describePackageImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackageImportJobRequest::DescribePackageImportJobRequest(const DescribePackageImportJobRequest &other)
    : PanoramaRequest(new DescribePackageImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackageImportJobRequest object.
 */
DescribePackageImportJobRequest::DescribePackageImportJobRequest()
    : PanoramaRequest(new DescribePackageImportJobRequestPrivate(PanoramaRequest::DescribePackageImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackageImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackageImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackageImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackageImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribePackageImportJobRequestPrivate
 * \brief The DescribePackageImportJobRequestPrivate class provides private implementation for DescribePackageImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageImportJobRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribePackageImportJobRequestPrivate::DescribePackageImportJobRequestPrivate(
    const PanoramaRequest::Action action, DescribePackageImportJobRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackageImportJobRequest
 * class' copy constructor.
 */
DescribePackageImportJobRequestPrivate::DescribePackageImportJobRequestPrivate(
    const DescribePackageImportJobRequestPrivate &other, DescribePackageImportJobRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
