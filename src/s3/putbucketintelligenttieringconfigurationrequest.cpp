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
