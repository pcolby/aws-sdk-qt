// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategatewayrequest.h"
#include "creategatewayrequest_p.h"
#include "creategatewayresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateGatewayRequest
 * \brief The CreateGatewayRequest class provides an interface for IoTSiteWise CreateGateway requests.
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
 * \sa IoTSiteWiseClient::createGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGatewayRequest::CreateGatewayRequest(const CreateGatewayRequest &other)
    : IoTSiteWiseRequest(new CreateGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGatewayRequest object.
 */
CreateGatewayRequest::CreateGatewayRequest()
    : IoTSiteWiseRequest(new CreateGatewayRequestPrivate(IoTSiteWiseRequest::CreateGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreateGatewayRequestPrivate
 * \brief The CreateGatewayRequestPrivate class provides private implementation for CreateGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateGatewayRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreateGatewayRequestPrivate::CreateGatewayRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreateGatewayRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGatewayRequest
 * class' copy constructor.
 */
CreateGatewayRequestPrivate::CreateGatewayRequestPrivate(
    const CreateGatewayRequestPrivate &other, CreateGatewayRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
