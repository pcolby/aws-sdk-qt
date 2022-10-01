// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetimeseriestoassetpropertyrequest.h"
#include "associatetimeseriestoassetpropertyrequest_p.h"
#include "associatetimeseriestoassetpropertyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::AssociateTimeSeriesToAssetPropertyRequest
 * \brief The AssociateTimeSeriesToAssetPropertyRequest class provides an interface for IoTSiteWise AssociateTimeSeriesToAssetProperty requests.
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
 * \sa IoTSiteWiseClient::associateTimeSeriesToAssetProperty
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTimeSeriesToAssetPropertyRequest::AssociateTimeSeriesToAssetPropertyRequest(const AssociateTimeSeriesToAssetPropertyRequest &other)
    : IoTSiteWiseRequest(new AssociateTimeSeriesToAssetPropertyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTimeSeriesToAssetPropertyRequest object.
 */
AssociateTimeSeriesToAssetPropertyRequest::AssociateTimeSeriesToAssetPropertyRequest()
    : IoTSiteWiseRequest(new AssociateTimeSeriesToAssetPropertyRequestPrivate(IoTSiteWiseRequest::AssociateTimeSeriesToAssetPropertyAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateTimeSeriesToAssetPropertyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateTimeSeriesToAssetPropertyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTimeSeriesToAssetPropertyRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTimeSeriesToAssetPropertyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::AssociateTimeSeriesToAssetPropertyRequestPrivate
 * \brief The AssociateTimeSeriesToAssetPropertyRequestPrivate class provides private implementation for AssociateTimeSeriesToAssetPropertyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a AssociateTimeSeriesToAssetPropertyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
AssociateTimeSeriesToAssetPropertyRequestPrivate::AssociateTimeSeriesToAssetPropertyRequestPrivate(
    const IoTSiteWiseRequest::Action action, AssociateTimeSeriesToAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateTimeSeriesToAssetPropertyRequest
 * class' copy constructor.
 */
AssociateTimeSeriesToAssetPropertyRequestPrivate::AssociateTimeSeriesToAssetPropertyRequestPrivate(
    const AssociateTimeSeriesToAssetPropertyRequestPrivate &other, AssociateTimeSeriesToAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
