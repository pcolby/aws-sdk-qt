// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketownershipcontrolsrequest.h"
#include "putbucketownershipcontrolsrequest_p.h"
#include "putbucketownershipcontrolsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketOwnershipControlsRequest
 * \brief The PutBucketOwnershipControlsRequest class provides an interface for S3 PutBucketOwnershipControls requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketOwnershipControls
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketOwnershipControlsRequest::PutBucketOwnershipControlsRequest(const PutBucketOwnershipControlsRequest &other)
    : S3Request(new PutBucketOwnershipControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketOwnershipControlsRequest object.
 */
PutBucketOwnershipControlsRequest::PutBucketOwnershipControlsRequest()
    : S3Request(new PutBucketOwnershipControlsRequestPrivate(S3Request::PutBucketOwnershipControlsAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketOwnershipControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketOwnershipControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketOwnershipControlsRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketOwnershipControlsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketOwnershipControlsRequestPrivate
 * \brief The PutBucketOwnershipControlsRequestPrivate class provides private implementation for PutBucketOwnershipControlsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketOwnershipControlsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketOwnershipControlsRequestPrivate::PutBucketOwnershipControlsRequestPrivate(
    const S3Request::Action action, PutBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketOwnershipControlsRequest
 * class' copy constructor.
 */
PutBucketOwnershipControlsRequestPrivate::PutBucketOwnershipControlsRequestPrivate(
    const PutBucketOwnershipControlsRequestPrivate &other, PutBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
