// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegatewayrequest.h"
#include "deletegatewayrequest_p.h"
#include "deletegatewayresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteGatewayRequest
 * \brief The DeleteGatewayRequest class provides an interface for IoTSiteWise DeleteGateway requests.
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
 * \sa IoTSiteWiseClient::deleteGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGatewayRequest::DeleteGatewayRequest(const DeleteGatewayRequest &other)
    : IoTSiteWiseRequest(new DeleteGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGatewayRequest object.
 */
DeleteGatewayRequest::DeleteGatewayRequest()
    : IoTSiteWiseRequest(new DeleteGatewayRequestPrivate(IoTSiteWiseRequest::DeleteGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DeleteGatewayRequestPrivate
 * \brief The DeleteGatewayRequestPrivate class provides private implementation for DeleteGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteGatewayRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DeleteGatewayRequestPrivate::DeleteGatewayRequestPrivate(
    const IoTSiteWiseRequest::Action action, DeleteGatewayRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGatewayRequest
 * class' copy constructor.
 */
DeleteGatewayRequestPrivate::DeleteGatewayRequestPrivate(
    const DeleteGatewayRequestPrivate &other, DeleteGatewayRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
