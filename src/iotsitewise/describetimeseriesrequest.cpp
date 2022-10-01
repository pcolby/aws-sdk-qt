// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetimeseriesrequest.h"
#include "describetimeseriesrequest_p.h"
#include "describetimeseriesresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeTimeSeriesRequest
 * \brief The DescribeTimeSeriesRequest class provides an interface for IoTSiteWise DescribeTimeSeries requests.
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
 * \sa IoTSiteWiseClient::describeTimeSeries
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTimeSeriesRequest::DescribeTimeSeriesRequest(const DescribeTimeSeriesRequest &other)
    : IoTSiteWiseRequest(new DescribeTimeSeriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTimeSeriesRequest object.
 */
DescribeTimeSeriesRequest::DescribeTimeSeriesRequest()
    : IoTSiteWiseRequest(new DescribeTimeSeriesRequestPrivate(IoTSiteWiseRequest::DescribeTimeSeriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTimeSeriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTimeSeriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTimeSeriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTimeSeriesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeTimeSeriesRequestPrivate
 * \brief The DescribeTimeSeriesRequestPrivate class provides private implementation for DescribeTimeSeriesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeTimeSeriesRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeTimeSeriesRequestPrivate::DescribeTimeSeriesRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeTimeSeriesRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTimeSeriesRequest
 * class' copy constructor.
 */
DescribeTimeSeriesRequestPrivate::DescribeTimeSeriesRequestPrivate(
    const DescribeTimeSeriesRequestPrivate &other, DescribeTimeSeriesRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
