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
