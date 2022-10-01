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
