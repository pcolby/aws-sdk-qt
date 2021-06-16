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

#include "listprojectassetsrequest.h"
#include "listprojectassetsrequest_p.h"
#include "listprojectassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListProjectAssetsRequest
 * \brief The ListProjectAssetsRequest class provides an interface for IoTSiteWise ListProjectAssets requests.
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
 * \sa IoTSiteWiseClient::listProjectAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectAssetsRequest::ListProjectAssetsRequest(const ListProjectAssetsRequest &other)
    : IoTSiteWiseRequest(new ListProjectAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectAssetsRequest object.
 */
ListProjectAssetsRequest::ListProjectAssetsRequest()
    : IoTSiteWiseRequest(new ListProjectAssetsRequestPrivate(IoTSiteWiseRequest::ListProjectAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProjectAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProjectAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProjectAssetsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListProjectAssetsRequestPrivate
 * \brief The ListProjectAssetsRequestPrivate class provides private implementation for ListProjectAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListProjectAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListProjectAssetsRequestPrivate::ListProjectAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListProjectAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProjectAssetsRequest
 * class' copy constructor.
 */
ListProjectAssetsRequestPrivate::ListProjectAssetsRequestPrivate(
    const ListProjectAssetsRequestPrivate &other, ListProjectAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
