// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdisassociateprojectassetsrequest.h"
#include "batchdisassociateprojectassetsrequest_p.h"
#include "batchdisassociateprojectassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::BatchDisassociateProjectAssetsRequest
 * \brief The BatchDisassociateProjectAssetsRequest class provides an interface for IoTSiteWise BatchDisassociateProjectAssets requests.
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
 * \sa IoTSiteWiseClient::batchDisassociateProjectAssets
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDisassociateProjectAssetsRequest::BatchDisassociateProjectAssetsRequest(const BatchDisassociateProjectAssetsRequest &other)
    : IoTSiteWiseRequest(new BatchDisassociateProjectAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDisassociateProjectAssetsRequest object.
 */
BatchDisassociateProjectAssetsRequest::BatchDisassociateProjectAssetsRequest()
    : IoTSiteWiseRequest(new BatchDisassociateProjectAssetsRequestPrivate(IoTSiteWiseRequest::BatchDisassociateProjectAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDisassociateProjectAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDisassociateProjectAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDisassociateProjectAssetsRequest::response(QNetworkReply * const reply) const
{
    return new BatchDisassociateProjectAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::BatchDisassociateProjectAssetsRequestPrivate
 * \brief The BatchDisassociateProjectAssetsRequestPrivate class provides private implementation for BatchDisassociateProjectAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a BatchDisassociateProjectAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
BatchDisassociateProjectAssetsRequestPrivate::BatchDisassociateProjectAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, BatchDisassociateProjectAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDisassociateProjectAssetsRequest
 * class' copy constructor.
 */
BatchDisassociateProjectAssetsRequestPrivate::BatchDisassociateProjectAssetsRequestPrivate(
    const BatchDisassociateProjectAssetsRequestPrivate &other, BatchDisassociateProjectAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
