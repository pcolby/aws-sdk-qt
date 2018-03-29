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

#include "putobjectaclrequest.h"
#include "putobjectaclrequest_p.h"
#include "putobjectaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutObjectAclRequest
 *
 * @brief  Implements S3 PutObjectAcl requests.
 *
 * @see    S3Client::putObjectAcl
 */

/**
 * @brief  Constructs a new PutObjectAclRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutObjectAclRequest::PutObjectAclRequest(const PutObjectAclRequest &other)
    : S3Request(new PutObjectAclRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutObjectAclRequest object.
 */
PutObjectAclRequest::PutObjectAclRequest()
    : S3Request(new PutObjectAclRequestPrivate(S3Request::PutObjectAclAction, this))
{

}

bool PutObjectAclRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutObjectAclResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutObjectAclResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectAclRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectAclResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutObjectAclRequestPrivate
 *
 * @brief  Private implementation for PutObjectAclRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectAclRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutObjectAclRequest instance.
 */
PutObjectAclRequestPrivate::PutObjectAclRequestPrivate(
    const S3Request::Action action, PutObjectAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectAclRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutObjectAclRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutObjectAclRequest instance.
 */
PutObjectAclRequestPrivate::PutObjectAclRequestPrivate(
    const PutObjectAclRequestPrivate &other, PutObjectAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
