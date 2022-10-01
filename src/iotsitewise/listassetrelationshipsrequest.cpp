// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetrelationshipsrequest.h"
#include "listassetrelationshipsrequest_p.h"
#include "listassetrelationshipsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssetRelationshipsRequest
 * \brief The ListAssetRelationshipsRequest class provides an interface for IoTSiteWise ListAssetRelationships requests.
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
 * \sa IoTSiteWiseClient::listAssetRelationships
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssetRelationshipsRequest::ListAssetRelationshipsRequest(const ListAssetRelationshipsRequest &other)
    : IoTSiteWiseRequest(new ListAssetRelationshipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssetRelationshipsRequest object.
 */
ListAssetRelationshipsRequest::ListAssetRelationshipsRequest()
    : IoTSiteWiseRequest(new ListAssetRelationshipsRequestPrivate(IoTSiteWiseRequest::ListAssetRelationshipsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssetRelationshipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssetRelationshipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssetRelationshipsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssetRelationshipsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListAssetRelationshipsRequestPrivate
 * \brief The ListAssetRelationshipsRequestPrivate class provides private implementation for ListAssetRelationshipsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssetRelationshipsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListAssetRelationshipsRequestPrivate::ListAssetRelationshipsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListAssetRelationshipsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssetRelationshipsRequest
 * class' copy constructor.
 */
ListAssetRelationshipsRequestPrivate::ListAssetRelationshipsRequestPrivate(
    const ListAssetRelationshipsRequestPrivate &other, ListAssetRelationshipsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
