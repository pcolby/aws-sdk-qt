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

#include "putbucketaccelerateconfigurationrequest.h"
#include "putbucketaccelerateconfigurationrequest_p.h"
#include "putbucketaccelerateconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationRequest
 *
 * \brief The PutBucketAccelerateConfigurationRequest class encapsulates S3 PutBucketAccelerateConfiguration requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketAccelerateConfiguration
 */

/*!
 * @brief  Constructs a new PutBucketAccelerateConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketAccelerateConfigurationRequest::PutBucketAccelerateConfigurationRequest(const PutBucketAccelerateConfigurationRequest &other)
    : S3Request(new PutBucketAccelerateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutBucketAccelerateConfigurationRequest object.
 */
PutBucketAccelerateConfigurationRequest::PutBucketAccelerateConfigurationRequest()
    : S3Request(new PutBucketAccelerateConfigurationRequestPrivate(S3Request::PutBucketAccelerateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketAccelerateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutBucketAccelerateConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketAccelerateConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketAccelerateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketAccelerateConfigurationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutBucketAccelerateConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutBucketAccelerateConfigurationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketAccelerateConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketAccelerateConfigurationRequest instance.
 */
PutBucketAccelerateConfigurationRequestPrivate::PutBucketAccelerateConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketAccelerateConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketAccelerateConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketAccelerateConfigurationRequest instance.
 */
PutBucketAccelerateConfigurationRequestPrivate::PutBucketAccelerateConfigurationRequestPrivate(
    const PutBucketAccelerateConfigurationRequestPrivate &other, PutBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
