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

#include "updateassetpropertyrequest.h"
#include "updateassetpropertyrequest_p.h"
#include "updateassetpropertyresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetPropertyRequest
 * \brief The UpdateAssetPropertyRequest class provides an interface for IoTSiteWise UpdateAssetProperty requests.
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
 * \sa IoTSiteWiseClient::updateAssetProperty
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssetPropertyRequest::UpdateAssetPropertyRequest(const UpdateAssetPropertyRequest &other)
    : IoTSiteWiseRequest(new UpdateAssetPropertyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssetPropertyRequest object.
 */
UpdateAssetPropertyRequest::UpdateAssetPropertyRequest()
    : IoTSiteWiseRequest(new UpdateAssetPropertyRequestPrivate(IoTSiteWiseRequest::UpdateAssetPropertyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssetPropertyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssetPropertyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssetPropertyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssetPropertyResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetPropertyRequestPrivate
 * \brief The UpdateAssetPropertyRequestPrivate class provides private implementation for UpdateAssetPropertyRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetPropertyRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateAssetPropertyRequestPrivate::UpdateAssetPropertyRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssetPropertyRequest
 * class' copy constructor.
 */
UpdateAssetPropertyRequestPrivate::UpdateAssetPropertyRequestPrivate(
    const UpdateAssetPropertyRequestPrivate &other, UpdateAssetPropertyRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
