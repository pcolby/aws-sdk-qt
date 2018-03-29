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

#include "importimagerequest.h"
#include "importimagerequest_p.h"
#include "importimageresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ImportImageRequest
 *
 * @brief  Implements EC2 ImportImage requests.
 *
 * @see    EC2Client::importImage
 */

/**
 * @brief  Constructs a new ImportImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportImageRequest::ImportImageRequest(const ImportImageRequest &other)
    : EC2Request(new ImportImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportImageRequest object.
 */
ImportImageRequest::ImportImageRequest()
    : EC2Request(new ImportImageRequestPrivate(EC2Request::ImportImageAction, this))
{

}

bool ImportImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ImportImageRequest::response(QNetworkReply * const reply) const
{
    return new ImportImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportImageRequestPrivate
 *
 * @brief  Private implementation for ImportImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ImportImageRequest instance.
 */
ImportImageRequestPrivate::ImportImageRequestPrivate(
    const EC2Request::Action action, ImportImageRequest * const q)
    : ImportImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportImageRequest instance.
 */
ImportImageRequestPrivate::ImportImageRequestPrivate(
    const ImportImageRequestPrivate &other, ImportImageRequest * const q)
    : ImportImagePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
