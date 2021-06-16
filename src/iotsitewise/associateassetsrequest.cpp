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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
