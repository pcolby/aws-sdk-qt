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

#include "updateconditionalforwarderrequest.h"
#include "updateconditionalforwarderrequest_p.h"
#include "updateconditionalforwarderresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  UpdateConditionalForwarderRequest
 *
 * @brief  Implements DirectoryService UpdateConditionalForwarder requests.
 *
 * @see    DirectoryServiceClient::updateConditionalForwarder
 */

/**
 * @brief  Constructs a new UpdateConditionalForwarderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConditionalForwarderRequest::UpdateConditionalForwarderRequest(const UpdateConditionalForwarderRequest &other)
    : DirectoryServiceRequest(new UpdateConditionalForwarderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConditionalForwarderRequest object.
 */
UpdateConditionalForwarderRequest::UpdateConditionalForwarderRequest()
    : DirectoryServiceRequest(new UpdateConditionalForwarderRequestPrivate(DirectoryServiceRequest::UpdateConditionalForwarderAction, this))
{

}

bool UpdateConditionalForwarderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConditionalForwarderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConditionalForwarderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * UpdateConditionalForwarderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConditionalForwarderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConditionalForwarderRequestPrivate
 *
 * @brief  Private implementation for UpdateConditionalForwarderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConditionalForwarderRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public UpdateConditionalForwarderRequest instance.
 */
UpdateConditionalForwarderRequestPrivate::UpdateConditionalForwarderRequestPrivate(
    const DirectoryServiceRequest::Action action, UpdateConditionalForwarderRequest * const q)
    : UpdateConditionalForwarderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConditionalForwarderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConditionalForwarderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConditionalForwarderRequest instance.
 */
UpdateConditionalForwarderRequestPrivate::UpdateConditionalForwarderRequestPrivate(
    const UpdateConditionalForwarderRequestPrivate &other, UpdateConditionalForwarderRequest * const q)
    : UpdateConditionalForwarderPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
