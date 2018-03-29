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

#include "initiatemultipartuploadrequest.h"
#include "initiatemultipartuploadrequest_p.h"
#include "initiatemultipartuploadresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  InitiateMultipartUploadRequest
 *
 * @brief  Implements Glacier InitiateMultipartUpload requests.
 *
 * @see    GlacierClient::initiateMultipartUpload
 */

/**
 * @brief  Constructs a new InitiateMultipartUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitiateMultipartUploadRequest::InitiateMultipartUploadRequest(const InitiateMultipartUploadRequest &other)
    : GlacierRequest(new InitiateMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InitiateMultipartUploadRequest object.
 */
InitiateMultipartUploadRequest::InitiateMultipartUploadRequest()
    : GlacierRequest(new InitiateMultipartUploadRequestPrivate(GlacierRequest::InitiateMultipartUploadAction, this))
{

}

bool InitiateMultipartUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InitiateMultipartUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitiateMultipartUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * InitiateMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new InitiateMultipartUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InitiateMultipartUploadRequestPrivate
 *
 * @brief  Private implementation for InitiateMultipartUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateMultipartUploadRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public InitiateMultipartUploadRequest instance.
 */
InitiateMultipartUploadRequestPrivate::InitiateMultipartUploadRequestPrivate(
    const GlacierRequest::Action action, InitiateMultipartUploadRequest * const q)
    : InitiateMultipartUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InitiateMultipartUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitiateMultipartUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitiateMultipartUploadRequest instance.
 */
InitiateMultipartUploadRequestPrivate::InitiateMultipartUploadRequestPrivate(
    const InitiateMultipartUploadRequestPrivate &other, InitiateMultipartUploadRequest * const q)
    : InitiateMultipartUploadPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
