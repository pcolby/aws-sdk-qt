// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportalsrequest.h"
#include "listportalsrequest_p.h"
#include "listportalsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListPortalsRequest
 * \brief The ListPortalsRequest class provides an interface for IoTSiteWise ListPortals requests.
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
 * \sa IoTSiteWiseClient::listPortals
 */

/*!
 * Constructs a copy of \a other.
 */
ListPortalsRequest::ListPortalsRequest(const ListPortalsRequest &other)
    : IoTSiteWiseRequest(new ListPortalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPortalsRequest object.
 */
ListPortalsRequest::ListPortalsRequest()
    : IoTSiteWiseRequest(new ListPortalsRequestPrivate(IoTSiteWiseRequest::ListPortalsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPortalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPortalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPortalsRequest::response(QNetworkReply * const reply) const
{
    return new ListPortalsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListPortalsRequestPrivate
 * \brief The ListPortalsRequestPrivate class provides private implementation for ListPortalsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListPortalsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListPortalsRequestPrivate::ListPortalsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListPortalsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPortalsRequest
 * class' copy constructor.
 */
ListPortalsRequestPrivate::ListPortalsRequestPrivate(
    const ListPortalsRequestPrivate &other, ListPortalsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
