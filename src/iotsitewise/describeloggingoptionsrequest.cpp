// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloggingoptionsrequest.h"
#include "describeloggingoptionsrequest_p.h"
#include "describeloggingoptionsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeLoggingOptionsRequest
 * \brief The DescribeLoggingOptionsRequest class provides an interface for IoTSiteWise DescribeLoggingOptions requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::describeLoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoggingOptionsRequest::DescribeLoggingOptionsRequest(const DescribeLoggingOptionsRequest &other)
    : IoTSiteWiseRequest(new DescribeLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoggingOptionsRequest object.
 */
DescribeLoggingOptionsRequest::DescribeLoggingOptionsRequest()
    : IoTSiteWiseRequest(new DescribeLoggingOptionsRequestPrivate(IoTSiteWiseRequest::DescribeLoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeLoggingOptionsRequestPrivate
 * \brief The DescribeLoggingOptionsRequestPrivate class provides private implementation for DescribeLoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeLoggingOptionsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeLoggingOptionsRequestPrivate::DescribeLoggingOptionsRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeLoggingOptionsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoggingOptionsRequest
 * class' copy constructor.
 */
DescribeLoggingOptionsRequestPrivate::DescribeLoggingOptionsRequestPrivate(
    const DescribeLoggingOptionsRequestPrivate &other, DescribeLoggingOptionsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
