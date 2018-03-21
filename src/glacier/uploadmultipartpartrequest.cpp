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

#include "uploadmultipartpartrequest.h"
#include "uploadmultipartpartrequest_p.h"
#include "uploadmultipartpartresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  UploadMultipartPartRequest
 *
 * @brief  Implements Glacier UploadMultipartPart requests.
 *
 * @see    GlacierClient::uploadMultipartPart
 */

/**
 * @brief  Constructs a new UploadMultipartPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadMultipartPartRequest::UploadMultipartPartRequest(const UploadMultipartPartRequest &other)
    : GlacierRequest(new UploadMultipartPartRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadMultipartPartRequest object.
 */
UploadMultipartPartRequest::UploadMultipartPartRequest()
    : GlacierRequest(new UploadMultipartPartRequestPrivate(GlacierRequest::UploadMultipartPartAction, this))
{

}

bool UploadMultipartPartRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadMultipartPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadMultipartPartResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * UploadMultipartPartRequest::response(QNetworkReply * const reply) const
{
    return new UploadMultipartPartResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadMultipartPartRequestPrivate
 *
 * @brief  Private implementation for UploadMultipartPartRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadMultipartPartRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public UploadMultipartPartRequest instance.
 */
UploadMultipartPartRequestPrivate::UploadMultipartPartRequestPrivate(
    const GlacierRequest::Action action, UploadMultipartPartRequest * const q)
    : UploadMultipartPartPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadMultipartPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadMultipartPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadMultipartPartRequest instance.
 */
UploadMultipartPartRequestPrivate::UploadMultipartPartRequestPrivate(
    const UploadMultipartPartRequestPrivate &other, UploadMultipartPartRequest * const q)
    : UploadMultipartPartPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
