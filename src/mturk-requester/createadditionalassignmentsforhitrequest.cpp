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

#include "createadditionalassignmentsforhitrequest.h"
#include "createadditionalassignmentsforhitrequest_p.h"
#include "createadditionalassignmentsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  CreateAdditionalAssignmentsForHITRequest
 *
 * @brief  Implements MTurk CreateAdditionalAssignmentsForHIT requests.
 *
 * @see    MTurkClient::createAdditionalAssignmentsForHIT
 */

/**
 * @brief  Constructs a new CreateAdditionalAssignmentsForHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest(const CreateAdditionalAssignmentsForHITRequest &other)
    : MTurkRequest(new CreateAdditionalAssignmentsForHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAdditionalAssignmentsForHITRequest object.
 */
CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest()
    : MTurkRequest(new CreateAdditionalAssignmentsForHITRequestPrivate(MTurkRequest::CreateAdditionalAssignmentsForHITAction, this))
{

}

bool CreateAdditionalAssignmentsForHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAdditionalAssignmentsForHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAdditionalAssignmentsForHITResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAdditionalAssignmentsForHITRequest::response(QNetworkReply * const reply) const
{
    return new CreateAdditionalAssignmentsForHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAdditionalAssignmentsForHITRequestPrivate
 *
 * @brief  Private implementation for CreateAdditionalAssignmentsForHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAdditionalAssignmentsForHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public CreateAdditionalAssignmentsForHITRequest instance.
 */
CreateAdditionalAssignmentsForHITRequestPrivate::CreateAdditionalAssignmentsForHITRequestPrivate(
    const MTurkRequest::Action action, CreateAdditionalAssignmentsForHITRequest * const q)
    : CreateAdditionalAssignmentsForHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAdditionalAssignmentsForHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAdditionalAssignmentsForHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAdditionalAssignmentsForHITRequest instance.
 */
CreateAdditionalAssignmentsForHITRequestPrivate::CreateAdditionalAssignmentsForHITRequestPrivate(
    const CreateAdditionalAssignmentsForHITRequestPrivate &other, CreateAdditionalAssignmentsForHITRequest * const q)
    : CreateAdditionalAssignmentsForHITPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
