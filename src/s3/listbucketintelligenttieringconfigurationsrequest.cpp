// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbucketintelligenttieringconfigurationsrequest.h"
#include "listbucketintelligenttieringconfigurationsrequest_p.h"
#include "listbucketintelligenttieringconfigurationsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketIntelligentTieringConfigurationsRequest
 * \brief The ListBucketIntelligentTieringConfigurationsRequest class provides an interface for S3 ListBucketIntelligentTieringConfigurations requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketIntelligentTieringConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListBucketIntelligentTieringConfigurationsRequest::ListBucketIntelligentTieringConfigurationsRequest(const ListBucketIntelligentTieringConfigurationsRequest &other)
    : S3Request(new ListBucketIntelligentTieringConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBucketIntelligentTieringConfigurationsRequest object.
 */
ListBucketIntelligentTieringConfigurationsRequest::ListBucketIntelligentTieringConfigurationsRequest()
    : S3Request(new ListBucketIntelligentTieringConfigurationsRequestPrivate(S3Request::ListBucketIntelligentTieringConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBucketIntelligentTieringConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBucketIntelligentTieringConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketIntelligentTieringConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketIntelligentTieringConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListBucketIntelligentTieringConfigurationsRequestPrivate
 * \brief The ListBucketIntelligentTieringConfigurationsRequestPrivate class provides private implementation for ListBucketIntelligentTieringConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketIntelligentTieringConfigurationsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListBucketIntelligentTieringConfigurationsRequestPrivate::ListBucketIntelligentTieringConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketIntelligentTieringConfigurationsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBucketIntelligentTieringConfigurationsRequest
 * class' copy constructor.
 */
ListBucketIntelligentTieringConfigurationsRequestPrivate::ListBucketIntelligentTieringConfigurationsRequestPrivate(
    const ListBucketIntelligentTieringConfigurationsRequestPrivate &other, ListBucketIntelligentTieringConfigurationsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
