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

#include "createcontactrequest.h"
#include "createcontactrequest_p.h"
#include "createcontactresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  CreateContactRequest
 *
 * @brief  Implements AlexaForBusiness CreateContact requests.
 *
 * @see    AlexaForBusinessClient::createContact
 */

/**
 * @brief  Constructs a new CreateContactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateContactRequest::CreateContactRequest(const CreateContactRequest &other)
    : AlexaForBusinessRequest(new CreateContactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateContactRequest object.
 */
CreateContactRequest::CreateContactRequest()
    : AlexaForBusinessRequest(new CreateContactRequestPrivate(AlexaForBusinessRequest::CreateContactAction, this))
{

}

bool CreateContactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateContactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateContactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContactRequest::response(QNetworkReply * const reply) const
{
    return new CreateContactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateContactRequestPrivate
 *
 * @brief  Private implementation for CreateContactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateContactRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public CreateContactRequest instance.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateContactRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateContactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateContactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateContactRequest instance.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const CreateContactRequestPrivate &other, CreateContactRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
