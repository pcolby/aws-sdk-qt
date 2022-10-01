// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "writegetobjectresponserequest.h"
#include "writegetobjectresponserequest_p.h"
#include "writegetobjectresponseresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::WriteGetObjectResponseRequest
 * \brief The WriteGetObjectResponseRequest class provides an interface for S3 WriteGetObjectResponse requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::writeGetObjectResponse
 */

/*!
 * Constructs a copy of \a other.
 */
WriteGetObjectResponseRequest::WriteGetObjectResponseRequest(const WriteGetObjectResponseRequest &other)
    : S3Request(new WriteGetObjectResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a WriteGetObjectResponseRequest object.
 */
WriteGetObjectResponseRequest::WriteGetObjectResponseRequest()
    : S3Request(new WriteGetObjectResponseRequestPrivate(S3Request::WriteGetObjectResponseAction, this))
{

}

/*!
 * \reimp
 */
bool WriteGetObjectResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a WriteGetObjectResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * WriteGetObjectResponseRequest::response(QNetworkReply * const reply) const
{
    return new WriteGetObjectResponseResponse(*this, reply);
}

/*!
 * \class QtAws::S3::WriteGetObjectResponseRequestPrivate
 * \brief The WriteGetObjectResponseRequestPrivate class provides private implementation for WriteGetObjectResponseRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a WriteGetObjectResponseRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
WriteGetObjectResponseRequestPrivate::WriteGetObjectResponseRequestPrivate(
    const S3Request::Action action, WriteGetObjectResponseRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the WriteGetObjectResponseRequest
 * class' copy constructor.
 */
WriteGetObjectResponseRequestPrivate::WriteGetObjectResponseRequestPrivate(
    const WriteGetObjectResponseRequestPrivate &other, WriteGetObjectResponseRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
