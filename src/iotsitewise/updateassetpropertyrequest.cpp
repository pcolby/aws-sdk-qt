// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassetpropertyrequest.h"
#include "updateassetpropertyrequest_p.h"
#include "updateassetpropertyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetPropertyRequest
 * \brief The UpdateAssetPropertyRequest class provides an interface for IoTSiteWise UpdateAssetProperty requests.
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
 * \sa IoTSiteWiseClient::updateAssetProperty
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssetPropertyRequest::UpdateAssetPropertyRequest(const UpdateAssetPropertyRequest &other)
    : IoTSiteWiseRequest(new UpdateAssetPropertyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssetPropertyRequest object.
 */
UpdateAssetPropertyRequest::UpdateAssetPropertyRequest()
    : IoTSiteWiseRequest(new UpdateAssetPropertyRequestPrivate(IoTSiteWiseRequest::UpdateAssetPropertyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssetPropertyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssetPropertyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssetPropertyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssetPropertyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetPropertyRequestPrivate
 * \brief The UpdateAssetPropertyRequestPrivate class provides private implementation for UpdateAssetPropertyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetPropertyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateAssetPropertyRequestPrivate::UpdateAssetPropertyRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssetPropertyRequest
 * class' copy constructor.
 */
UpdateAssetPropertyRequestPrivate::UpdateAssetPropertyRequestPrivate(
    const UpdateAssetPropertyRequestPrivate &other, UpdateAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
