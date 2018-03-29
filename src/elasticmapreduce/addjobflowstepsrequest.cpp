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

#include "addjobflowstepsrequest.h"
#include "addjobflowstepsrequest_p.h"
#include "addjobflowstepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  AddJobFlowStepsRequest
 *
 * @brief  Implements EMR AddJobFlowSteps requests.
 *
 * @see    EMRClient::addJobFlowSteps
 */

/**
 * @brief  Constructs a new AddJobFlowStepsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddJobFlowStepsRequest::AddJobFlowStepsRequest(const AddJobFlowStepsRequest &other)
    : EMRRequest(new AddJobFlowStepsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddJobFlowStepsRequest object.
 */
AddJobFlowStepsRequest::AddJobFlowStepsRequest()
    : EMRRequest(new AddJobFlowStepsRequestPrivate(EMRRequest::AddJobFlowStepsAction, this))
{

}

bool AddJobFlowStepsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddJobFlowStepsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddJobFlowStepsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * AddJobFlowStepsRequest::response(QNetworkReply * const reply) const
{
    return new AddJobFlowStepsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddJobFlowStepsRequestPrivate
 *
 * @brief  Private implementation for AddJobFlowStepsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddJobFlowStepsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public AddJobFlowStepsRequest instance.
 */
AddJobFlowStepsRequestPrivate::AddJobFlowStepsRequestPrivate(
    const EMRRequest::Action action, AddJobFlowStepsRequest * const q)
    : AddJobFlowStepsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddJobFlowStepsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddJobFlowStepsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddJobFlowStepsRequest instance.
 */
AddJobFlowStepsRequestPrivate::AddJobFlowStepsRequestPrivate(
    const AddJobFlowStepsRequestPrivate &other, AddJobFlowStepsRequest * const q)
    : AddJobFlowStepsPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
