// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedashboardrequest.h"
#include "deletedashboardrequest_p.h"
#include "deletedashboardresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteDashboardRequest
 * \brief The DeleteDashboardRequest class provides an interface for IoTSiteWise DeleteDashboard requests.
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
 * \sa IoTSiteWiseClient::deleteDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDashboardRequest::DeleteDashboardRequest(const DeleteDashboardRequest &other)
    : IoTSiteWiseRequest(new DeleteDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDashboardRequest object.
 */
DeleteDashboardRequest::DeleteDashboardRequest()
    : IoTSiteWiseRequest(new DeleteDashboardRequestPrivate(IoTSiteWiseRequest::DeleteDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDashboardRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DeleteDashboardRequestPrivate
 * \brief The DeleteDashboardRequestPrivate class provides private implementation for DeleteDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteDashboardRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DeleteDashboardRequestPrivate::DeleteDashboardRequestPrivate(
    const IoTSiteWiseRequest::Action action, DeleteDashboardRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDashboardRequest
 * class' copy constructor.
 */
DeleteDashboardRequestPrivate::DeleteDashboardRequestPrivate(
    const DeleteDashboardRequestPrivate &other, DeleteDashboardRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
