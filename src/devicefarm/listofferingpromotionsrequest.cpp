/*
    Copyright 2013-2020 Paul Colby

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

#include "listofferingpromotionsrequest.h"
#include "listofferingpromotionsrequest_p.h"
#include "listofferingpromotionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsRequest
 * \brief The ListOfferingPromotionsRequest class provides an interface for DeviceFarm ListOfferingPromotions requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listOfferingPromotions
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingPromotionsRequest::ListOfferingPromotionsRequest(const ListOfferingPromotionsRequest &other)
    : DeviceFarmRequest(new ListOfferingPromotionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingPromotionsRequest object.
 */
ListOfferingPromotionsRequest::ListOfferingPromotionsRequest()
    : DeviceFarmRequest(new ListOfferingPromotionsRequestPrivate(DeviceFarmRequest::ListOfferingPromotionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOfferingPromotionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOfferingPromotionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingPromotionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingPromotionsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsRequestPrivate
 * \brief The ListOfferingPromotionsRequestPrivate class provides private implementation for ListOfferingPromotionsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingPromotionsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListOfferingPromotionsRequestPrivate::ListOfferingPromotionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingPromotionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingPromotionsRequest
 * class' copy constructor.
 */
ListOfferingPromotionsRequestPrivate::ListOfferingPromotionsRequestPrivate(
    const ListOfferingPromotionsRequestPrivate &other, ListOfferingPromotionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
