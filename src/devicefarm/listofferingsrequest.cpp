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

#include "listofferingsrequest.h"
#include "listofferingsrequest_p.h"
#include "listofferingsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingsRequest
 * \brief The ListOfferingsRequest class provides an interface for DeviceFarm ListOfferings requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::listOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingsRequest::ListOfferingsRequest(const ListOfferingsRequest &other)
    : DeviceFarmRequest(new ListOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingsRequest object.
 */
ListOfferingsRequest::ListOfferingsRequest()
    : DeviceFarmRequest(new ListOfferingsRequestPrivate(DeviceFarmRequest::ListOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingsRequestPrivate
 * \brief The ListOfferingsRequestPrivate class provides private implementation for ListOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingsRequest
 * class' copy constructor.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const ListOfferingsRequestPrivate &other, ListOfferingsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
