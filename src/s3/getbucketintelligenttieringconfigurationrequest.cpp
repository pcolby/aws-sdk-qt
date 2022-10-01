// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
