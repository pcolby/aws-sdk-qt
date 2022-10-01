// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputassetpropertyvaluerequest.h"
#include "batchputassetpropertyvaluerequest_p.h"
#include "batchputassetpropertyvalueresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchPutAssetPropertyValueRequest
 * \brief The BatchPutAssetPropertyValueRequest class provides an interface for IoTSiteWise BatchPutAssetPropertyValue requests.
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
 * \sa IoTSiteWiseClient::batchPutAssetPropertyValue
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutAssetPropertyValueRequest::BatchPutAssetPropertyValueRequest(const BatchPutAssetPropertyValueRequest &other)
    : IoTSiteWiseRequest(new BatchPutAssetPropertyValueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutAssetPropertyValueRequest object.
 */
BatchPutAssetPropertyValueRequest::BatchPutAssetPropertyValueRequest()
    : IoTSiteWiseRequest(new BatchPutAssetPropertyValueRequestPrivate(IoTSiteWiseRequest::BatchPutAssetPropertyValueAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutAssetPropertyValueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutAssetPropertyValueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutAssetPropertyValueRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutAssetPropertyValueResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::BatchPutAssetPropertyValueRequestPrivate
 * \brief The BatchPutAssetPropertyValueRequestPrivate class provides private implementation for BatchPutAssetPropertyValueRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchPutAssetPropertyValueRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
BatchPutAssetPropertyValueRequestPrivate::BatchPutAssetPropertyValueRequestPrivate(
    const IoTSiteWiseRequest::Action action, BatchPutAssetPropertyValueRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutAssetPropertyValueRequest
 * class' copy constructor.
 */
BatchPutAssetPropertyValueRequestPrivate::BatchPutAssetPropertyValueRequestPrivate(
    const BatchPutAssetPropertyValueRequestPrivate &other, BatchPutAssetPropertyValueRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
