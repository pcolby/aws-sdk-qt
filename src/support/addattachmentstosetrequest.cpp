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

#include "addattachmentstosetrequest.h"
#include "addattachmentstosetrequest_p.h"
#include "addattachmentstosetresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/**
 * @class  AddAttachmentsToSetRequest
 *
 * @brief  Implements Support AddAttachmentsToSet requests.
 *
 * @see    SupportClient::addAttachmentsToSet
 */

/**
 * @brief  Constructs a new AddAttachmentsToSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddAttachmentsToSetRequest::AddAttachmentsToSetRequest(const AddAttachmentsToSetRequest &other)
    : SupportRequest(new AddAttachmentsToSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddAttachmentsToSetRequest object.
 */
AddAttachmentsToSetRequest::AddAttachmentsToSetRequest()
    : SupportRequest(new AddAttachmentsToSetRequestPrivate(SupportRequest::AddAttachmentsToSetAction, this))
{

}

bool AddAttachmentsToSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddAttachmentsToSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddAttachmentsToSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SupportClient::send
 */
QtAws::Core::AwsAbstractResponse * AddAttachmentsToSetRequest::response(QNetworkReply * const reply) const
{
    return new AddAttachmentsToSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddAttachmentsToSetRequestPrivate
 *
 * @brief  Private implementation for AddAttachmentsToSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddAttachmentsToSetRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public AddAttachmentsToSetRequest instance.
 */
AddAttachmentsToSetRequestPrivate::AddAttachmentsToSetRequestPrivate(
    const SupportRequest::Action action, AddAttachmentsToSetRequest * const q)
    : AddAttachmentsToSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddAttachmentsToSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddAttachmentsToSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddAttachmentsToSetRequest instance.
 */
AddAttachmentsToSetRequestPrivate::AddAttachmentsToSetRequestPrivate(
    const AddAttachmentsToSetRequestPrivate &other, AddAttachmentsToSetRequest * const q)
    : AddAttachmentsToSetPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
