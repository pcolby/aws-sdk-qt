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

#include "listassociatedassetsrequest.h"
#include "listassociatedassetsrequest_p.h"
#include "listassociatedassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssociatedAssetsRequest
 * \brief The ListAssociatedAssetsRequest class provides an interface for IoTSiteWise ListAssociatedAssets requests.
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
 * \sa IoTSiteWiseClient::listAssociatedAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedAssetsRequest::ListAssociatedAssetsRequest(const ListAssociatedAssetsRequest &other)
    : IoTSiteWiseRequest(new ListAssociatedAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedAssetsRequest object.
 */
ListAssociatedAssetsRequest::ListAssociatedAssetsRequest()
    : IoTSiteWiseRequest(new ListAssociatedAssetsRequestPrivate(IoTSiteWiseRequest::ListAssociatedAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedAssetsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListAssociatedAssetsRequestPrivate
 * \brief The ListAssociatedAssetsRequestPrivate class provides private implementation for ListAssociatedAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssociatedAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListAssociatedAssetsRequestPrivate::ListAssociatedAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListAssociatedAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedAssetsRequest
 * class' copy constructor.
 */
ListAssociatedAssetsRequestPrivate::ListAssociatedAssetsRequestPrivate(
    const ListAssociatedAssetsRequestPrivate &other, ListAssociatedAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
