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

#include "deleteuploadrequest.h"
#include "deleteuploadrequest_p.h"
#include "deleteuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  DeleteUploadRequest
 *
 * @brief  Implements DeviceFarm DeleteUpload requests.
 *
 * @see    DeviceFarmClient::deleteUpload
 */

/**
 * @brief  Constructs a new DeleteUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUploadResponse::DeleteUploadResponse(

/**
 * @brief  Constructs a new DeleteUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUploadRequest::DeleteUploadRequest(const DeleteUploadRequest &other)
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUploadRequest object.
 */
DeleteUploadRequest::DeleteUploadRequest()
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(DeviceFarmRequest::DeleteUploadAction, this))
{

}

bool DeleteUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * DeleteUploadRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUploadRequestPrivate
 *
 * @brief  Private implementation for DeleteUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUploadRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteUploadRequest instance.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteUploadRequest * const q)
    : DeleteUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUploadRequest instance.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeleteUploadRequestPrivate &other, DeleteUploadRequest * const q)
    : DeleteUploadPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
