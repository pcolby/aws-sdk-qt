// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdashboardsrequest.h"
#include "listdashboardsrequest_p.h"
#include "listdashboardsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListDashboardsRequest
 * \brief The ListDashboardsRequest class provides an interface for IoTSiteWise ListDashboards requests.
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
 * \sa IoTSiteWiseClient::listDashboards
 */

/*!
 * Constructs a copy of \a other.
 */
ListDashboardsRequest::ListDashboardsRequest(const ListDashboardsRequest &other)
    : IoTSiteWiseRequest(new ListDashboardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDashboardsRequest object.
 */
ListDashboardsRequest::ListDashboardsRequest()
    : IoTSiteWiseRequest(new ListDashboardsRequestPrivate(IoTSiteWiseRequest::ListDashboardsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDashboardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDashboardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new ListDashboardsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListDashboardsRequestPrivate
 * \brief The ListDashboardsRequestPrivate class provides private implementation for ListDashboardsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListDashboardsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListDashboardsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDashboardsRequest
 * class' copy constructor.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const ListDashboardsRequestPrivate &other, ListDashboardsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
