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

#include "uploadarchiverequest.h"
#include "uploadarchiverequest_p.h"
#include "uploadarchiveresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  UploadArchiveRequest
 *
 * @brief  Implements Glacier UploadArchive requests.
 *
 * @see    GlacierClient::uploadArchive
 */

/**
 * @brief  Constructs a new UploadArchiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadArchiveResponse::UploadArchiveResponse(

/**
 * @brief  Constructs a new UploadArchiveRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadArchiveRequest::UploadArchiveRequest(const UploadArchiveRequest &other)
    : GlacierRequest(new UploadArchiveRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadArchiveRequest object.
 */
UploadArchiveRequest::UploadArchiveRequest()
    : GlacierRequest(new UploadArchiveRequestPrivate(GlacierRequest::UploadArchiveAction, this))
{

}

bool UploadArchiveRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadArchiveResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadArchiveResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * UploadArchiveRequest::response(QNetworkReply * const reply) const
{
    return new UploadArchiveResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadArchiveRequestPrivate
 *
 * @brief  Private implementation for UploadArchiveRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadArchiveRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public UploadArchiveRequest instance.
 */
UploadArchiveRequestPrivate::UploadArchiveRequestPrivate(
    const GlacierRequest::Action action, UploadArchiveRequest * const q)
    : UploadArchivePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadArchiveRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadArchiveRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadArchiveRequest instance.
 */
UploadArchiveRequestPrivate::UploadArchiveRequestPrivate(
    const UploadArchiveRequestPrivate &other, UploadArchiveRequest * const q)
    : UploadArchivePrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
