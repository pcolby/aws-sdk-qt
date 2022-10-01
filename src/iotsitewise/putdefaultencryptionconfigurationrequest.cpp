// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdefaultencryptionconfigurationrequest.h"
#include "putdefaultencryptionconfigurationrequest_p.h"
#include "putdefaultencryptionconfigurationresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::PutDefaultEncryptionConfigurationRequest
 * \brief The PutDefaultEncryptionConfigurationRequest class provides an interface for IoTSiteWise PutDefaultEncryptionConfiguration requests.
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
 * \sa IoTSiteWiseClient::putDefaultEncryptionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutDefaultEncryptionConfigurationRequest::PutDefaultEncryptionConfigurationRequest(const PutDefaultEncryptionConfigurationRequest &other)
    : IoTSiteWiseRequest(new PutDefaultEncryptionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDefaultEncryptionConfigurationRequest object.
 */
PutDefaultEncryptionConfigurationRequest::PutDefaultEncryptionConfigurationRequest()
    : IoTSiteWiseRequest(new PutDefaultEncryptionConfigurationRequestPrivate(IoTSiteWiseRequest::PutDefaultEncryptionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutDefaultEncryptionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDefaultEncryptionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDefaultEncryptionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutDefaultEncryptionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::PutDefaultEncryptionConfigurationRequestPrivate
 * \brief The PutDefaultEncryptionConfigurationRequestPrivate class provides private implementation for PutDefaultEncryptionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a PutDefaultEncryptionConfigurationRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
PutDefaultEncryptionConfigurationRequestPrivate::PutDefaultEncryptionConfigurationRequestPrivate(
    const IoTSiteWiseRequest::Action action, PutDefaultEncryptionConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDefaultEncryptionConfigurationRequest
 * class' copy constructor.
 */
PutDefaultEncryptionConfigurationRequestPrivate::PutDefaultEncryptionConfigurationRequestPrivate(
    const PutDefaultEncryptionConfigurationRequestPrivate &other, PutDefaultEncryptionConfigurationRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
