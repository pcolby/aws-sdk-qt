// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbucketsrequest.h"
#include "listbucketsrequest_p.h"
#include "listbucketsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketsRequest
 * \brief The ListBucketsRequest class provides an interface for S3 ListBuckets requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBuckets
 */

/*!
 * Constructs a copy of \a other.
 */
ListBucketsRequest::ListBucketsRequest(const ListBucketsRequest &other)
    : S3Request(new ListBucketsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBucketsRequest object.
 */
ListBucketsRequest::ListBucketsRequest()
    : S3Request(new ListBucketsRequestPrivate(S3Request::ListBucketsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBucketsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBucketsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListBucketsRequestPrivate
 * \brief The ListBucketsRequestPrivate class provides private implementation for ListBucketsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListBucketsRequestPrivate::ListBucketsRequestPrivate(
    const S3Request::Action action, ListBucketsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBucketsRequest
 * class' copy constructor.
 */
ListBucketsRequestPrivate::ListBucketsRequestPrivate(
    const ListBucketsRequestPrivate &other, ListBucketsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
