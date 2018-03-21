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

#include "attachobjectrequest.h"
#include "attachobjectrequest_p.h"
#include "attachobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  AttachObjectRequest
 *
 * @brief  Implements CloudDirectory AttachObject requests.
 *
 * @see    CloudDirectoryClient::attachObject
 */

/**
 * @brief  Constructs a new AttachObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachObjectResponse::AttachObjectResponse(

/**
 * @brief  Constructs a new AttachObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachObjectRequest::AttachObjectRequest(const AttachObjectRequest &other)
    : CloudDirectoryRequest(new AttachObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachObjectRequest object.
 */
AttachObjectRequest::AttachObjectRequest()
    : CloudDirectoryRequest(new AttachObjectRequestPrivate(CloudDirectoryRequest::AttachObjectAction, this))
{

}

bool AttachObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * AttachObjectRequest::response(QNetworkReply * const reply) const
{
    return new AttachObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachObjectRequestPrivate
 *
 * @brief  Private implementation for AttachObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public AttachObjectRequest instance.
 */
AttachObjectRequestPrivate::AttachObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachObjectRequest * const q)
    : AttachObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachObjectRequest instance.
 */
AttachObjectRequestPrivate::AttachObjectRequestPrivate(
    const AttachObjectRequestPrivate &other, AttachObjectRequest * const q)
    : AttachObjectPrivate(other, q)
{

}
