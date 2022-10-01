// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstorageconfigurationrequest.h"
#include "putstorageconfigurationrequest_p.h"
#include "putstorageconfigurationresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::PutStorageConfigurationRequest
 * \brief The PutStorageConfigurationRequest class provides an interface for IoTSiteWise PutStorageConfiguration requests.
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
 * \sa IoTSiteWiseClient::putStorageConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutStorageConfigurationRequest::PutStorageConfigurationRequest(const PutStorageConfigurationRequest &other)
    : IoTSiteWiseRequest(new PutStorageConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutStorageConfigurationRequest object.
 */
PutStorageConfigurationRequest::PutStorageConfigurationRequest()
    : IoTSiteWiseRequest(new PutStorageConfigurationRequestPrivate(IoTSiteWiseRequest::PutStorageConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutStorageConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutStorageConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutStorageConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutStorageConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::PutStorageConfigurationRequestPrivate
 * \brief The PutStorageConfigurationRequestPrivate class provides private implementation for PutStorageConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a PutStorageConfigurationRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
PutStorageConfigurationRequestPrivate::PutStorageConfigurationRequestPrivate(
    const IoTSiteWiseRequest::Action action, PutStorageConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutStorageConfigurationRequest
 * class' copy constructor.
 */
PutStorageConfigurationRequestPrivate::PutStorageConfigurationRequestPrivate(
    const PutStorageConfigurationRequestPrivate &other, PutStorageConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
