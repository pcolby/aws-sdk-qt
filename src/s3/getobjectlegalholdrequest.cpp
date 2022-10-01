// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectlegalholdrequest.h"
#include "getobjectlegalholdrequest_p.h"
#include "getobjectlegalholdresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectLegalHoldRequest
 * \brief The GetObjectLegalHoldRequest class provides an interface for S3 GetObjectLegalHold requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectLegalHold
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectLegalHoldRequest::GetObjectLegalHoldRequest(const GetObjectLegalHoldRequest &other)
    : S3Request(new GetObjectLegalHoldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectLegalHoldRequest object.
 */
GetObjectLegalHoldRequest::GetObjectLegalHoldRequest()
    : S3Request(new GetObjectLegalHoldRequestPrivate(S3Request::GetObjectLegalHoldAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectLegalHoldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectLegalHoldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectLegalHoldRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectLegalHoldResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectLegalHoldRequestPrivate
 * \brief The GetObjectLegalHoldRequestPrivate class provides private implementation for GetObjectLegalHoldRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectLegalHoldRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectLegalHoldRequestPrivate::GetObjectLegalHoldRequestPrivate(
    const S3Request::Action action, GetObjectLegalHoldRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectLegalHoldRequest
 * class' copy constructor.
 */
GetObjectLegalHoldRequestPrivate::GetObjectLegalHoldRequestPrivate(
    const GetObjectLegalHoldRequestPrivate &other, GetObjectLegalHoldRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
