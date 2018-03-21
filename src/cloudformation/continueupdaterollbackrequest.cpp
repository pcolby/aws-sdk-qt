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

#include "continueupdaterollbackrequest.h"
#include "continueupdaterollbackrequest_p.h"
#include "continueupdaterollbackresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  ContinueUpdateRollbackRequest
 *
 * @brief  Implements CloudFormation ContinueUpdateRollback requests.
 *
 * @see    CloudFormationClient::continueUpdateRollback
 */

/**
 * @brief  Constructs a new ContinueUpdateRollbackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ContinueUpdateRollbackResponse::ContinueUpdateRollbackResponse(

/**
 * @brief  Constructs a new ContinueUpdateRollbackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ContinueUpdateRollbackRequest::ContinueUpdateRollbackRequest(const ContinueUpdateRollbackRequest &other)
    : CloudFormationRequest(new ContinueUpdateRollbackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ContinueUpdateRollbackRequest object.
 */
ContinueUpdateRollbackRequest::ContinueUpdateRollbackRequest()
    : CloudFormationRequest(new ContinueUpdateRollbackRequestPrivate(CloudFormationRequest::ContinueUpdateRollbackAction, this))
{

}

bool ContinueUpdateRollbackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ContinueUpdateRollbackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ContinueUpdateRollbackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ContinueUpdateRollbackRequest::response(QNetworkReply * const reply) const
{
    return new ContinueUpdateRollbackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ContinueUpdateRollbackRequestPrivate
 *
 * @brief  Private implementation for ContinueUpdateRollbackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ContinueUpdateRollbackRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ContinueUpdateRollbackRequest instance.
 */
ContinueUpdateRollbackRequestPrivate::ContinueUpdateRollbackRequestPrivate(
    const CloudFormationRequest::Action action, ContinueUpdateRollbackRequest * const q)
    : ContinueUpdateRollbackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ContinueUpdateRollbackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ContinueUpdateRollbackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ContinueUpdateRollbackRequest instance.
 */
ContinueUpdateRollbackRequestPrivate::ContinueUpdateRollbackRequestPrivate(
    const ContinueUpdateRollbackRequestPrivate &other, ContinueUpdateRollbackRequest * const q)
    : ContinueUpdateRollbackPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
