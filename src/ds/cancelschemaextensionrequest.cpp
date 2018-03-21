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

#include "cancelschemaextensionrequest.h"
#include "cancelschemaextensionrequest_p.h"
#include "cancelschemaextensionresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  CancelSchemaExtensionRequest
 *
 * @brief  Implements DirectoryService CancelSchemaExtension requests.
 *
 * @see    DirectoryServiceClient::cancelSchemaExtension
 */

/**
 * @brief  Constructs a new CancelSchemaExtensionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelSchemaExtensionRequest::CancelSchemaExtensionRequest(const CancelSchemaExtensionRequest &other)
    : DirectoryServiceRequest(new CancelSchemaExtensionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelSchemaExtensionRequest object.
 */
CancelSchemaExtensionRequest::CancelSchemaExtensionRequest()
    : DirectoryServiceRequest(new CancelSchemaExtensionRequestPrivate(DirectoryServiceRequest::CancelSchemaExtensionAction, this))
{

}

bool CancelSchemaExtensionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelSchemaExtensionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelSchemaExtensionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * CancelSchemaExtensionRequest::response(QNetworkReply * const reply) const
{
    return new CancelSchemaExtensionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelSchemaExtensionRequestPrivate
 *
 * @brief  Private implementation for CancelSchemaExtensionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelSchemaExtensionRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public CancelSchemaExtensionRequest instance.
 */
CancelSchemaExtensionRequestPrivate::CancelSchemaExtensionRequestPrivate(
    const DirectoryServiceRequest::Action action, CancelSchemaExtensionRequest * const q)
    : CancelSchemaExtensionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelSchemaExtensionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelSchemaExtensionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelSchemaExtensionRequest instance.
 */
CancelSchemaExtensionRequestPrivate::CancelSchemaExtensionRequestPrivate(
    const CancelSchemaExtensionRequestPrivate &other, CancelSchemaExtensionRequest * const q)
    : CancelSchemaExtensionPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
