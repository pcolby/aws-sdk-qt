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

#include "getprojectrequest.h"
#include "getprojectrequest_p.h"
#include "getprojectresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  GetProjectRequest
 *
 * @brief  Implements DeviceFarm GetProject requests.
 *
 * @see    DeviceFarmClient::getProject
 */

/**
 * @brief  Constructs a new GetProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetProjectRequest::GetProjectRequest(const GetProjectRequest &other)
    : DeviceFarmRequest(new GetProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetProjectRequest object.
 */
GetProjectRequest::GetProjectRequest()
    : DeviceFarmRequest(new GetProjectRequestPrivate(DeviceFarmRequest::GetProjectAction, this))
{

}

bool GetProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProjectRequest::response(QNetworkReply * const reply) const
{
    return new GetProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetProjectRequestPrivate
 *
 * @brief  Private implementation for GetProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetProjectRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetProjectRequest instance.
 */
GetProjectRequestPrivate::GetProjectRequestPrivate(
    const DeviceFarmRequest::Action action, GetProjectRequest * const q)
    : GetProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetProjectRequest instance.
 */
GetProjectRequestPrivate::GetProjectRequestPrivate(
    const GetProjectRequestPrivate &other, GetProjectRequest * const q)
    : GetProjectPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
