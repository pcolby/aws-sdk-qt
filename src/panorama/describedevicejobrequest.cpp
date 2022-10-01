// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
