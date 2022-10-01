// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassetpropertyaggregatesrequest.h"
#include "getassetpropertyaggregatesrequest_p.h"
#include "getassetpropertyaggregatesresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyAggregatesRequest
 * \brief The GetAssetPropertyAggregatesRequest class provides an interface for IoTSiteWise GetAssetPropertyAggregates requests.
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
 * \sa IoTSiteWiseClient::getAssetPropertyAggregates
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssetPropertyAggregatesRequest::GetAssetPropertyAggregatesRequest(const GetAssetPropertyAggregatesRequest &other)
    : IoTSiteWiseRequest(new GetAssetPropertyAggregatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssetPropertyAggregatesRequest object.
 */
GetAssetPropertyAggregatesRequest::GetAssetPropertyAggregatesRequest()
    : IoTSiteWiseRequest(new GetAssetPropertyAggregatesRequestPrivate(IoTSiteWiseRequest::GetAssetPropertyAggregatesAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssetPropertyAggregatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssetPropertyAggregatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssetPropertyAggregatesRequest::response(QNetworkReply * const reply) const
{
    return new GetAssetPropertyAggregatesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::GetAssetPropertyAggregatesRequestPrivate
 * \brief The GetAssetPropertyAggregatesRequestPrivate class provides private implementation for GetAssetPropertyAggregatesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a GetAssetPropertyAggregatesRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
GetAssetPropertyAggregatesRequestPrivate::GetAssetPropertyAggregatesRequestPrivate(
    const IoTSiteWiseRequest::Action action, GetAssetPropertyAggregatesRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssetPropertyAggregatesRequest
 * class' copy constructor.
 */
GetAssetPropertyAggregatesRequestPrivate::GetAssetPropertyAggregatesRequestPrivate(
    const GetAssetPropertyAggregatesRequestPrivate &other, GetAssetPropertyAggregatesRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
