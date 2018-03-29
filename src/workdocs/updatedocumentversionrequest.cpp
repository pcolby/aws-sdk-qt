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

#include "updatedocumentversionrequest.h"
#include "updatedocumentversionrequest_p.h"
#include "updatedocumentversionresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  UpdateDocumentVersionRequest
 *
 * @brief  Implements WorkDocs UpdateDocumentVersion requests.
 *
 * @see    WorkDocsClient::updateDocumentVersion
 */

/**
 * @brief  Constructs a new UpdateDocumentVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDocumentVersionRequest::UpdateDocumentVersionRequest(const UpdateDocumentVersionRequest &other)
    : WorkDocsRequest(new UpdateDocumentVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDocumentVersionRequest object.
 */
UpdateDocumentVersionRequest::UpdateDocumentVersionRequest()
    : WorkDocsRequest(new UpdateDocumentVersionRequestPrivate(WorkDocsRequest::UpdateDocumentVersionAction, this))
{

}

bool UpdateDocumentVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDocumentVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDocumentVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * UpdateDocumentVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDocumentVersionRequestPrivate
 *
 * @brief  Private implementation for UpdateDocumentVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentVersionRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public UpdateDocumentVersionRequest instance.
 */
UpdateDocumentVersionRequestPrivate::UpdateDocumentVersionRequestPrivate(
    const WorkDocsRequest::Action action, UpdateDocumentVersionRequest * const q)
    : UpdateDocumentVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDocumentVersionRequest instance.
 */
UpdateDocumentVersionRequestPrivate::UpdateDocumentVersionRequestPrivate(
    const UpdateDocumentVersionRequestPrivate &other, UpdateDocumentVersionRequest * const q)
    : UpdateDocumentVersionPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
