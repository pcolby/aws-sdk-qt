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

#include "createcustommetadatarequest.h"
#include "createcustommetadatarequest_p.h"
#include "createcustommetadataresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  CreateCustomMetadataRequest
 *
 * @brief  Implements WorkDocs CreateCustomMetadata requests.
 *
 * @see    WorkDocsClient::createCustomMetadata
 */

/**
 * @brief  Constructs a new CreateCustomMetadataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCustomMetadataRequest::CreateCustomMetadataRequest(const CreateCustomMetadataRequest &other)
    : WorkDocsRequest(new CreateCustomMetadataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCustomMetadataRequest object.
 */
CreateCustomMetadataRequest::CreateCustomMetadataRequest()
    : WorkDocsRequest(new CreateCustomMetadataRequestPrivate(WorkDocsRequest::CreateCustomMetadataAction, this))
{

}

bool CreateCustomMetadataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCustomMetadataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCustomMetadataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * CreateCustomMetadataRequest::response(QNetworkReply * const reply) const
{
    return new CreateCustomMetadataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCustomMetadataRequestPrivate
 *
 * @brief  Private implementation for CreateCustomMetadataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomMetadataRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public CreateCustomMetadataRequest instance.
 */
CreateCustomMetadataRequestPrivate::CreateCustomMetadataRequestPrivate(
    const WorkDocsRequest::Action action, CreateCustomMetadataRequest * const q)
    : CreateCustomMetadataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomMetadataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCustomMetadataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCustomMetadataRequest instance.
 */
CreateCustomMetadataRequestPrivate::CreateCustomMetadataRequestPrivate(
    const CreateCustomMetadataRequestPrivate &other, CreateCustomMetadataRequest * const q)
    : CreateCustomMetadataPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
