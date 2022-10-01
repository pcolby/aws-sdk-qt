// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjecttaggingrequest.h"
#include "getobjecttaggingrequest_p.h"
#include "getobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTaggingRequest
 * \brief The GetObjectTaggingRequest class provides an interface for S3 GetObjectTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTagging
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectTaggingRequest::GetObjectTaggingRequest(const GetObjectTaggingRequest &other)
    : S3Request(new GetObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectTaggingRequest object.
 */
GetObjectTaggingRequest::GetObjectTaggingRequest()
    : S3Request(new GetObjectTaggingRequestPrivate(S3Request::GetObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectTaggingRequestPrivate
 * \brief The GetObjectTaggingRequestPrivate class provides private implementation for GetObjectTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectTaggingRequestPrivate::GetObjectTaggingRequestPrivate(
    const S3Request::Action action, GetObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectTaggingRequest
 * class' copy constructor.
 */
GetObjectTaggingRequestPrivate::GetObjectTaggingRequestPrivate(
    const GetObjectTaggingRequestPrivate &other, GetObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
