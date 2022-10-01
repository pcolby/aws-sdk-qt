// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createportalrequest.h"
#include "createportalrequest_p.h"
#include "createportalresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreatePortalRequest
 * \brief The CreatePortalRequest class provides an interface for IoTSiteWise CreatePortal requests.
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
 * \sa IoTSiteWiseClient::createPortal
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePortalRequest::CreatePortalRequest(const CreatePortalRequest &other)
    : IoTSiteWiseRequest(new CreatePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePortalRequest object.
 */
CreatePortalRequest::CreatePortalRequest()
    : IoTSiteWiseRequest(new CreatePortalRequestPrivate(IoTSiteWiseRequest::CreatePortalAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePortalRequest::response(QNetworkReply * const reply) const
{
    return new CreatePortalResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreatePortalRequestPrivate
 * \brief The CreatePortalRequestPrivate class provides private implementation for CreatePortalRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreatePortalRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreatePortalRequestPrivate::CreatePortalRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreatePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePortalRequest
 * class' copy constructor.
 */
CreatePortalRequestPrivate::CreatePortalRequestPrivate(
    const CreatePortalRequestPrivate &other, CreatePortalRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
