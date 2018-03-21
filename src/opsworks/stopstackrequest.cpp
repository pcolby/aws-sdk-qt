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

#include "stopstackrequest.h"
#include "stopstackrequest_p.h"
#include "stopstackresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  StopStackRequest
 *
 * @brief  Implements OpsWorks StopStack requests.
 *
 * @see    OpsWorksClient::stopStack
 */

/**
 * @brief  Constructs a new StopStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopStackResponse::StopStackResponse(

/**
 * @brief  Constructs a new StopStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopStackRequest::StopStackRequest(const StopStackRequest &other)
    : OpsWorksRequest(new StopStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopStackRequest object.
 */
StopStackRequest::StopStackRequest()
    : OpsWorksRequest(new StopStackRequestPrivate(OpsWorksRequest::StopStackAction, this))
{

}

bool StopStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopStackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * StopStackRequest::response(QNetworkReply * const reply) const
{
    return new StopStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopStackRequestPrivate
 *
 * @brief  Private implementation for StopStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopStackRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public StopStackRequest instance.
 */
StopStackRequestPrivate::StopStackRequestPrivate(
    const OpsWorksRequest::Action action, StopStackRequest * const q)
    : StopStackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopStackRequest instance.
 */
StopStackRequestPrivate::StopStackRequestPrivate(
    const StopStackRequestPrivate &other, StopStackRequest * const q)
    : StopStackPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
