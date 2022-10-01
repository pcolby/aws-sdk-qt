// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetimeseriesrequest.h"
#include "deletetimeseriesrequest_p.h"
#include "deletetimeseriesresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteTimeSeriesRequest
 * \brief The DeleteTimeSeriesRequest class provides an interface for IoTSiteWise DeleteTimeSeries requests.
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
 * \sa IoTSiteWiseClient::deleteTimeSeries
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTimeSeriesRequest::DeleteTimeSeriesRequest(const DeleteTimeSeriesRequest &other)
    : IoTSiteWiseRequest(new DeleteTimeSeriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTimeSeriesRequest object.
 */
DeleteTimeSeriesRequest::DeleteTimeSeriesRequest()
    : IoTSiteWiseRequest(new DeleteTimeSeriesRequestPrivate(IoTSiteWiseRequest::DeleteTimeSeriesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTimeSeriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTimeSeriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTimeSeriesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTimeSeriesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DeleteTimeSeriesRequestPrivate
 * \brief The DeleteTimeSeriesRequestPrivate class provides private implementation for DeleteTimeSeriesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteTimeSeriesRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DeleteTimeSeriesRequestPrivate::DeleteTimeSeriesRequestPrivate(
    const IoTSiteWiseRequest::Action action, DeleteTimeSeriesRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTimeSeriesRequest
 * class' copy constructor.
 */
DeleteTimeSeriesRequestPrivate::DeleteTimeSeriesRequestPrivate(
    const DeleteTimeSeriesRequestPrivate &other, DeleteTimeSeriesRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
