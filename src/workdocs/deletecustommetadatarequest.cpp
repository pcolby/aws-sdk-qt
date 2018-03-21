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

#include "deletecustommetadatarequest.h"
#include "deletecustommetadatarequest_p.h"
#include "deletecustommetadataresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteCustomMetadataRequest
 *
 * @brief  Implements WorkDocs DeleteCustomMetadata requests.
 *
 * @see    WorkDocsClient::deleteCustomMetadata
 */

/**
 * @brief  Constructs a new DeleteCustomMetadataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCustomMetadataResponse::DeleteCustomMetadataResponse(

/**
 * @brief  Constructs a new DeleteCustomMetadataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCustomMetadataRequest::DeleteCustomMetadataRequest(const DeleteCustomMetadataRequest &other)
    : WorkDocsRequest(new DeleteCustomMetadataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCustomMetadataRequest object.
 */
DeleteCustomMetadataRequest::DeleteCustomMetadataRequest()
    : WorkDocsRequest(new DeleteCustomMetadataRequestPrivate(WorkDocsRequest::DeleteCustomMetadataAction, this))
{

}

bool DeleteCustomMetadataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCustomMetadataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCustomMetadataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeleteCustomMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomMetadataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCustomMetadataRequestPrivate
 *
 * @brief  Private implementation for DeleteCustomMetadataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomMetadataRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeleteCustomMetadataRequest instance.
 */
DeleteCustomMetadataRequestPrivate::DeleteCustomMetadataRequestPrivate(
    const WorkDocsRequest::Action action, DeleteCustomMetadataRequest * const q)
    : DeleteCustomMetadataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomMetadataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomMetadataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCustomMetadataRequest instance.
 */
DeleteCustomMetadataRequestPrivate::DeleteCustomMetadataRequestPrivate(
    const DeleteCustomMetadataRequestPrivate &other, DeleteCustomMetadataRequest * const q)
    : DeleteCustomMetadataPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
