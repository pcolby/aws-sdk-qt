// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectattributesrequest.h"
#include "getobjectattributesrequest_p.h"
#include "getobjectattributesresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectAttributesRequest
 * \brief The GetObjectAttributesRequest class provides an interface for S3 GetObjectAttributes requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest(const GetObjectAttributesRequest &other)
    : S3Request(new GetObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectAttributesRequest object.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest()
    : S3Request(new GetObjectAttributesRequestPrivate(S3Request::GetObjectAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectAttributesRequestPrivate
 * \brief The GetObjectAttributesRequestPrivate class provides private implementation for GetObjectAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectAttributesRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const S3Request::Action action, GetObjectAttributesRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectAttributesRequest
 * class' copy constructor.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const GetObjectAttributesRequestPrivate &other, GetObjectAttributesRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
