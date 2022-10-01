// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
