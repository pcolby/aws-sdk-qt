// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpublicaccessblockrequest.h"
#include "getpublicaccessblockrequest_p.h"
#include "getpublicaccessblockresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetPublicAccessBlockRequest
 * \brief The GetPublicAccessBlockRequest class provides an interface for S3 GetPublicAccessBlock requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getPublicAccessBlock
 */

/*!
 * Constructs a copy of \a other.
 */
GetPublicAccessBlockRequest::GetPublicAccessBlockRequest(const GetPublicAccessBlockRequest &other)
    : S3Request(new GetPublicAccessBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPublicAccessBlockRequest object.
 */
GetPublicAccessBlockRequest::GetPublicAccessBlockRequest()
    : S3Request(new GetPublicAccessBlockRequestPrivate(S3Request::GetPublicAccessBlockAction, this))
{

}

/*!
 * \reimp
 */
bool GetPublicAccessBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPublicAccessBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicAccessBlockRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicAccessBlockResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetPublicAccessBlockRequestPrivate
 * \brief The GetPublicAccessBlockRequestPrivate class provides private implementation for GetPublicAccessBlockRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetPublicAccessBlockRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetPublicAccessBlockRequestPrivate::GetPublicAccessBlockRequestPrivate(
    const S3Request::Action action, GetPublicAccessBlockRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPublicAccessBlockRequest
 * class' copy constructor.
 */
GetPublicAccessBlockRequestPrivate::GetPublicAccessBlockRequestPrivate(
    const GetPublicAccessBlockRequestPrivate &other, GetPublicAccessBlockRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
