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

#include "updateassetrequest.h"
#include "updateassetrequest_p.h"
#include "updateassetresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetRequest
 * \brief The UpdateAssetRequest class provides an interface for IoTSiteWise UpdateAsset requests.
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
 * \sa IoTSiteWiseClient::updateAsset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssetRequest::UpdateAssetRequest(const UpdateAssetRequest &other)
    : IoTSiteWiseRequest(new UpdateAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssetRequest object.
 */
UpdateAssetRequest::UpdateAssetRequest()
    : IoTSiteWiseRequest(new UpdateAssetRequestPrivate(IoTSiteWiseRequest::UpdateAssetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssetResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetRequestPrivate
 * \brief The UpdateAssetRequestPrivate class provides private implementation for UpdateAssetRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateAssetRequestPrivate::UpdateAssetRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssetRequest
 * class' copy constructor.
 */
UpdateAssetRequestPrivate::UpdateAssetRequestPrivate(
    const UpdateAssetRequestPrivate &other, UpdateAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
