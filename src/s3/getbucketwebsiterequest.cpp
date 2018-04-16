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

#include "getbucketwebsiterequest.h"
#include "getbucketwebsiterequest_p.h"
#include "getbucketwebsiteresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketWebsiteRequest
 *
 * \brief The GetBucketWebsiteRequest class encapsulates S3 GetBucketWebsite requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketWebsite
 */

/*!
 * @brief  Constructs a new GetBucketWebsiteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketWebsiteRequest::GetBucketWebsiteRequest(const GetBucketWebsiteRequest &other)
    : S3Request(new GetBucketWebsiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBucketWebsiteRequest object.
 */
GetBucketWebsiteRequest::GetBucketWebsiteRequest()
    : S3Request(new GetBucketWebsiteRequestPrivate(S3Request::GetBucketWebsiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketWebsiteRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBucketWebsiteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketWebsiteResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketWebsiteRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketWebsiteResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBucketWebsiteRequestPrivate
 *
 * @brief  Private implementation for GetBucketWebsiteRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketWebsiteRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketWebsiteRequest instance.
 */
GetBucketWebsiteRequestPrivate::GetBucketWebsiteRequestPrivate(
    const S3Request::Action action, GetBucketWebsiteRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketWebsiteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketWebsiteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketWebsiteRequest instance.
 */
GetBucketWebsiteRequestPrivate::GetBucketWebsiteRequestPrivate(
    const GetBucketWebsiteRequestPrivate &other, GetBucketWebsiteRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
