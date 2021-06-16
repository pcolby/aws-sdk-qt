/*
    Copyright 2013-2021 Paul Colby

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

#include "getcliprequest.h"
#include "getcliprequest_p.h"
#include "getclipresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetClipRequest
 * \brief The GetClipRequest class provides an interface for KinesisVideoArchivedMedia GetClip requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getClip
 */

/*!
 * Constructs a copy of \a other.
 */
GetClipRequest::GetClipRequest(const GetClipRequest &other)
    : KinesisVideoArchivedMediaRequest(new GetClipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClipRequest object.
 */
GetClipRequest::GetClipRequest()
    : KinesisVideoArchivedMediaRequest(new GetClipRequestPrivate(KinesisVideoArchivedMediaRequest::GetClipAction, this))
{

}

/*!
 * \reimp
 */
bool GetClipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClipRequest::response(QNetworkReply * const reply) const
{
    return new GetClipResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetClipRequestPrivate
 * \brief The GetClipRequestPrivate class provides private implementation for GetClipRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetClipRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
GetClipRequestPrivate::GetClipRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, GetClipRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClipRequest
 * class' copy constructor.
 */
GetClipRequestPrivate::GetClipRequestPrivate(
    const GetClipRequestPrivate &other, GetClipRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
