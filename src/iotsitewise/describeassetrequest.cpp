// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassetrequest.h"
#include "describeassetrequest_p.h"
#include "describeassetresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetRequest
 * \brief The DescribeAssetRequest class provides an interface for IoTSiteWise DescribeAsset requests.
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
 * \sa IoTSiteWiseClient::describeAsset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssetRequest::DescribeAssetRequest(const DescribeAssetRequest &other)
    : IoTSiteWiseRequest(new DescribeAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssetRequest object.
 */
DescribeAssetRequest::DescribeAssetRequest()
    : IoTSiteWiseRequest(new DescribeAssetRequestPrivate(IoTSiteWiseRequest::DescribeAssetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssetResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetRequestPrivate
 * \brief The DescribeAssetRequestPrivate class provides private implementation for DescribeAssetRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAssetRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeAssetRequestPrivate::DescribeAssetRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssetRequest
 * class' copy constructor.
 */
DescribeAssetRequestPrivate::DescribeAssetRequestPrivate(
    const DescribeAssetRequestPrivate &other, DescribeAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
