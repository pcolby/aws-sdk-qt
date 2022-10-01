// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestorageconfigurationrequest.h"
#include "describestorageconfigurationrequest_p.h"
#include "describestorageconfigurationresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeStorageConfigurationRequest
 * \brief The DescribeStorageConfigurationRequest class provides an interface for IoTSiteWise DescribeStorageConfiguration requests.
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
 * \sa IoTSiteWiseClient::describeStorageConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStorageConfigurationRequest::DescribeStorageConfigurationRequest(const DescribeStorageConfigurationRequest &other)
    : IoTSiteWiseRequest(new DescribeStorageConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStorageConfigurationRequest object.
 */
DescribeStorageConfigurationRequest::DescribeStorageConfigurationRequest()
    : IoTSiteWiseRequest(new DescribeStorageConfigurationRequestPrivate(IoTSiteWiseRequest::DescribeStorageConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStorageConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStorageConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStorageConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStorageConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeStorageConfigurationRequestPrivate
 * \brief The DescribeStorageConfigurationRequestPrivate class provides private implementation for DescribeStorageConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeStorageConfigurationRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeStorageConfigurationRequestPrivate::DescribeStorageConfigurationRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeStorageConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStorageConfigurationRequest
 * class' copy constructor.
 */
DescribeStorageConfigurationRequestPrivate::DescribeStorageConfigurationRequestPrivate(
    const DescribeStorageConfigurationRequestPrivate &other, DescribeStorageConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
