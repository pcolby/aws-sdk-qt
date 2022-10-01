// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassetpropertyvaluehistoryrequest.h"
#include "getassetpropertyvaluehistoryrequest_p.h"
#include "getassetpropertyvaluehistoryresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueHistoryRequest
 * \brief The GetAssetPropertyValueHistoryRequest class provides an interface for IoTSiteWise GetAssetPropertyValueHistory requests.
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
 * \sa IoTSiteWiseClient::getAssetPropertyValueHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssetPropertyValueHistoryRequest::GetAssetPropertyValueHistoryRequest(const GetAssetPropertyValueHistoryRequest &other)
    : IoTSiteWiseRequest(new GetAssetPropertyValueHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssetPropertyValueHistoryRequest object.
 */
GetAssetPropertyValueHistoryRequest::GetAssetPropertyValueHistoryRequest()
    : IoTSiteWiseRequest(new GetAssetPropertyValueHistoryRequestPrivate(IoTSiteWiseRequest::GetAssetPropertyValueHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssetPropertyValueHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssetPropertyValueHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssetPropertyValueHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetAssetPropertyValueHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyValueHistoryRequestPrivate
 * \brief The GetAssetPropertyValueHistoryRequestPrivate class provides private implementation for GetAssetPropertyValueHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetAssetPropertyValueHistoryRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
GetAssetPropertyValueHistoryRequestPrivate::GetAssetPropertyValueHistoryRequestPrivate(
    const IoTSiteWiseRequest::Action action, GetAssetPropertyValueHistoryRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssetPropertyValueHistoryRequest
 * class' copy constructor.
 */
GetAssetPropertyValueHistoryRequestPrivate::GetAssetPropertyValueHistoryRequestPrivate(
    const GetAssetPropertyValueHistoryRequestPrivate &other, GetAssetPropertyValueHistoryRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
