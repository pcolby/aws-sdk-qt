/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
