// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdashstreamingsessionurlrequest.h"
#include "getdashstreamingsessionurlrequest_p.h"
#include "getdashstreamingsessionurlresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetDASHStreamingSessionURLRequest
 * \brief The GetDASHStreamingSessionURLRequest class provides an interface for KinesisVideoArchivedMedia GetDASHStreamingSessionURL requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getDASHStreamingSessionURL
 */

/*!
 * Constructs a copy of \a other.
 */
GetDASHStreamingSessionURLRequest::GetDASHStreamingSessionURLRequest(const GetDASHStreamingSessionURLRequest &other)
    : KinesisVideoArchivedMediaRequest(new GetDASHStreamingSessionURLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDASHStreamingSessionURLRequest object.
 */
GetDASHStreamingSessionURLRequest::GetDASHStreamingSessionURLRequest()
    : KinesisVideoArchivedMediaRequest(new GetDASHStreamingSessionURLRequestPrivate(KinesisVideoArchivedMediaRequest::GetDASHStreamingSessionURLAction, this))
{

}

/*!
 * \reimp
 */
bool GetDASHStreamingSessionURLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDASHStreamingSessionURLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDASHStreamingSessionURLRequest::response(QNetworkReply * const reply) const
{
    return new GetDASHStreamingSessionURLResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetDASHStreamingSessionURLRequestPrivate
 * \brief The GetDASHStreamingSessionURLRequestPrivate class provides private implementation for GetDASHStreamingSessionURLRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetDASHStreamingSessionURLRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
GetDASHStreamingSessionURLRequestPrivate::GetDASHStreamingSessionURLRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, GetDASHStreamingSessionURLRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDASHStreamingSessionURLRequest
 * class' copy constructor.
 */
GetDASHStreamingSessionURLRequestPrivate::GetDASHStreamingSessionURLRequestPrivate(
    const GetDASHStreamingSessionURLRequestPrivate &other, GetDASHStreamingSessionURLRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
