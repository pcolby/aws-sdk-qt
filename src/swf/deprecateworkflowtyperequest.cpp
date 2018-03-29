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

#include "deprecateworkflowtyperequest.h"
#include "deprecateworkflowtyperequest_p.h"
#include "deprecateworkflowtyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  DeprecateWorkflowTypeRequest
 *
 * @brief  Implements SWF DeprecateWorkflowType requests.
 *
 * @see    SWFClient::deprecateWorkflowType
 */

/**
 * @brief  Constructs a new DeprecateWorkflowTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeprecateWorkflowTypeRequest::DeprecateWorkflowTypeRequest(const DeprecateWorkflowTypeRequest &other)
    : SWFRequest(new DeprecateWorkflowTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeprecateWorkflowTypeRequest object.
 */
DeprecateWorkflowTypeRequest::DeprecateWorkflowTypeRequest()
    : SWFRequest(new DeprecateWorkflowTypeRequestPrivate(SWFRequest::DeprecateWorkflowTypeAction, this))
{

}

bool DeprecateWorkflowTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeprecateWorkflowTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeprecateWorkflowTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * DeprecateWorkflowTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateWorkflowTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeprecateWorkflowTypeRequestPrivate
 *
 * @brief  Private implementation for DeprecateWorkflowTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateWorkflowTypeRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public DeprecateWorkflowTypeRequest instance.
 */
DeprecateWorkflowTypeRequestPrivate::DeprecateWorkflowTypeRequestPrivate(
    const SWFRequest::Action action, DeprecateWorkflowTypeRequest * const q)
    : DeprecateWorkflowTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateWorkflowTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeprecateWorkflowTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeprecateWorkflowTypeRequest instance.
 */
DeprecateWorkflowTypeRequestPrivate::DeprecateWorkflowTypeRequestPrivate(
    const DeprecateWorkflowTypeRequestPrivate &other, DeprecateWorkflowTypeRequest * const q)
    : DeprecateWorkflowTypePrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
