// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectsv2request.h"
#include "listobjectsv2request_p.h"
#include "listobjectsv2response.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsV2Request
 * \brief The ListObjectsV2Request class provides an interface for S3 ListObjectsV2 requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjectsV2
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectsV2Request::ListObjectsV2Request(const ListObjectsV2Request &other)
    : S3Request(new ListObjectsV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectsV2Request object.
 */
ListObjectsV2Request::ListObjectsV2Request()
    : S3Request(new ListObjectsV2RequestPrivate(S3Request::ListObjectsV2Action, this))
{

}

/*!
 * \reimp
 */
bool ListObjectsV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectsV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectsV2Request::response(QNetworkReply * const reply) const
{
    return new ListObjectsV2Response(*this, reply);
}

/*!
 * \class QtAws::S3::ListObjectsV2RequestPrivate
 * \brief The ListObjectsV2RequestPrivate class provides private implementation for ListObjectsV2Request.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectsV2RequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListObjectsV2RequestPrivate::ListObjectsV2RequestPrivate(
    const S3Request::Action action, ListObjectsV2Request * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectsV2Request
 * class' copy constructor.
 */
ListObjectsV2RequestPrivate::ListObjectsV2RequestPrivate(
    const ListObjectsV2RequestPrivate &other, ListObjectsV2Request * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
