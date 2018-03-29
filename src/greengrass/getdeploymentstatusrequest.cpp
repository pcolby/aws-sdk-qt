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

#include "getdeploymentstatusrequest.h"
#include "getdeploymentstatusrequest_p.h"
#include "getdeploymentstatusresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetDeploymentStatusRequest
 *
 * @brief  Implements Greengrass GetDeploymentStatus requests.
 *
 * @see    GreengrassClient::getDeploymentStatus
 */

/**
 * @brief  Constructs a new GetDeploymentStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeploymentStatusRequest::GetDeploymentStatusRequest(const GetDeploymentStatusRequest &other)
    : GreengrassRequest(new GetDeploymentStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeploymentStatusRequest object.
 */
GetDeploymentStatusRequest::GetDeploymentStatusRequest()
    : GreengrassRequest(new GetDeploymentStatusRequestPrivate(GreengrassRequest::GetDeploymentStatusAction, this))
{

}

bool GetDeploymentStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeploymentStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeploymentStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeploymentStatusRequestPrivate
 *
 * @brief  Private implementation for GetDeploymentStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentStatusRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetDeploymentStatusRequest instance.
 */
GetDeploymentStatusRequestPrivate::GetDeploymentStatusRequestPrivate(
    const GreengrassRequest::Action action, GetDeploymentStatusRequest * const q)
    : GetDeploymentStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeploymentStatusRequest instance.
 */
GetDeploymentStatusRequestPrivate::GetDeploymentStatusRequestPrivate(
    const GetDeploymentStatusRequestPrivate &other, GetDeploymentStatusRequest * const q)
    : GetDeploymentStatusPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
