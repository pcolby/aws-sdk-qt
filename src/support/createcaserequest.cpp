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

#include "createcaserequest.h"
#include "createcaserequest_p.h"
#include "createcaseresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  CreateCaseRequest
 *
 * @brief  Implements Support CreateCase requests.
 *
 * @see    SupportClient::createCase
 */

/**
 * @brief  Constructs a new CreateCaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCaseRequest::CreateCaseRequest(const CreateCaseRequest &other)
    : SupportRequest(new CreateCaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCaseRequest object.
 */
CreateCaseRequest::CreateCaseRequest()
    : SupportRequest(new CreateCaseRequestPrivate(SupportRequest::CreateCaseAction, this))
{

}

bool CreateCaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCaseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * CreateCaseRequest::response(QNetworkReply * const reply) const
{
    return new CreateCaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCaseRequestPrivate
 *
 * @brief  Private implementation for CreateCaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCaseRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public CreateCaseRequest instance.
 */
CreateCaseRequestPrivate::CreateCaseRequestPrivate(
    const SupportRequest::Action action, CreateCaseRequest * const q)
    : CreateCasePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCaseRequest instance.
 */
CreateCaseRequestPrivate::CreateCaseRequestPrivate(
    const CreateCaseRequestPrivate &other, CreateCaseRequest * const q)
    : CreateCasePrivate(other, q)
{

}

} // namespace Support
} // namespace AWS
