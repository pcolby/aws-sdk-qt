// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbucketmetricsconfigurationsrequest.h"
#include "listbucketmetricsconfigurationsrequest_p.h"
#include "listbucketmetricsconfigurationsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketMetricsConfigurationsRequest
 * \brief The ListBucketMetricsConfigurationsRequest class provides an interface for S3 ListBucketMetricsConfigurations requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketMetricsConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListBucketMetricsConfigurationsRequest::ListBucketMetricsConfigurationsRequest(const ListBucketMetricsConfigurationsRequest &other)
    : S3Request(new ListBucketMetricsConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBucketMetricsConfigurationsRequest object.
 */
ListBucketMetricsConfigurationsRequest::ListBucketMetricsConfigurationsRequest()
    : S3Request(new ListBucketMetricsConfigurationsRequestPrivate(S3Request::ListBucketMetricsConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBucketMetricsConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBucketMetricsConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketMetricsConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketMetricsConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListBucketMetricsConfigurationsRequestPrivate
 * \brief The ListBucketMetricsConfigurationsRequestPrivate class provides private implementation for ListBucketMetricsConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketMetricsConfigurationsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListBucketMetricsConfigurationsRequestPrivate::ListBucketMetricsConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketMetricsConfigurationsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBucketMetricsConfigurationsRequest
 * class' copy constructor.
 */
ListBucketMetricsConfigurationsRequestPrivate::ListBucketMetricsConfigurationsRequestPrivate(
    const ListBucketMetricsConfigurationsRequestPrivate &other, ListBucketMetricsConfigurationsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
