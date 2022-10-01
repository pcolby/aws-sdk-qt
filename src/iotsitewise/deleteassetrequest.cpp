// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassetrequest.h"
#include "deleteassetrequest_p.h"
#include "deleteassetresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteAssetRequest
 * \brief The DeleteAssetRequest class provides an interface for IoTSiteWise DeleteAsset requests.
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
 * \sa IoTSiteWiseClient::deleteAsset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssetRequest::DeleteAssetRequest(const DeleteAssetRequest &other)
    : IoTSiteWiseRequest(new DeleteAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssetRequest object.
 */
DeleteAssetRequest::DeleteAssetRequest()
    : IoTSiteWiseRequest(new DeleteAssetRequestPrivate(IoTSiteWiseRequest::DeleteAssetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssetResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DeleteAssetRequestPrivate
 * \brief The DeleteAssetRequestPrivate class provides private implementation for DeleteAssetRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteAssetRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DeleteAssetRequestPrivate::DeleteAssetRequestPrivate(
    const IoTSiteWiseRequest::Action action, DeleteAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssetRequest
 * class' copy constructor.
 */
DeleteAssetRequestPrivate::DeleteAssetRequestPrivate(
    const DeleteAssetRequestPrivate &other, DeleteAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
