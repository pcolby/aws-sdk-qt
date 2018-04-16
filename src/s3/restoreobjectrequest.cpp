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

#include "restoreobjectrequest.h"
#include "restoreobjectrequest_p.h"
#include "restoreobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::RestoreObjectRequest
 *
 * \brief The RestoreObjectRequest class encapsulates S3 RestoreObject requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::restoreObject
 */

/*!
 * @brief  Constructs a new RestoreObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreObjectRequest::RestoreObjectRequest(const RestoreObjectRequest &other)
    : S3Request(new RestoreObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RestoreObjectRequest object.
 */
RestoreObjectRequest::RestoreObjectRequest()
    : S3Request(new RestoreObjectRequestPrivate(S3Request::RestoreObjectAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreObjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RestoreObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreObjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * RestoreObjectRequest::response(QNetworkReply * const reply) const
{
    return new RestoreObjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RestoreObjectRequestPrivate
 *
 * @brief  Private implementation for RestoreObjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RestoreObjectRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public RestoreObjectRequest instance.
 */
RestoreObjectRequestPrivate::RestoreObjectRequestPrivate(
    const S3Request::Action action, RestoreObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RestoreObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreObjectRequest instance.
 */
RestoreObjectRequestPrivate::RestoreObjectRequestPrivate(
    const RestoreObjectRequestPrivate &other, RestoreObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
