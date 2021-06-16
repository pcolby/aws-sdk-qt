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

#include "getmediaforfragmentlistrequest.h"
#include "getmediaforfragmentlistrequest_p.h"
#include "getmediaforfragmentlistresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetMediaForFragmentListRequest
 * \brief The GetMediaForFragmentListRequest class provides an interface for KinesisVideoArchivedMedia GetMediaForFragmentList requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getMediaForFragmentList
 */

/*!
 * Constructs a copy of \a other.
 */
GetMediaForFragmentListRequest::GetMediaForFragmentListRequest(const GetMediaForFragmentListRequest &other)
    : KinesisVideoArchivedMediaRequest(new GetMediaForFragmentListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMediaForFragmentListRequest object.
 */
GetMediaForFragmentListRequest::GetMediaForFragmentListRequest()
    : KinesisVideoArchivedMediaRequest(new GetMediaForFragmentListRequestPrivate(KinesisVideoArchivedMediaRequest::GetMediaForFragmentListAction, this))
{

}

/*!
 * \reimp
 */
bool GetMediaForFragmentListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMediaForFragmentListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMediaForFragmentListRequest::response(QNetworkReply * const reply) const
{
    return new GetMediaForFragmentListResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetMediaForFragmentListRequestPrivate
 * \brief The GetMediaForFragmentListRequestPrivate class provides private implementation for GetMediaForFragmentListRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetMediaForFragmentListRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
GetMediaForFragmentListRequestPrivate::GetMediaForFragmentListRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, GetMediaForFragmentListRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMediaForFragmentListRequest
 * class' copy constructor.
 */
GetMediaForFragmentListRequestPrivate::GetMediaForFragmentListRequestPrivate(
    const GetMediaForFragmentListRequestPrivate &other, GetMediaForFragmentListRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
