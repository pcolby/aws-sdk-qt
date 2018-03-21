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

#include "detachobjectrequest.h"
#include "detachobjectrequest_p.h"
#include "detachobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DetachObjectRequest
 *
 * @brief  Implements CloudDirectory DetachObject requests.
 *
 * @see    CloudDirectoryClient::detachObject
 */

/**
 * @brief  Constructs a new DetachObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachObjectResponse::DetachObjectResponse(

/**
 * @brief  Constructs a new DetachObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachObjectRequest::DetachObjectRequest(const DetachObjectRequest &other)
    : CloudDirectoryRequest(new DetachObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachObjectRequest object.
 */
DetachObjectRequest::DetachObjectRequest()
    : CloudDirectoryRequest(new DetachObjectRequestPrivate(CloudDirectoryRequest::DetachObjectAction, this))
{

}

bool DetachObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * DetachObjectRequest::response(QNetworkReply * const reply) const
{
    return new DetachObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachObjectRequestPrivate
 *
 * @brief  Private implementation for DetachObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DetachObjectRequest instance.
 */
DetachObjectRequestPrivate::DetachObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, DetachObjectRequest * const q)
    : DetachObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachObjectRequest instance.
 */
DetachObjectRequestPrivate::DetachObjectRequestPrivate(
    const DetachObjectRequestPrivate &other, DetachObjectRequest * const q)
    : DetachObjectPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
