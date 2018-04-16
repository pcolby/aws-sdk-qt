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

#include "getbucketlocationrequest.h"
#include "getbucketlocationrequest_p.h"
#include "getbucketlocationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLocationRequest
 *
 * \brief The GetBucketLocationRequest class provides an interface for S3 GetBucketLocation requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketLocation
 */

/*!
 * @brief  Constructs a new GetBucketLocationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketLocationRequest::GetBucketLocationRequest(const GetBucketLocationRequest &other)
    : S3Request(new GetBucketLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBucketLocationRequest object.
 */
GetBucketLocationRequest::GetBucketLocationRequest()
    : S3Request(new GetBucketLocationRequestPrivate(S3Request::GetBucketLocationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLocationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBucketLocationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketLocationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLocationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLocationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBucketLocationRequestPrivate
 *
 * @brief  Private implementation for GetBucketLocationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketLocationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketLocationRequest instance.
 */
GetBucketLocationRequestPrivate::GetBucketLocationRequestPrivate(
    const S3Request::Action action, GetBucketLocationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketLocationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLocationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketLocationRequest instance.
 */
GetBucketLocationRequestPrivate::GetBucketLocationRequestPrivate(
    const GetBucketLocationRequestPrivate &other, GetBucketLocationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
