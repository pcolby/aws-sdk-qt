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

#include "deletefoldercontentsrequest.h"
#include "deletefoldercontentsrequest_p.h"
#include "deletefoldercontentsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteFolderContentsRequest
 *
 * @brief  Implements WorkDocs DeleteFolderContents requests.
 *
 * @see    WorkDocsClient::deleteFolderContents
 */

/**
 * @brief  Constructs a new DeleteFolderContentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFolderContentsRequest::DeleteFolderContentsRequest(const DeleteFolderContentsRequest &other)
    : WorkDocsRequest(new DeleteFolderContentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFolderContentsRequest object.
 */
DeleteFolderContentsRequest::DeleteFolderContentsRequest()
    : WorkDocsRequest(new DeleteFolderContentsRequestPrivate(WorkDocsRequest::DeleteFolderContentsAction, this))
{

}

bool DeleteFolderContentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFolderContentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFolderContentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeleteFolderContentsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFolderContentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFolderContentsRequestPrivate
 *
 * @brief  Private implementation for DeleteFolderContentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFolderContentsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeleteFolderContentsRequest instance.
 */
DeleteFolderContentsRequestPrivate::DeleteFolderContentsRequestPrivate(
    const WorkDocsRequest::Action action, DeleteFolderContentsRequest * const q)
    : DeleteFolderContentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFolderContentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFolderContentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFolderContentsRequest instance.
 */
DeleteFolderContentsRequestPrivate::DeleteFolderContentsRequestPrivate(
    const DeleteFolderContentsRequestPrivate &other, DeleteFolderContentsRequest * const q)
    : DeleteFolderContentsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
