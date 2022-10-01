// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfileuploadurlrequest.h"
#include "getfileuploadurlrequest_p.h"
#include "getfileuploadurlresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetFileUploadURLRequest
 * \brief The GetFileUploadURLRequest class provides an interface for MTurk GetFileUploadURL requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getFileUploadURL
 */

/*!
 * Constructs a copy of \a other.
 */
GetFileUploadURLRequest::GetFileUploadURLRequest(const GetFileUploadURLRequest &other)
    : MTurkRequest(new GetFileUploadURLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFileUploadURLRequest object.
 */
GetFileUploadURLRequest::GetFileUploadURLRequest()
    : MTurkRequest(new GetFileUploadURLRequestPrivate(MTurkRequest::GetFileUploadURLAction, this))
{

}

/*!
 * \reimp
 */
bool GetFileUploadURLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFileUploadURLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFileUploadURLRequest::response(QNetworkReply * const reply) const
{
    return new GetFileUploadURLResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetFileUploadURLRequestPrivate
 * \brief The GetFileUploadURLRequestPrivate class provides private implementation for GetFileUploadURLRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetFileUploadURLRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
GetFileUploadURLRequestPrivate::GetFileUploadURLRequestPrivate(
    const MTurkRequest::Action action, GetFileUploadURLRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFileUploadURLRequest
 * class' copy constructor.
 */
GetFileUploadURLRequestPrivate::GetFileUploadURLRequestPrivate(
    const GetFileUploadURLRequestPrivate &other, GetFileUploadURLRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
