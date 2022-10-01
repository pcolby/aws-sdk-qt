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

#include "describedevicejobrequest.h"
#include "describedevicejobrequest_p.h"
#include "describedevicejobresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeDeviceJobRequest
 * \brief The DescribeDeviceJobRequest class provides an interface for Panorama DescribeDeviceJob requests.
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
 * \sa PanoramaClient::describeDeviceJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeviceJobRequest::DescribeDeviceJobRequest(const DescribeDeviceJobRequest &other)
    : PanoramaRequest(new DescribeDeviceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeviceJobRequest object.
 */
DescribeDeviceJobRequest::DescribeDeviceJobRequest()
    : PanoramaRequest(new DescribeDeviceJobRequestPrivate(PanoramaRequest::DescribeDeviceJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeviceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeviceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeviceJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeviceJobResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribeDeviceJobRequestPrivate
 * \brief The DescribeDeviceJobRequestPrivate class provides private implementation for DescribeDeviceJobRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeDeviceJobRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribeDeviceJobRequestPrivate::DescribeDeviceJobRequestPrivate(
    const PanoramaRequest::Action action, DescribeDeviceJobRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeviceJobRequest
 * class' copy constructor.
 */
DescribeDeviceJobRequestPrivate::DescribeDeviceJobRequestPrivate(
    const DescribeDeviceJobRequestPrivate &other, DescribeDeviceJobRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
