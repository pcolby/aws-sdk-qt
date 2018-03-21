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

#include "abortdocumentversionuploadrequest.h"
#include "abortdocumentversionuploadrequest_p.h"
#include "abortdocumentversionuploadresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  AbortDocumentVersionUploadRequest
 *
 * @brief  Implements WorkDocs AbortDocumentVersionUpload requests.
 *
 * @see    WorkDocsClient::abortDocumentVersionUpload
 */

/**
 * @brief  Constructs a new AbortDocumentVersionUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortDocumentVersionUploadResponse::AbortDocumentVersionUploadResponse(

/**
 * @brief  Constructs a new AbortDocumentVersionUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AbortDocumentVersionUploadRequest::AbortDocumentVersionUploadRequest(const AbortDocumentVersionUploadRequest &other)
    : WorkDocsRequest(new AbortDocumentVersionUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AbortDocumentVersionUploadRequest object.
 */
AbortDocumentVersionUploadRequest::AbortDocumentVersionUploadRequest()
    : WorkDocsRequest(new AbortDocumentVersionUploadRequestPrivate(WorkDocsRequest::AbortDocumentVersionUploadAction, this))
{

}

bool AbortDocumentVersionUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AbortDocumentVersionUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AbortDocumentVersionUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * AbortDocumentVersionUploadRequest::response(QNetworkReply * const reply) const
{
    return new AbortDocumentVersionUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AbortDocumentVersionUploadRequestPrivate
 *
 * @brief  Private implementation for AbortDocumentVersionUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortDocumentVersionUploadRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public AbortDocumentVersionUploadRequest instance.
 */
AbortDocumentVersionUploadRequestPrivate::AbortDocumentVersionUploadRequestPrivate(
    const WorkDocsRequest::Action action, AbortDocumentVersionUploadRequest * const q)
    : AbortDocumentVersionUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AbortDocumentVersionUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AbortDocumentVersionUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AbortDocumentVersionUploadRequest instance.
 */
AbortDocumentVersionUploadRequestPrivate::AbortDocumentVersionUploadRequestPrivate(
    const AbortDocumentVersionUploadRequestPrivate &other, AbortDocumentVersionUploadRequest * const q)
    : AbortDocumentVersionUploadPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
