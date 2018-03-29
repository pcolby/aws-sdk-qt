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

#include "deleteconditionalforwarderrequest.h"
#include "deleteconditionalforwarderrequest_p.h"
#include "deleteconditionalforwarderresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  DeleteConditionalForwarderRequest
 *
 * @brief  Implements DirectoryService DeleteConditionalForwarder requests.
 *
 * @see    DirectoryServiceClient::deleteConditionalForwarder
 */

/**
 * @brief  Constructs a new DeleteConditionalForwarderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConditionalForwarderRequest::DeleteConditionalForwarderRequest(const DeleteConditionalForwarderRequest &other)
    : DirectoryServiceRequest(new DeleteConditionalForwarderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConditionalForwarderRequest object.
 */
DeleteConditionalForwarderRequest::DeleteConditionalForwarderRequest()
    : DirectoryServiceRequest(new DeleteConditionalForwarderRequestPrivate(DirectoryServiceRequest::DeleteConditionalForwarderAction, this))
{

}

bool DeleteConditionalForwarderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConditionalForwarderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConditionalForwarderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * DeleteConditionalForwarderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConditionalForwarderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConditionalForwarderRequestPrivate
 *
 * @brief  Private implementation for DeleteConditionalForwarderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConditionalForwarderRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DeleteConditionalForwarderRequest instance.
 */
DeleteConditionalForwarderRequestPrivate::DeleteConditionalForwarderRequestPrivate(
    const DirectoryServiceRequest::Action action, DeleteConditionalForwarderRequest * const q)
    : DeleteConditionalForwarderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConditionalForwarderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConditionalForwarderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConditionalForwarderRequest instance.
 */
DeleteConditionalForwarderRequestPrivate::DeleteConditionalForwarderRequestPrivate(
    const DeleteConditionalForwarderRequestPrivate &other, DeleteConditionalForwarderRequest * const q)
    : DeleteConditionalForwarderPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
