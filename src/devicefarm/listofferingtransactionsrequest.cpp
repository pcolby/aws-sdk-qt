/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
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
 *
 * Constructs a ListOfferingTransactionsRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
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
