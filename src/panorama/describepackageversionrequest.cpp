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

#include "describepackageversionrequest.h"
#include "describepackageversionrequest_p.h"
#include "describepackageversionresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageVersionRequest
 * \brief The DescribePackageVersionRequest class provides an interface for Panorama DescribePackageVersion requests.
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
 * \sa PanoramaClient::describePackageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackageVersionRequest::DescribePackageVersionRequest(const DescribePackageVersionRequest &other)
    : PanoramaRequest(new DescribePackageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackageVersionRequest object.
 */
DescribePackageVersionRequest::DescribePackageVersionRequest()
    : PanoramaRequest(new DescribePackageVersionRequestPrivate(PanoramaRequest::DescribePackageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackageVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribePackageVersionRequestPrivate
 * \brief The DescribePackageVersionRequestPrivate class provides private implementation for DescribePackageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageVersionRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribePackageVersionRequestPrivate::DescribePackageVersionRequestPrivate(
    const PanoramaRequest::Action action, DescribePackageVersionRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackageVersionRequest
 * class' copy constructor.
 */
DescribePackageVersionRequestPrivate::DescribePackageVersionRequestPrivate(
    const DescribePackageVersionRequestPrivate &other, DescribePackageVersionRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
