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

#include "createindexrequest.h"
#include "createindexrequest_p.h"
#include "createindexresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateIndexRequest
 *
 * @brief  Implements CloudDirectory CreateIndex requests.
 *
 * @see    CloudDirectoryClient::createIndex
 */

/**
 * @brief  Constructs a new CreateIndexResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIndexResponse::CreateIndexResponse(

/**
 * @brief  Constructs a new CreateIndexRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateIndexRequest::CreateIndexRequest(const CreateIndexRequest &other)
    : CloudDirectoryRequest(new CreateIndexRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateIndexRequest object.
 */
CreateIndexRequest::CreateIndexRequest()
    : CloudDirectoryRequest(new CreateIndexRequestPrivate(CloudDirectoryRequest::CreateIndexAction, this))
{

}

bool CreateIndexRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateIndexResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateIndexResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * CreateIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreateIndexResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateIndexRequestPrivate
 *
 * @brief  Private implementation for CreateIndexRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIndexRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public CreateIndexRequest instance.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateIndexRequest * const q)
    : CreateIndexPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateIndexRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateIndexRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateIndexRequest instance.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const CreateIndexRequestPrivate &other, CreateIndexRequest * const q)
    : CreateIndexPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
