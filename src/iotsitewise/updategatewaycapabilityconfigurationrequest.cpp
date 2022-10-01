// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewaycapabilityconfigurationrequest.h"
#include "updategatewaycapabilityconfigurationrequest_p.h"
#include "updategatewaycapabilityconfigurationresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateGatewayCapabilityConfigurationRequest
 * \brief The UpdateGatewayCapabilityConfigurationRequest class provides an interface for IoTSiteWise UpdateGatewayCapabilityConfiguration requests.
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
 * \sa IoTSiteWiseClient::updateGatewayCapabilityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewayCapabilityConfigurationRequest::UpdateGatewayCapabilityConfigurationRequest(const UpdateGatewayCapabilityConfigurationRequest &other)
    : IoTSiteWiseRequest(new UpdateGatewayCapabilityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewayCapabilityConfigurationRequest object.
 */
UpdateGatewayCapabilityConfigurationRequest::UpdateGatewayCapabilityConfigurationRequest()
    : IoTSiteWiseRequest(new UpdateGatewayCapabilityConfigurationRequestPrivate(IoTSiteWiseRequest::UpdateGatewayCapabilityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewayCapabilityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewayCapabilityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewayCapabilityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayCapabilityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateGatewayCapabilityConfigurationRequestPrivate
 * \brief The UpdateGatewayCapabilityConfigurationRequestPrivate class provides private implementation for UpdateGatewayCapabilityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateGatewayCapabilityConfigurationRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateGatewayCapabilityConfigurationRequestPrivate::UpdateGatewayCapabilityConfigurationRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateGatewayCapabilityConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayCapabilityConfigurationRequest
 * class' copy constructor.
 */
UpdateGatewayCapabilityConfigurationRequestPrivate::UpdateGatewayCapabilityConfigurationRequestPrivate(
    const UpdateGatewayCapabilityConfigurationRequestPrivate &other, UpdateGatewayCapabilityConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
