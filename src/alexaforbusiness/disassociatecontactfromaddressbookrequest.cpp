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

#include "disassociatecontactfromaddressbookrequest.h"
#include "disassociatecontactfromaddressbookrequest_p.h"
#include "disassociatecontactfromaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  DisassociateContactFromAddressBookRequest
 *
 * @brief  Implements AlexaForBusiness DisassociateContactFromAddressBook requests.
 *
 * @see    AlexaForBusinessClient::disassociateContactFromAddressBook
 */

/**
 * @brief  Constructs a new DisassociateContactFromAddressBookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateContactFromAddressBookRequest::DisassociateContactFromAddressBookRequest(const DisassociateContactFromAddressBookRequest &other)
    : AlexaForBusinessRequest(new DisassociateContactFromAddressBookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateContactFromAddressBookRequest object.
 */
DisassociateContactFromAddressBookRequest::DisassociateContactFromAddressBookRequest()
    : AlexaForBusinessRequest(new DisassociateContactFromAddressBookRequestPrivate(AlexaForBusinessRequest::DisassociateContactFromAddressBookAction, this))
{

}

bool DisassociateContactFromAddressBookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateContactFromAddressBookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateContactFromAddressBookResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateContactFromAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateContactFromAddressBookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateContactFromAddressBookRequestPrivate
 *
 * @brief  Private implementation for DisassociateContactFromAddressBookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateContactFromAddressBookRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public DisassociateContactFromAddressBookRequest instance.
 */
DisassociateContactFromAddressBookRequestPrivate::DisassociateContactFromAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateContactFromAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateContactFromAddressBookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateContactFromAddressBookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateContactFromAddressBookRequest instance.
 */
DisassociateContactFromAddressBookRequestPrivate::DisassociateContactFromAddressBookRequestPrivate(
    const DisassociateContactFromAddressBookRequestPrivate &other, DisassociateContactFromAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
