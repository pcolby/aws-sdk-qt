// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectlegalholdrequest.h"
#include "putobjectlegalholdrequest_p.h"
#include "putobjectlegalholdresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectLegalHoldRequest
 * \brief The PutObjectLegalHoldRequest class provides an interface for S3 PutObjectLegalHold requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectLegalHold
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectLegalHoldRequest::PutObjectLegalHoldRequest(const PutObjectLegalHoldRequest &other)
    : S3Request(new PutObjectLegalHoldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectLegalHoldRequest object.
 */
PutObjectLegalHoldRequest::PutObjectLegalHoldRequest()
    : S3Request(new PutObjectLegalHoldRequestPrivate(S3Request::PutObjectLegalHoldAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectLegalHoldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectLegalHoldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectLegalHoldRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectLegalHoldResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectLegalHoldRequestPrivate
 * \brief The PutObjectLegalHoldRequestPrivate class provides private implementation for PutObjectLegalHoldRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectLegalHoldRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectLegalHoldRequestPrivate::PutObjectLegalHoldRequestPrivate(
    const S3Request::Action action, PutObjectLegalHoldRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectLegalHoldRequest
 * class' copy constructor.
 */
PutObjectLegalHoldRequestPrivate::PutObjectLegalHoldRequestPrivate(
    const PutObjectLegalHoldRequestPrivate &other, PutObjectLegalHoldRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
