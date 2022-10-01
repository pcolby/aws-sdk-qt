// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackagerequest.h"
#include "describepackagerequest_p.h"
#include "describepackageresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageRequest
 * \brief The DescribePackageRequest class provides an interface for Panorama DescribePackage requests.
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
 * \sa PanoramaClient::describePackage
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackageRequest::DescribePackageRequest(const DescribePackageRequest &other)
    : PanoramaRequest(new DescribePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackageRequest object.
 */
DescribePackageRequest::DescribePackageRequest()
    : PanoramaRequest(new DescribePackageRequestPrivate(PanoramaRequest::DescribePackageAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackageRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackageResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribePackageRequestPrivate
 * \brief The DescribePackageRequestPrivate class provides private implementation for DescribePackageRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribePackageRequestPrivate::DescribePackageRequestPrivate(
    const PanoramaRequest::Action action, DescribePackageRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackageRequest
 * class' copy constructor.
 */
DescribePackageRequestPrivate::DescribePackageRequestPrivate(
    const DescribePackageRequestPrivate &other, DescribePackageRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
