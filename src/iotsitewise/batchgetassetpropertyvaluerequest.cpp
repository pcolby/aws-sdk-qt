/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
