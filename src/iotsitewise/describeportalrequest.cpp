// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeportalrequest.h"
#include "describeportalrequest_p.h"
#include "describeportalresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribePortalRequest
 * \brief The DescribePortalRequest class provides an interface for IoTSiteWise DescribePortal requests.
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
 * \sa IoTSiteWiseClient::describePortal
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePortalRequest::DescribePortalRequest(const DescribePortalRequest &other)
    : IoTSiteWiseRequest(new DescribePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePortalRequest object.
 */
DescribePortalRequest::DescribePortalRequest()
    : IoTSiteWiseRequest(new DescribePortalRequestPrivate(IoTSiteWiseRequest::DescribePortalAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePortalRequest::response(QNetworkReply * const reply) const
{
    return new DescribePortalResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribePortalRequestPrivate
 * \brief The DescribePortalRequestPrivate class provides private implementation for DescribePortalRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribePortalRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribePortalRequestPrivate::DescribePortalRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePortalRequest
 * class' copy constructor.
 */
DescribePortalRequestPrivate::DescribePortalRequestPrivate(
    const DescribePortalRequestPrivate &other, DescribePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
