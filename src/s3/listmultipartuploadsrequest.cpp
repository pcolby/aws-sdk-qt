// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultipartuploadsrequest.h"
#include "listmultipartuploadsrequest_p.h"
#include "listmultipartuploadsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListMultipartUploadsRequest
 * \brief The ListMultipartUploadsRequest class provides an interface for S3 ListMultipartUploads requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listMultipartUploads
 */

/*!
 * Constructs a copy of \a other.
 */
ListMultipartUploadsRequest::ListMultipartUploadsRequest(const ListMultipartUploadsRequest &other)
    : S3Request(new ListMultipartUploadsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMultipartUploadsRequest object.
 */
ListMultipartUploadsRequest::ListMultipartUploadsRequest()
    : S3Request(new ListMultipartUploadsRequestPrivate(S3Request::ListMultipartUploadsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMultipartUploadsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMultipartUploadsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMultipartUploadsRequest::response(QNetworkReply * const reply) const
{
    return new ListMultipartUploadsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListMultipartUploadsRequestPrivate
 * \brief The ListMultipartUploadsRequestPrivate class provides private implementation for ListMultipartUploadsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListMultipartUploadsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListMultipartUploadsRequestPrivate::ListMultipartUploadsRequestPrivate(
    const S3Request::Action action, ListMultipartUploadsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMultipartUploadsRequest
 * class' copy constructor.
 */
ListMultipartUploadsRequestPrivate::ListMultipartUploadsRequestPrivate(
    const ListMultipartUploadsRequestPrivate &other, ListMultipartUploadsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
