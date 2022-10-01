// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbucketanalyticsconfigurationsrequest.h"
#include "listbucketanalyticsconfigurationsrequest_p.h"
#include "listbucketanalyticsconfigurationsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketAnalyticsConfigurationsRequest
 * \brief The ListBucketAnalyticsConfigurationsRequest class provides an interface for S3 ListBucketAnalyticsConfigurations requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketAnalyticsConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListBucketAnalyticsConfigurationsRequest::ListBucketAnalyticsConfigurationsRequest(const ListBucketAnalyticsConfigurationsRequest &other)
    : S3Request(new ListBucketAnalyticsConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBucketAnalyticsConfigurationsRequest object.
 */
ListBucketAnalyticsConfigurationsRequest::ListBucketAnalyticsConfigurationsRequest()
    : S3Request(new ListBucketAnalyticsConfigurationsRequestPrivate(S3Request::ListBucketAnalyticsConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBucketAnalyticsConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBucketAnalyticsConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketAnalyticsConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketAnalyticsConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListBucketAnalyticsConfigurationsRequestPrivate
 * \brief The ListBucketAnalyticsConfigurationsRequestPrivate class provides private implementation for ListBucketAnalyticsConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketAnalyticsConfigurationsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListBucketAnalyticsConfigurationsRequestPrivate::ListBucketAnalyticsConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketAnalyticsConfigurationsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBucketAnalyticsConfigurationsRequest
 * class' copy constructor.
 */
ListBucketAnalyticsConfigurationsRequestPrivate::ListBucketAnalyticsConfigurationsRequestPrivate(
    const ListBucketAnalyticsConfigurationsRequestPrivate &other, ListBucketAnalyticsConfigurationsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
