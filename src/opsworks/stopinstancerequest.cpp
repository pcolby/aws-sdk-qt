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

#include "stopinstancerequest.h"
#include "stopinstancerequest_p.h"
#include "stopinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  StopInstanceRequest
 *
 * @brief  Implements OpsWorks StopInstance requests.
 *
 * @see    OpsWorksClient::stopInstance
 */

/**
 * @brief  Constructs a new StopInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopInstanceResponse::StopInstanceResponse(

/**
 * @brief  Constructs a new StopInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopInstanceRequest::StopInstanceRequest(const StopInstanceRequest &other)
    : OpsWorksRequest(new StopInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopInstanceRequest object.
 */
StopInstanceRequest::StopInstanceRequest()
    : OpsWorksRequest(new StopInstanceRequestPrivate(OpsWorksRequest::StopInstanceAction, this))
{

}

bool StopInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * StopInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StopInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopInstanceRequestPrivate
 *
 * @brief  Private implementation for StopInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public StopInstanceRequest instance.
 */
StopInstanceRequestPrivate::StopInstanceRequestPrivate(
    const OpsWorksRequest::Action action, StopInstanceRequest * const q)
    : StopInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopInstanceRequest instance.
 */
StopInstanceRequestPrivate::StopInstanceRequestPrivate(
    const StopInstanceRequestPrivate &other, StopInstanceRequest * const q)
    : StopInstancePrivate(other, q)
{

}
