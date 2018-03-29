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

#include "putobjectrequest.h"
#include "putobjectrequest_p.h"
#include "putobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutObjectRequest
 *
 * @brief  Implements S3 PutObject requests.
 *
 * @see    S3Client::putObject
 */

/**
 * @brief  Constructs a new PutObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutObjectRequest::PutObjectRequest(const PutObjectRequest &other)
    : S3Request(new PutObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutObjectRequest object.
 */
PutObjectRequest::PutObjectRequest()
    : S3Request(new PutObjectRequestPrivate(S3Request::PutObjectAction, this))
{

}

bool PutObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutObjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutObjectRequestPrivate
 *
 * @brief  Private implementation for PutObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutObjectRequest instance.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const S3Request::Action action, PutObjectRequest * const q)
    : PutObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutObjectRequest instance.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const PutObjectRequestPrivate &other, PutObjectRequest * const q)
    : PutObjectPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
