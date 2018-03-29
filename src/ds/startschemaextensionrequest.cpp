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

#include "startschemaextensionrequest.h"
#include "startschemaextensionrequest_p.h"
#include "startschemaextensionresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  StartSchemaExtensionRequest
 *
 * @brief  Implements DirectoryService StartSchemaExtension requests.
 *
 * @see    DirectoryServiceClient::startSchemaExtension
 */

/**
 * @brief  Constructs a new StartSchemaExtensionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartSchemaExtensionRequest::StartSchemaExtensionRequest(const StartSchemaExtensionRequest &other)
    : DirectoryServiceRequest(new StartSchemaExtensionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartSchemaExtensionRequest object.
 */
StartSchemaExtensionRequest::StartSchemaExtensionRequest()
    : DirectoryServiceRequest(new StartSchemaExtensionRequestPrivate(DirectoryServiceRequest::StartSchemaExtensionAction, this))
{

}

bool StartSchemaExtensionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartSchemaExtensionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartSchemaExtensionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSchemaExtensionRequest::response(QNetworkReply * const reply) const
{
    return new StartSchemaExtensionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartSchemaExtensionRequestPrivate
 *
 * @brief  Private implementation for StartSchemaExtensionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartSchemaExtensionRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public StartSchemaExtensionRequest instance.
 */
StartSchemaExtensionRequestPrivate::StartSchemaExtensionRequestPrivate(
    const DirectoryServiceRequest::Action action, StartSchemaExtensionRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartSchemaExtensionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartSchemaExtensionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartSchemaExtensionRequest instance.
 */
StartSchemaExtensionRequestPrivate::StartSchemaExtensionRequestPrivate(
    const StartSchemaExtensionRequestPrivate &other, StartSchemaExtensionRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
