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
