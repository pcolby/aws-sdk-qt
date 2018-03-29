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

#include "deletedirectoryrequest.h"
#include "deletedirectoryrequest_p.h"
#include "deletedirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DeleteDirectoryRequest
 *
 * @brief  Implements CloudDirectory DeleteDirectory requests.
 *
 * @see    CloudDirectoryClient::deleteDirectory
 */

/**
 * @brief  Constructs a new DeleteDirectoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDirectoryRequest::DeleteDirectoryRequest(const DeleteDirectoryRequest &other)
    : CloudDirectoryRequest(new DeleteDirectoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDirectoryRequest object.
 */
DeleteDirectoryRequest::DeleteDirectoryRequest()
    : CloudDirectoryRequest(new DeleteDirectoryRequestPrivate(CloudDirectoryRequest::DeleteDirectoryAction, this))
{

}

bool DeleteDirectoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDirectoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDirectoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDirectoryRequestPrivate
 *
 * @brief  Private implementation for DeleteDirectoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectoryRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DeleteDirectoryRequest instance.
 */
DeleteDirectoryRequestPrivate::DeleteDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDirectoryRequest instance.
 */
DeleteDirectoryRequestPrivate::DeleteDirectoryRequestPrivate(
    const DeleteDirectoryRequestPrivate &other, DeleteDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
