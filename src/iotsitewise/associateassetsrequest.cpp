// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateassetsrequest.h"
#include "associateassetsrequest_p.h"
#include "associateassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::AssociateAssetsRequest
 * \brief The AssociateAssetsRequest class provides an interface for IoTSiteWise AssociateAssets requests.
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
 * \sa IoTSiteWiseClient::associateAssets
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateAssetsRequest::AssociateAssetsRequest(const AssociateAssetsRequest &other)
    : IoTSiteWiseRequest(new AssociateAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateAssetsRequest object.
 */
AssociateAssetsRequest::AssociateAssetsRequest()
    : IoTSiteWiseRequest(new AssociateAssetsRequestPrivate(IoTSiteWiseRequest::AssociateAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateAssetsRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::AssociateAssetsRequestPrivate
 * \brief The AssociateAssetsRequestPrivate class provides private implementation for AssociateAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a AssociateAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
AssociateAssetsRequestPrivate::AssociateAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, AssociateAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateAssetsRequest
 * class' copy constructor.
 */
AssociateAssetsRequestPrivate::AssociateAssetsRequestPrivate(
    const AssociateAssetsRequestPrivate &other, AssociateAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
