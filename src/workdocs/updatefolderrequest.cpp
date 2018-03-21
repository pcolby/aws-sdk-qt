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

#include "updatefolderrequest.h"
#include "updatefolderrequest_p.h"
#include "updatefolderresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  UpdateFolderRequest
 *
 * @brief  Implements WorkDocs UpdateFolder requests.
 *
 * @see    WorkDocsClient::updateFolder
 */

/**
 * @brief  Constructs a new UpdateFolderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFolderResponse::UpdateFolderResponse(

/**
 * @brief  Constructs a new UpdateFolderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFolderRequest::UpdateFolderRequest(const UpdateFolderRequest &other)
    : WorkDocsRequest(new UpdateFolderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFolderRequest object.
 */
UpdateFolderRequest::UpdateFolderRequest()
    : WorkDocsRequest(new UpdateFolderRequestPrivate(WorkDocsRequest::UpdateFolderAction, this))
{

}

bool UpdateFolderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFolderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFolderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * UpdateFolderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFolderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFolderRequestPrivate
 *
 * @brief  Private implementation for UpdateFolderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFolderRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public UpdateFolderRequest instance.
 */
UpdateFolderRequestPrivate::UpdateFolderRequestPrivate(
    const WorkDocsRequest::Action action, UpdateFolderRequest * const q)
    : UpdateFolderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFolderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFolderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFolderRequest instance.
 */
UpdateFolderRequestPrivate::UpdateFolderRequestPrivate(
    const UpdateFolderRequestPrivate &other, UpdateFolderRequest * const q)
    : UpdateFolderPrivate(other, q)
{

}
