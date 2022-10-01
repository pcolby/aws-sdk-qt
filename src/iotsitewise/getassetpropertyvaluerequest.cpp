// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassetpropertyvaluerequest.h"
#include "getassetpropertyvaluerequest_p.h"
#include "getassetpropertyvalueresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueRequest
 * \brief The GetAssetPropertyValueRequest class provides an interface for IoTSiteWise GetAssetPropertyValue requests.
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
 * \sa IoTSiteWiseClient::getAssetPropertyValue
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssetPropertyValueRequest::GetAssetPropertyValueRequest(const GetAssetPropertyValueRequest &other)
    : IoTSiteWiseRequest(new GetAssetPropertyValueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssetPropertyValueRequest object.
 */
GetAssetPropertyValueRequest::GetAssetPropertyValueRequest()
    : IoTSiteWiseRequest(new GetAssetPropertyValueRequestPrivate(IoTSiteWiseRequest::GetAssetPropertyValueAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssetPropertyValueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssetPropertyValueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssetPropertyValueRequest::response(QNetworkReply * const reply) const
{
    return new GetAssetPropertyValueResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueRequestPrivate
 * \brief The GetAssetPropertyValueRequestPrivate class provides private implementation for GetAssetPropertyValueRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetAssetPropertyValueRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
GetAssetPropertyValueRequestPrivate::GetAssetPropertyValueRequestPrivate(
    const IoTSiteWiseRequest::Action action, GetAssetPropertyValueRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssetPropertyValueRequest
 * class' copy constructor.
 */
GetAssetPropertyValueRequestPrivate::GetAssetPropertyValueRequestPrivate(
    const GetAssetPropertyValueRequestPrivate &other, GetAssetPropertyValueRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
