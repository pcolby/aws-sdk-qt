// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassetmodelrequest.h"
#include "describeassetmodelrequest_p.h"
#include "describeassetmodelresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetModelRequest
 * \brief The DescribeAssetModelRequest class provides an interface for IoTSiteWise DescribeAssetModel requests.
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
 * \sa IoTSiteWiseClient::describeAssetModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssetModelRequest::DescribeAssetModelRequest(const DescribeAssetModelRequest &other)
    : IoTSiteWiseRequest(new DescribeAssetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssetModelRequest object.
 */
DescribeAssetModelRequest::DescribeAssetModelRequest()
    : IoTSiteWiseRequest(new DescribeAssetModelRequestPrivate(IoTSiteWiseRequest::DescribeAssetModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssetModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssetModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeAssetModelRequestPrivate
 * \brief The DescribeAssetModelRequestPrivate class provides private implementation for DescribeAssetModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeAssetModelRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeAssetModelRequestPrivate::DescribeAssetModelRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeAssetModelRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssetModelRequest
 * class' copy constructor.
 */
DescribeAssetModelRequestPrivate::DescribeAssetModelRequestPrivate(
    const DescribeAssetModelRequestPrivate &other, DescribeAssetModelRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
