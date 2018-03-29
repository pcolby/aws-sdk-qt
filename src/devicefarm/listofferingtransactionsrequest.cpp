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

/**
 * @class  ListOfferingTransactionsRequest
 *
 * @brief  Implements DeviceFarm ListOfferingTransactions requests.
 *
 * @see    DeviceFarmClient::listOfferingTransactions
 */

/**
 * @brief  Constructs a new ListOfferingTransactionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOfferingTransactionsRequest::ListOfferingTransactionsRequest(const ListOfferingTransactionsRequest &other)
    : DeviceFarmRequest(new ListOfferingTransactionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOfferingTransactionsRequest object.
 */
ListOfferingTransactionsRequest::ListOfferingTransactionsRequest()
    : DeviceFarmRequest(new ListOfferingTransactionsRequestPrivate(DeviceFarmRequest::ListOfferingTransactionsAction, this))
{

}

bool ListOfferingTransactionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOfferingTransactionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOfferingTransactionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingTransactionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingTransactionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOfferingTransactionsRequestPrivate
 *
 * @brief  Private implementation for ListOfferingTransactionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingTransactionsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListOfferingTransactionsRequest instance.
 */
ListOfferingTransactionsRequestPrivate::ListOfferingTransactionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingTransactionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingTransactionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingTransactionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOfferingTransactionsRequest instance.
 */
ListOfferingTransactionsRequestPrivate::ListOfferingTransactionsRequestPrivate(
    const ListOfferingTransactionsRequestPrivate &other, ListOfferingTransactionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
