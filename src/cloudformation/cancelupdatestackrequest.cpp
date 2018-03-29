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

#include "cancelupdatestackrequest.h"
#include "cancelupdatestackrequest_p.h"
#include "cancelupdatestackresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  CancelUpdateStackRequest
 *
 * @brief  Implements CloudFormation CancelUpdateStack requests.
 *
 * @see    CloudFormationClient::cancelUpdateStack
 */

/**
 * @brief  Constructs a new CancelUpdateStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelUpdateStackRequest::CancelUpdateStackRequest(const CancelUpdateStackRequest &other)
    : CloudFormationRequest(new CancelUpdateStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelUpdateStackRequest object.
 */
CancelUpdateStackRequest::CancelUpdateStackRequest()
    : CloudFormationRequest(new CancelUpdateStackRequestPrivate(CloudFormationRequest::CancelUpdateStackAction, this))
{

}

bool CancelUpdateStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelUpdateStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelUpdateStackResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelUpdateStackRequest::response(QNetworkReply * const reply) const
{
    return new CancelUpdateStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelUpdateStackRequestPrivate
 *
 * @brief  Private implementation for CancelUpdateStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelUpdateStackRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public CancelUpdateStackRequest instance.
 */
CancelUpdateStackRequestPrivate::CancelUpdateStackRequestPrivate(
    const CloudFormationRequest::Action action, CancelUpdateStackRequest * const q)
    : CancelUpdateStackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelUpdateStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelUpdateStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelUpdateStackRequest instance.
 */
CancelUpdateStackRequestPrivate::CancelUpdateStackRequestPrivate(
    const CancelUpdateStackRequestPrivate &other, CancelUpdateStackRequest * const q)
    : CancelUpdateStackPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
