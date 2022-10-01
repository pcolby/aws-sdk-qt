// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetimeseriesfromassetpropertyrequest.h"
#include "disassociatetimeseriesfromassetpropertyrequest_p.h"
#include "disassociatetimeseriesfromassetpropertyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DisassociateTimeSeriesFromAssetPropertyRequest
 * \brief The DisassociateTimeSeriesFromAssetPropertyRequest class provides an interface for IoTSiteWise DisassociateTimeSeriesFromAssetProperty requests.
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
 * \sa IoTSiteWiseClient::disassociateTimeSeriesFromAssetProperty
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateTimeSeriesFromAssetPropertyRequest::DisassociateTimeSeriesFromAssetPropertyRequest(const DisassociateTimeSeriesFromAssetPropertyRequest &other)
    : IoTSiteWiseRequest(new DisassociateTimeSeriesFromAssetPropertyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateTimeSeriesFromAssetPropertyRequest object.
 */
DisassociateTimeSeriesFromAssetPropertyRequest::DisassociateTimeSeriesFromAssetPropertyRequest()
    : IoTSiteWiseRequest(new DisassociateTimeSeriesFromAssetPropertyRequestPrivate(IoTSiteWiseRequest::DisassociateTimeSeriesFromAssetPropertyAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateTimeSeriesFromAssetPropertyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateTimeSeriesFromAssetPropertyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateTimeSeriesFromAssetPropertyRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateTimeSeriesFromAssetPropertyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DisassociateTimeSeriesFromAssetPropertyRequestPrivate
 * \brief The DisassociateTimeSeriesFromAssetPropertyRequestPrivate class provides private implementation for DisassociateTimeSeriesFromAssetPropertyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DisassociateTimeSeriesFromAssetPropertyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DisassociateTimeSeriesFromAssetPropertyRequestPrivate::DisassociateTimeSeriesFromAssetPropertyRequestPrivate(
    const IoTSiteWiseRequest::Action action, DisassociateTimeSeriesFromAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateTimeSeriesFromAssetPropertyRequest
 * class' copy constructor.
 */
DisassociateTimeSeriesFromAssetPropertyRequestPrivate::DisassociateTimeSeriesFromAssetPropertyRequestPrivate(
    const DisassociateTimeSeriesFromAssetPropertyRequestPrivate &other, DisassociateTimeSeriesFromAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
