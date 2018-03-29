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

#include "getaddressbookrequest.h"
#include "getaddressbookrequest_p.h"
#include "getaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  GetAddressBookRequest
 *
 * @brief  Implements AlexaForBusiness GetAddressBook requests.
 *
 * @see    AlexaForBusinessClient::getAddressBook
 */

/**
 * @brief  Constructs a new GetAddressBookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAddressBookRequest::GetAddressBookRequest(const GetAddressBookRequest &other)
    : AlexaForBusinessRequest(new GetAddressBookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAddressBookRequest object.
 */
GetAddressBookRequest::GetAddressBookRequest()
    : AlexaForBusinessRequest(new GetAddressBookRequestPrivate(AlexaForBusinessRequest::GetAddressBookAction, this))
{

}

bool GetAddressBookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAddressBookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAddressBookResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new GetAddressBookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAddressBookRequestPrivate
 *
 * @brief  Private implementation for GetAddressBookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAddressBookRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public GetAddressBookRequest instance.
 */
GetAddressBookRequestPrivate::GetAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAddressBookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAddressBookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAddressBookRequest instance.
 */
GetAddressBookRequestPrivate::GetAddressBookRequestPrivate(
    const GetAddressBookRequestPrivate &other, GetAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
