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

#include "describeworkspacesconnectionstatusrequest.h"
#include "describeworkspacesconnectionstatusrequest_p.h"
#include "describeworkspacesconnectionstatusresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspacesConnectionStatusRequest
 *
 * @brief  Implements WorkSpaces DescribeWorkspacesConnectionStatus requests.
 *
 * @see    WorkSpacesClient::describeWorkspacesConnectionStatus
 */

/**
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspacesConnectionStatusResponse::DescribeWorkspacesConnectionStatusResponse(

/**
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeWorkspacesConnectionStatusRequest::DescribeWorkspacesConnectionStatusRequest(const DescribeWorkspacesConnectionStatusRequest &other)
    : WorkSpacesRequest(new DescribeWorkspacesConnectionStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusRequest object.
 */
DescribeWorkspacesConnectionStatusRequest::DescribeWorkspacesConnectionStatusRequest()
    : WorkSpacesRequest(new DescribeWorkspacesConnectionStatusRequestPrivate(WorkSpacesRequest::DescribeWorkspacesConnectionStatusAction, this))
{

}

bool DescribeWorkspacesConnectionStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeWorkspacesConnectionStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeWorkspacesConnectionStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * DescribeWorkspacesConnectionStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspacesConnectionStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeWorkspacesConnectionStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeWorkspacesConnectionStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public DescribeWorkspacesConnectionStatusRequest instance.
 */
DescribeWorkspacesConnectionStatusRequestPrivate::DescribeWorkspacesConnectionStatusRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspacesConnectionStatusRequest * const q)
    : DescribeWorkspacesConnectionStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspacesConnectionStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeWorkspacesConnectionStatusRequest instance.
 */
DescribeWorkspacesConnectionStatusRequestPrivate::DescribeWorkspacesConnectionStatusRequestPrivate(
    const DescribeWorkspacesConnectionStatusRequestPrivate &other, DescribeWorkspacesConnectionStatusRequest * const q)
    : DescribeWorkspacesConnectionStatusPrivate(other, q)
{

}
