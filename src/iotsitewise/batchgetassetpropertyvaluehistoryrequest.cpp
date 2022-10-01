// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetassetpropertyvaluehistoryrequest.h"
#include "batchgetassetpropertyvaluehistoryrequest_p.h"
#include "batchgetassetpropertyvaluehistoryresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueHistoryRequest
 * \brief The BatchGetAssetPropertyValueHistoryRequest class provides an interface for IoTSiteWise BatchGetAssetPropertyValueHistory requests.
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
 * \sa IoTSiteWiseClient::batchGetAssetPropertyValueHistory
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetAssetPropertyValueHistoryRequest::BatchGetAssetPropertyValueHistoryRequest(const BatchGetAssetPropertyValueHistoryRequest &other)
    : IoTSiteWiseRequest(new BatchGetAssetPropertyValueHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetAssetPropertyValueHistoryRequest object.
 */
BatchGetAssetPropertyValueHistoryRequest::BatchGetAssetPropertyValueHistoryRequest()
    : IoTSiteWiseRequest(new BatchGetAssetPropertyValueHistoryRequestPrivate(IoTSiteWiseRequest::BatchGetAssetPropertyValueHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetAssetPropertyValueHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetAssetPropertyValueHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetAssetPropertyValueHistoryRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetAssetPropertyValueHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::BatchGetAssetPropertyValueHistoryRequestPrivate
 * \brief The BatchGetAssetPropertyValueHistoryRequestPrivate class provides private implementation for BatchGetAssetPropertyValueHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchGetAssetPropertyValueHistoryRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
BatchGetAssetPropertyValueHistoryRequestPrivate::BatchGetAssetPropertyValueHistoryRequestPrivate(
    const IoTSiteWiseRequest::Action action, BatchGetAssetPropertyValueHistoryRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetAssetPropertyValueHistoryRequest
 * class' copy constructor.
 */
BatchGetAssetPropertyValueHistoryRequestPrivate::BatchGetAssetPropertyValueHistoryRequestPrivate(
    const BatchGetAssetPropertyValueHistoryRequestPrivate &other, BatchGetAssetPropertyValueHistoryRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
