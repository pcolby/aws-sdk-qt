// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociatedassetsrequest.h"
#include "listassociatedassetsrequest_p.h"
#include "listassociatedassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssociatedAssetsRequest
 * \brief The ListAssociatedAssetsRequest class provides an interface for IoTSiteWise ListAssociatedAssets requests.
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
 * \sa IoTSiteWiseClient::listAssociatedAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedAssetsRequest::ListAssociatedAssetsRequest(const ListAssociatedAssetsRequest &other)
    : IoTSiteWiseRequest(new ListAssociatedAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedAssetsRequest object.
 */
ListAssociatedAssetsRequest::ListAssociatedAssetsRequest()
    : IoTSiteWiseRequest(new ListAssociatedAssetsRequestPrivate(IoTSiteWiseRequest::ListAssociatedAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedAssetsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListAssociatedAssetsRequestPrivate
 * \brief The ListAssociatedAssetsRequestPrivate class provides private implementation for ListAssociatedAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssociatedAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListAssociatedAssetsRequestPrivate::ListAssociatedAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListAssociatedAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedAssetsRequest
 * class' copy constructor.
 */
ListAssociatedAssetsRequestPrivate::ListAssociatedAssetsRequestPrivate(
    const ListAssociatedAssetsRequestPrivate &other, ListAssociatedAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
