// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "selectobjectcontentrequest.h"
#include "selectobjectcontentrequest_p.h"
#include "selectobjectcontentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::SelectObjectContentRequest
 * \brief The SelectObjectContentRequest class provides an interface for S3 SelectObjectContent requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::selectObjectContent
 */

/*!
 * Constructs a copy of \a other.
 */
SelectObjectContentRequest::SelectObjectContentRequest(const SelectObjectContentRequest &other)
    : S3Request(new SelectObjectContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SelectObjectContentRequest object.
 */
SelectObjectContentRequest::SelectObjectContentRequest()
    : S3Request(new SelectObjectContentRequestPrivate(S3Request::SelectObjectContentAction, this))
{

}

/*!
 * \reimp
 */
bool SelectObjectContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SelectObjectContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SelectObjectContentRequest::response(QNetworkReply * const reply) const
{
    return new SelectObjectContentResponse(*this, reply);
}

/*!
 * \class QtAws::S3::SelectObjectContentRequestPrivate
 * \brief The SelectObjectContentRequestPrivate class provides private implementation for SelectObjectContentRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a SelectObjectContentRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
SelectObjectContentRequestPrivate::SelectObjectContentRequestPrivate(
    const S3Request::Action action, SelectObjectContentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SelectObjectContentRequest
 * class' copy constructor.
 */
SelectObjectContentRequestPrivate::SelectObjectContentRequestPrivate(
    const SelectObjectContentRequestPrivate &other, SelectObjectContentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
