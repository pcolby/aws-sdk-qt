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

#include "associatecontactwithaddressbookrequest.h"
#include "associatecontactwithaddressbookrequest_p.h"
#include "associatecontactwithaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  AssociateContactWithAddressBookRequest
 *
 * @brief  Implements AlexaForBusiness AssociateContactWithAddressBook requests.
 *
 * @see    AlexaForBusinessClient::associateContactWithAddressBook
 */

/**
 * @brief  Constructs a new AssociateContactWithAddressBookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateContactWithAddressBookRequest::AssociateContactWithAddressBookRequest(const AssociateContactWithAddressBookRequest &other)
    : AlexaForBusinessRequest(new AssociateContactWithAddressBookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateContactWithAddressBookRequest object.
 */
AssociateContactWithAddressBookRequest::AssociateContactWithAddressBookRequest()
    : AlexaForBusinessRequest(new AssociateContactWithAddressBookRequestPrivate(AlexaForBusinessRequest::AssociateContactWithAddressBookAction, this))
{

}

bool AssociateContactWithAddressBookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateContactWithAddressBookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateContactWithAddressBookResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateContactWithAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new AssociateContactWithAddressBookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateContactWithAddressBookRequestPrivate
 *
 * @brief  Private implementation for AssociateContactWithAddressBookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateContactWithAddressBookRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public AssociateContactWithAddressBookRequest instance.
 */
AssociateContactWithAddressBookRequestPrivate::AssociateContactWithAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateContactWithAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateContactWithAddressBookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateContactWithAddressBookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateContactWithAddressBookRequest instance.
 */
AssociateContactWithAddressBookRequestPrivate::AssociateContactWithAddressBookRequestPrivate(
    const AssociateContactWithAddressBookRequestPrivate &other, AssociateContactWithAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
