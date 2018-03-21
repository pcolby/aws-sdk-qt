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

#include "deletefolderrequest.h"
#include "deletefolderrequest_p.h"
#include "deletefolderresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteFolderRequest
 *
 * @brief  Implements WorkDocs DeleteFolder requests.
 *
 * @see    WorkDocsClient::deleteFolder
 */

/**
 * @brief  Constructs a new DeleteFolderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFolderResponse::DeleteFolderResponse(

/**
 * @brief  Constructs a new DeleteFolderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFolderRequest::DeleteFolderRequest(const DeleteFolderRequest &other)
    : WorkDocsRequest(new DeleteFolderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFolderRequest object.
 */
DeleteFolderRequest::DeleteFolderRequest()
    : WorkDocsRequest(new DeleteFolderRequestPrivate(WorkDocsRequest::DeleteFolderAction, this))
{

}

bool DeleteFolderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFolderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFolderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeleteFolderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFolderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFolderRequestPrivate
 *
 * @brief  Private implementation for DeleteFolderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFolderRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeleteFolderRequest instance.
 */
DeleteFolderRequestPrivate::DeleteFolderRequestPrivate(
    const WorkDocsRequest::Action action, DeleteFolderRequest * const q)
    : DeleteFolderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFolderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFolderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFolderRequest instance.
 */
DeleteFolderRequestPrivate::DeleteFolderRequestPrivate(
    const DeleteFolderRequestPrivate &other, DeleteFolderRequest * const q)
    : DeleteFolderPrivate(other, q)
{

}
