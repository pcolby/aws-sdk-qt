// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegatewaycapabilityconfigurationrequest.h"
#include "describegatewaycapabilityconfigurationrequest_p.h"
#include "describegatewaycapabilityconfigurationresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeGatewayCapabilityConfigurationRequest
 * \brief The DescribeGatewayCapabilityConfigurationRequest class provides an interface for IoTSiteWise DescribeGatewayCapabilityConfiguration requests.
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
 * \sa IoTSiteWiseClient::describeGatewayCapabilityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGatewayCapabilityConfigurationRequest::DescribeGatewayCapabilityConfigurationRequest(const DescribeGatewayCapabilityConfigurationRequest &other)
    : IoTSiteWiseRequest(new DescribeGatewayCapabilityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGatewayCapabilityConfigurationRequest object.
 */
DescribeGatewayCapabilityConfigurationRequest::DescribeGatewayCapabilityConfigurationRequest()
    : IoTSiteWiseRequest(new DescribeGatewayCapabilityConfigurationRequestPrivate(IoTSiteWiseRequest::DescribeGatewayCapabilityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGatewayCapabilityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGatewayCapabilityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGatewayCapabilityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGatewayCapabilityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeGatewayCapabilityConfigurationRequestPrivate
 * \brief The DescribeGatewayCapabilityConfigurationRequestPrivate class provides private implementation for DescribeGatewayCapabilityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeGatewayCapabilityConfigurationRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeGatewayCapabilityConfigurationRequestPrivate::DescribeGatewayCapabilityConfigurationRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeGatewayCapabilityConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGatewayCapabilityConfigurationRequest
 * class' copy constructor.
 */
DescribeGatewayCapabilityConfigurationRequestPrivate::DescribeGatewayCapabilityConfigurationRequestPrivate(
    const DescribeGatewayCapabilityConfigurationRequestPrivate &other, DescribeGatewayCapabilityConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
