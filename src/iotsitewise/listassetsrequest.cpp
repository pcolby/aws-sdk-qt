// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetsrequest.h"
#include "listassetsrequest_p.h"
#include "listassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssetsRequest
 * \brief The ListAssetsRequest class provides an interface for IoTSiteWise ListAssets requests.
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
 * \sa IoTSiteWiseClient::listAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssetsRequest::ListAssetsRequest(const ListAssetsRequest &other)
    : IoTSiteWiseRequest(new ListAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssetsRequest object.
 */
ListAssetsRequest::ListAssetsRequest()
    : IoTSiteWiseRequest(new ListAssetsRequestPrivate(IoTSiteWiseRequest::ListAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssetsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListAssetsRequestPrivate
 * \brief The ListAssetsRequestPrivate class provides private implementation for ListAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListAssetsRequestPrivate::ListAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssetsRequest
 * class' copy constructor.
 */
ListAssetsRequestPrivate::ListAssetsRequestPrivate(
    const ListAssetsRequestPrivate &other, ListAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
