// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectretentionrequest.h"
#include "getobjectretentionrequest_p.h"
#include "getobjectretentionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectRetentionRequest
 * \brief The GetObjectRetentionRequest class provides an interface for S3 GetObjectRetention requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectRetention
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectRetentionRequest::GetObjectRetentionRequest(const GetObjectRetentionRequest &other)
    : S3Request(new GetObjectRetentionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectRetentionRequest object.
 */
GetObjectRetentionRequest::GetObjectRetentionRequest()
    : S3Request(new GetObjectRetentionRequestPrivate(S3Request::GetObjectRetentionAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectRetentionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectRetentionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectRetentionRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectRetentionResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectRetentionRequestPrivate
 * \brief The GetObjectRetentionRequestPrivate class provides private implementation for GetObjectRetentionRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectRetentionRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectRetentionRequestPrivate::GetObjectRetentionRequestPrivate(
    const S3Request::Action action, GetObjectRetentionRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectRetentionRequest
 * class' copy constructor.
 */
GetObjectRetentionRequestPrivate::GetObjectRetentionRequestPrivate(
    const GetObjectRetentionRequestPrivate &other, GetObjectRetentionRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
