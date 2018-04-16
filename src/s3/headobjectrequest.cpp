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

#include "headobjectrequest.h"
#include "headobjectrequest_p.h"
#include "headobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadObjectRequest
 *
 * \brief The HeadObjectRequest class encapsulates S3 HeadObject requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::headObject
 */

/*!
 * @brief  Constructs a new HeadObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
HeadObjectRequest::HeadObjectRequest(const HeadObjectRequest &other)
    : S3Request(new HeadObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new HeadObjectRequest object.
 */
HeadObjectRequest::HeadObjectRequest()
    : S3Request(new HeadObjectRequestPrivate(S3Request::HeadObjectAction, this))
{

}

/*!
 * \reimp
 */
bool HeadObjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an HeadObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An HeadObjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * HeadObjectRequest::response(QNetworkReply * const reply) const
{
    return new HeadObjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  HeadObjectRequestPrivate
 *
 * @brief  Private implementation for HeadObjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new HeadObjectRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public HeadObjectRequest instance.
 */
HeadObjectRequestPrivate::HeadObjectRequestPrivate(
    const S3Request::Action action, HeadObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new HeadObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the HeadObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public HeadObjectRequest instance.
 */
HeadObjectRequestPrivate::HeadObjectRequestPrivate(
    const HeadObjectRequestPrivate &other, HeadObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
