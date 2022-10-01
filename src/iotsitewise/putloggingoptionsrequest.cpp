// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putloggingoptionsrequest.h"
#include "putloggingoptionsrequest_p.h"
#include "putloggingoptionsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::PutLoggingOptionsRequest
 * \brief The PutLoggingOptionsRequest class provides an interface for IoTSiteWise PutLoggingOptions requests.
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
 * \sa IoTSiteWiseClient::putLoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutLoggingOptionsRequest::PutLoggingOptionsRequest(const PutLoggingOptionsRequest &other)
    : IoTSiteWiseRequest(new PutLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLoggingOptionsRequest object.
 */
PutLoggingOptionsRequest::PutLoggingOptionsRequest()
    : IoTSiteWiseRequest(new PutLoggingOptionsRequestPrivate(IoTSiteWiseRequest::PutLoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutLoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutLoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::PutLoggingOptionsRequestPrivate
 * \brief The PutLoggingOptionsRequestPrivate class provides private implementation for PutLoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a PutLoggingOptionsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
PutLoggingOptionsRequestPrivate::PutLoggingOptionsRequestPrivate(
    const IoTSiteWiseRequest::Action action, PutLoggingOptionsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLoggingOptionsRequest
 * class' copy constructor.
 */
PutLoggingOptionsRequestPrivate::PutLoggingOptionsRequestPrivate(
    const PutLoggingOptionsRequestPrivate &other, PutLoggingOptionsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
