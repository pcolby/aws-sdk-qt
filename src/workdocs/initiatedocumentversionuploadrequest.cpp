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

#include "initiatedocumentversionuploadrequest.h"
#include "initiatedocumentversionuploadrequest_p.h"
#include "initiatedocumentversionuploadresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  InitiateDocumentVersionUploadRequest
 *
 * @brief  Implements WorkDocs InitiateDocumentVersionUpload requests.
 *
 * @see    WorkDocsClient::initiateDocumentVersionUpload
 */

/**
 * @brief  Constructs a new InitiateDocumentVersionUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitiateDocumentVersionUploadRequest::InitiateDocumentVersionUploadRequest(const InitiateDocumentVersionUploadRequest &other)
    : WorkDocsRequest(new InitiateDocumentVersionUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InitiateDocumentVersionUploadRequest object.
 */
InitiateDocumentVersionUploadRequest::InitiateDocumentVersionUploadRequest()
    : WorkDocsRequest(new InitiateDocumentVersionUploadRequestPrivate(WorkDocsRequest::InitiateDocumentVersionUploadAction, this))
{

}

bool InitiateDocumentVersionUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InitiateDocumentVersionUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitiateDocumentVersionUploadResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateDocumentVersionUploadRequest::response(QNetworkReply * const reply) const
{
    return new InitiateDocumentVersionUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InitiateDocumentVersionUploadRequestPrivate
 *
 * @brief  Private implementation for InitiateDocumentVersionUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateDocumentVersionUploadRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public InitiateDocumentVersionUploadRequest instance.
 */
InitiateDocumentVersionUploadRequestPrivate::InitiateDocumentVersionUploadRequestPrivate(
    const WorkDocsRequest::Action action, InitiateDocumentVersionUploadRequest * const q)
    : InitiateDocumentVersionUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InitiateDocumentVersionUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitiateDocumentVersionUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitiateDocumentVersionUploadRequest instance.
 */
InitiateDocumentVersionUploadRequestPrivate::InitiateDocumentVersionUploadRequestPrivate(
    const InitiateDocumentVersionUploadRequestPrivate &other, InitiateDocumentVersionUploadRequest * const q)
    : InitiateDocumentVersionUploadPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
