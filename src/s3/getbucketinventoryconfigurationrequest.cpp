// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketinventoryconfigurationrequest.h"
#include "getbucketinventoryconfigurationrequest_p.h"
#include "getbucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationRequest
 * \brief The GetBucketInventoryConfigurationRequest class provides an interface for S3 GetBucketInventoryConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketInventoryConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketInventoryConfigurationRequest::GetBucketInventoryConfigurationRequest(const GetBucketInventoryConfigurationRequest &other)
    : S3Request(new GetBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketInventoryConfigurationRequest object.
 */
GetBucketInventoryConfigurationRequest::GetBucketInventoryConfigurationRequest()
    : S3Request(new GetBucketInventoryConfigurationRequestPrivate(S3Request::GetBucketInventoryConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketInventoryConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketInventoryConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationRequestPrivate
 * \brief The GetBucketInventoryConfigurationRequestPrivate class provides private implementation for GetBucketInventoryConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketInventoryConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketInventoryConfigurationRequestPrivate::GetBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketInventoryConfigurationRequest
 * class' copy constructor.
 */
GetBucketInventoryConfigurationRequestPrivate::GetBucketInventoryConfigurationRequestPrivate(
    const GetBucketInventoryConfigurationRequestPrivate &other, GetBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
