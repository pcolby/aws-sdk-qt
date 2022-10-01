// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedashboardrequest.h"
#include "updatedashboardrequest_p.h"
#include "updatedashboardresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateDashboardRequest
 * \brief The UpdateDashboardRequest class provides an interface for IoTSiteWise UpdateDashboard requests.
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
 * \sa IoTSiteWiseClient::updateDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDashboardRequest::UpdateDashboardRequest(const UpdateDashboardRequest &other)
    : IoTSiteWiseRequest(new UpdateDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDashboardRequest object.
 */
UpdateDashboardRequest::UpdateDashboardRequest()
    : IoTSiteWiseRequest(new UpdateDashboardRequestPrivate(IoTSiteWiseRequest::UpdateDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDashboardRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateDashboardRequestPrivate
 * \brief The UpdateDashboardRequestPrivate class provides private implementation for UpdateDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateDashboardRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateDashboardRequestPrivate::UpdateDashboardRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateDashboardRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDashboardRequest
 * class' copy constructor.
 */
UpdateDashboardRequestPrivate::UpdateDashboardRequestPrivate(
    const UpdateDashboardRequestPrivate &other, UpdateDashboardRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
