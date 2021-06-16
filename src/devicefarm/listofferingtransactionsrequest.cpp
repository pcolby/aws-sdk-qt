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

#include "listofferingtransactionsrequest.h"
#include "listofferingtransactionsrequest_p.h"
#include "listofferingtransactionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingTransactionsRequest
 * \brief The ListOfferingTransactionsRequest class provides an interface for DeviceFarm ListOfferingTransactions requests.
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
 * \sa DeviceFarmClient::listOfferingTransactions
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingTransactionsRequest::ListOfferingTransactionsRequest(const ListOfferingTransactionsRequest &other)
    : DeviceFarmRequest(new ListOfferingTransactionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingTransactionsRequest object.
 */
ListOfferingTransactionsRequest::ListOfferingTransactionsRequest()
    : DeviceFarmRequest(new ListOfferingTransactionsRequestPrivate(DeviceFarmRequest::ListOfferingTransactionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOfferingTransactionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOfferingTransactionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingTransactionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingTransactionsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingTransactionsRequestPrivate
 * \brief The ListOfferingTransactionsRequestPrivate class provides private implementation for ListOfferingTransactionsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingTransactionsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListOfferingTransactionsRequestPrivate::ListOfferingTransactionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingTransactionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingTransactionsRequest
 * class' copy constructor.
 */
ListOfferingTransactionsRequestPrivate::ListOfferingTransactionsRequestPrivate(
    const ListOfferingTransactionsRequestPrivate &other, ListOfferingTransactionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
