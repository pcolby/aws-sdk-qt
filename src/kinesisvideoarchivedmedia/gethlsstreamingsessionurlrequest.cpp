// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethlsstreamingsessionurlrequest.h"
#include "gethlsstreamingsessionurlrequest_p.h"
#include "gethlsstreamingsessionurlresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetHLSStreamingSessionURLRequest
 * \brief The GetHLSStreamingSessionURLRequest class provides an interface for KinesisVideoArchivedMedia GetHLSStreamingSessionURL requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getHLSStreamingSessionURL
 */

/*!
 * Constructs a copy of \a other.
 */
GetHLSStreamingSessionURLRequest::GetHLSStreamingSessionURLRequest(const GetHLSStreamingSessionURLRequest &other)
    : KinesisVideoArchivedMediaRequest(new GetHLSStreamingSessionURLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHLSStreamingSessionURLRequest object.
 */
GetHLSStreamingSessionURLRequest::GetHLSStreamingSessionURLRequest()
    : KinesisVideoArchivedMediaRequest(new GetHLSStreamingSessionURLRequestPrivate(KinesisVideoArchivedMediaRequest::GetHLSStreamingSessionURLAction, this))
{

}

/*!
 * \reimp
 */
bool GetHLSStreamingSessionURLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHLSStreamingSessionURLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHLSStreamingSessionURLRequest::response(QNetworkReply * const reply) const
{
    return new GetHLSStreamingSessionURLResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetHLSStreamingSessionURLRequestPrivate
 * \brief The GetHLSStreamingSessionURLRequestPrivate class provides private implementation for GetHLSStreamingSessionURLRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetHLSStreamingSessionURLRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
GetHLSStreamingSessionURLRequestPrivate::GetHLSStreamingSessionURLRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, GetHLSStreamingSessionURLRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHLSStreamingSessionURLRequest
 * class' copy constructor.
 */
GetHLSStreamingSessionURLRequestPrivate::GetHLSStreamingSessionURLRequestPrivate(
    const GetHLSStreamingSessionURLRequestPrivate &other, GetHLSStreamingSessionURLRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
