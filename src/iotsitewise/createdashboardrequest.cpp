// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdashboardrequest.h"
#include "createdashboardrequest_p.h"
#include "createdashboardresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateDashboardRequest
 * \brief The CreateDashboardRequest class provides an interface for IoTSiteWise CreateDashboard requests.
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
 * \sa IoTSiteWiseClient::createDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDashboardRequest::CreateDashboardRequest(const CreateDashboardRequest &other)
    : IoTSiteWiseRequest(new CreateDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDashboardRequest object.
 */
CreateDashboardRequest::CreateDashboardRequest()
    : IoTSiteWiseRequest(new CreateDashboardRequestPrivate(IoTSiteWiseRequest::CreateDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDashboardRequest::response(QNetworkReply * const reply) const
{
    return new CreateDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreateDashboardRequestPrivate
 * \brief The CreateDashboardRequestPrivate class provides private implementation for CreateDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateDashboardRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreateDashboardRequestPrivate::CreateDashboardRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreateDashboardRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDashboardRequest
 * class' copy constructor.
 */
CreateDashboardRequestPrivate::CreateDashboardRequestPrivate(
    const CreateDashboardRequestPrivate &other, CreateDashboardRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
