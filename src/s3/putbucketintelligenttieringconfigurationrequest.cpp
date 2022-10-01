// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketintelligenttieringconfigurationrequest.h"
#include "putbucketintelligenttieringconfigurationrequest_p.h"
#include "putbucketintelligenttieringconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketIntelligentTieringConfigurationRequest
 * \brief The PutBucketIntelligentTieringConfigurationRequest class provides an interface for S3 PutBucketIntelligentTieringConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketIntelligentTieringConfigurationRequest::PutBucketIntelligentTieringConfigurationRequest(const PutBucketIntelligentTieringConfigurationRequest &other)
    : S3Request(new PutBucketIntelligentTieringConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketIntelligentTieringConfigurationRequest object.
 */
PutBucketIntelligentTieringConfigurationRequest::PutBucketIntelligentTieringConfigurationRequest()
    : S3Request(new PutBucketIntelligentTieringConfigurationRequestPrivate(S3Request::PutBucketIntelligentTieringConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketIntelligentTieringConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketIntelligentTieringConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketIntelligentTieringConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketIntelligentTieringConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketIntelligentTieringConfigurationRequestPrivate
 * \brief The PutBucketIntelligentTieringConfigurationRequestPrivate class provides private implementation for PutBucketIntelligentTieringConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketIntelligentTieringConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketIntelligentTieringConfigurationRequestPrivate::PutBucketIntelligentTieringConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketIntelligentTieringConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketIntelligentTieringConfigurationRequest
 * class' copy constructor.
 */
PutBucketIntelligentTieringConfigurationRequestPrivate::PutBucketIntelligentTieringConfigurationRequestPrivate(
    const PutBucketIntelligentTieringConfigurationRequestPrivate &other, PutBucketIntelligentTieringConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
