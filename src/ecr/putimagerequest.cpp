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

#include "putimagerequest.h"
#include "putimagerequest_p.h"
#include "putimageresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  PutImageRequest
 *
 * @brief  Implements ECR PutImage requests.
 *
 * @see    ECRClient::putImage
 */

/**
 * @brief  Constructs a new PutImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutImageResponse::PutImageResponse(

/**
 * @brief  Constructs a new PutImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutImageRequest::PutImageRequest(const PutImageRequest &other)
    : ECRRequest(new PutImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutImageRequest object.
 */
PutImageRequest::PutImageRequest()
    : ECRRequest(new PutImageRequestPrivate(ECRRequest::PutImageAction, this))
{

}

bool PutImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * PutImageRequest::response(QNetworkReply * const reply) const
{
    return new PutImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutImageRequestPrivate
 *
 * @brief  Private implementation for PutImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutImageRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public PutImageRequest instance.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const ECRRequest::Action action, PutImageRequest * const q)
    : PutImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutImageRequest instance.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const PutImageRequestPrivate &other, PutImageRequest * const q)
    : PutImagePrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
