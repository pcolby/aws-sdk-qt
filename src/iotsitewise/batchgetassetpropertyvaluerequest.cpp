// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetassetpropertyvaluerequest.h"
#include "batchgetassetpropertyvaluerequest_p.h"
#include "batchgetassetpropertyvalueresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueRequest
 * \brief The BatchGetAssetPropertyValueRequest class provides an interface for IoTSiteWise BatchGetAssetPropertyValue requests.
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
 * \sa IoTSiteWiseClient::batchGetAssetPropertyValue
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetAssetPropertyValueRequest::BatchGetAssetPropertyValueRequest(const BatchGetAssetPropertyValueRequest &other)
    : IoTSiteWiseRequest(new BatchGetAssetPropertyValueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetAssetPropertyValueRequest object.
 */
BatchGetAssetPropertyValueRequest::BatchGetAssetPropertyValueRequest()
    : IoTSiteWiseRequest(new BatchGetAssetPropertyValueRequestPrivate(IoTSiteWiseRequest::BatchGetAssetPropertyValueAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetAssetPropertyValueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetAssetPropertyValueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetAssetPropertyValueRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetAssetPropertyValueResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueRequestPrivate
 * \brief The BatchGetAssetPropertyValueRequestPrivate class provides private implementation for BatchGetAssetPropertyValueRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchGetAssetPropertyValueRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
BatchGetAssetPropertyValueRequestPrivate::BatchGetAssetPropertyValueRequestPrivate(
    const IoTSiteWiseRequest::Action action, BatchGetAssetPropertyValueRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetAssetPropertyValueRequest
 * class' copy constructor.
 */
BatchGetAssetPropertyValueRequestPrivate::BatchGetAssetPropertyValueRequestPrivate(
    const BatchGetAssetPropertyValueRequestPrivate &other, BatchGetAssetPropertyValueRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
