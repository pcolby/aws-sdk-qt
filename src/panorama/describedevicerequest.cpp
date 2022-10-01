// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedevicerequest.h"
#include "describedevicerequest_p.h"
#include "describedeviceresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeDeviceRequest
 * \brief The DescribeDeviceRequest class provides an interface for Panorama DescribeDevice requests.
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
 * \sa PanoramaClient::describeDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeviceRequest::DescribeDeviceRequest(const DescribeDeviceRequest &other)
    : PanoramaRequest(new DescribeDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeviceRequest object.
 */
DescribeDeviceRequest::DescribeDeviceRequest()
    : PanoramaRequest(new DescribeDeviceRequestPrivate(PanoramaRequest::DescribeDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribeDeviceRequestPrivate
 * \brief The DescribeDeviceRequestPrivate class provides private implementation for DescribeDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeDeviceRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribeDeviceRequestPrivate::DescribeDeviceRequestPrivate(
    const PanoramaRequest::Action action, DescribeDeviceRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeviceRequest
 * class' copy constructor.
 */
DescribeDeviceRequestPrivate::DescribeDeviceRequestPrivate(
    const DescribeDeviceRequestPrivate &other, DescribeDeviceRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
