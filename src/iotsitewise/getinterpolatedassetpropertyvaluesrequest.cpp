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

#include "getinterpolatedassetpropertyvaluesrequest.h"
#include "getinterpolatedassetpropertyvaluesrequest_p.h"
#include "getinterpolatedassetpropertyvaluesresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetInterpolatedAssetPropertyValuesRequest
 * \brief The GetInterpolatedAssetPropertyValuesRequest class provides an interface for IoTSiteWise GetInterpolatedAssetPropertyValues requests.
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
 * \sa IoTSiteWiseClient::getInterpolatedAssetPropertyValues
 */

/*!
 * Constructs a copy of \a other.
 */
GetInterpolatedAssetPropertyValuesRequest::GetInterpolatedAssetPropertyValuesRequest(const GetInterpolatedAssetPropertyValuesRequest &other)
    : IoTSiteWiseRequest(new GetInterpolatedAssetPropertyValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInterpolatedAssetPropertyValuesRequest object.
 */
GetInterpolatedAssetPropertyValuesRequest::GetInterpolatedAssetPropertyValuesRequest()
    : IoTSiteWiseRequest(new GetInterpolatedAssetPropertyValuesRequestPrivate(IoTSiteWiseRequest::GetInterpolatedAssetPropertyValuesAction, this))
{

}

/*!
 * \reimp
 */
bool GetInterpolatedAssetPropertyValuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInterpolatedAssetPropertyValuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInterpolatedAssetPropertyValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetInterpolatedAssetPropertyValuesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::GetInterpolatedAssetPropertyValuesRequestPrivate
 * \brief The GetInterpolatedAssetPropertyValuesRequestPrivate class provides private implementation for GetInterpolatedAssetPropertyValuesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetInterpolatedAssetPropertyValuesRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
GetInterpolatedAssetPropertyValuesRequestPrivate::GetInterpolatedAssetPropertyValuesRequestPrivate(
    const IoTSiteWiseRequest::Action action, GetInterpolatedAssetPropertyValuesRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInterpolatedAssetPropertyValuesRequest
 * class' copy constructor.
 */
GetInterpolatedAssetPropertyValuesRequestPrivate::GetInterpolatedAssetPropertyValuesRequestPrivate(
    const GetInterpolatedAssetPropertyValuesRequestPrivate &other, GetInterpolatedAssetPropertyValuesRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
