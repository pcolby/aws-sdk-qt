// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketinventoryconfigurationrequest.h"
#include "putbucketinventoryconfigurationrequest_p.h"
#include "putbucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketInventoryConfigurationRequest
 * \brief The PutBucketInventoryConfigurationRequest class provides an interface for S3 PutBucketInventoryConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketInventoryConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketInventoryConfigurationRequest::PutBucketInventoryConfigurationRequest(const PutBucketInventoryConfigurationRequest &other)
    : S3Request(new PutBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketInventoryConfigurationRequest object.
 */
PutBucketInventoryConfigurationRequest::PutBucketInventoryConfigurationRequest()
    : S3Request(new PutBucketInventoryConfigurationRequestPrivate(S3Request::PutBucketInventoryConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketInventoryConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketInventoryConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketInventoryConfigurationRequestPrivate
 * \brief The PutBucketInventoryConfigurationRequestPrivate class provides private implementation for PutBucketInventoryConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketInventoryConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketInventoryConfigurationRequestPrivate::PutBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketInventoryConfigurationRequest
 * class' copy constructor.
 */
PutBucketInventoryConfigurationRequestPrivate::PutBucketInventoryConfigurationRequestPrivate(
    const PutBucketInventoryConfigurationRequestPrivate &other, PutBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
