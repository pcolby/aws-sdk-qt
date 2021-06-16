/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketintelligenttieringconfigurationrequest.h"
#include "getbucketintelligenttieringconfigurationrequest_p.h"
#include "getbucketintelligenttieringconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketIntelligentTieringConfigurationRequest
 * \brief The GetBucketIntelligentTieringConfigurationRequest class provides an interface for S3 GetBucketIntelligentTieringConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketIntelligentTieringConfigurationRequest::GetBucketIntelligentTieringConfigurationRequest(const GetBucketIntelligentTieringConfigurationRequest &other)
    : S3Request(new GetBucketIntelligentTieringConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketIntelligentTieringConfigurationRequest object.
 */
GetBucketIntelligentTieringConfigurationRequest::GetBucketIntelligentTieringConfigurationRequest()
    : S3Request(new GetBucketIntelligentTieringConfigurationRequestPrivate(S3Request::GetBucketIntelligentTieringConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketIntelligentTieringConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketIntelligentTieringConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketIntelligentTieringConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketIntelligentTieringConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketIntelligentTieringConfigurationRequestPrivate
 * \brief The GetBucketIntelligentTieringConfigurationRequestPrivate class provides private implementation for GetBucketIntelligentTieringConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketIntelligentTieringConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketIntelligentTieringConfigurationRequestPrivate::GetBucketIntelligentTieringConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketIntelligentTieringConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketIntelligentTieringConfigurationRequest
 * class' copy constructor.
 */
GetBucketIntelligentTieringConfigurationRequestPrivate::GetBucketIntelligentTieringConfigurationRequestPrivate(
    const GetBucketIntelligentTieringConfigurationRequestPrivate &other, GetBucketIntelligentTieringConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
