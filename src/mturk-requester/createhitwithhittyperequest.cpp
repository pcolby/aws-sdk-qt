/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createhitwithhittyperequest.h"
#include "createhitwithhittyperequest_p.h"
#include "createhitwithhittyperesponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  CreateHITWithHITTypeRequest
 *
 * @brief  Implements MTurk CreateHITWithHITType requests.
 *
 * @see    MTurkClient::createHITWithHITType
 */

/**
 * @brief  Constructs a new CreateHITWithHITTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest(const CreateHITWithHITTypeRequest &other)
    : MTurkRequest(new CreateHITWithHITTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHITWithHITTypeRequest object.
 */
CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest()
    : MTurkRequest(new CreateHITWithHITTypeRequestPrivate(MTurkRequest::CreateHITWithHITTypeAction, this))
{

}

bool CreateHITWithHITTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHITWithHITTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHITWithHITTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * CreateHITWithHITTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITWithHITTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHITWithHITTypeRequestPrivate
 *
 * @brief  Private implementation for CreateHITWithHITTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHITWithHITTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public CreateHITWithHITTypeRequest instance.
 */
CreateHITWithHITTypeRequestPrivate::CreateHITWithHITTypeRequestPrivate(
    const MTurkRequest::Action action, CreateHITWithHITTypeRequest * const q)
    : CreateHITWithHITTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHITWithHITTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHITWithHITTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHITWithHITTypeRequest instance.
 */
CreateHITWithHITTypeRequestPrivate::CreateHITWithHITTypeRequestPrivate(
    const CreateHITWithHITTypeRequestPrivate &other, CreateHITWithHITTypeRequest * const q)
    : CreateHITWithHITTypePrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
