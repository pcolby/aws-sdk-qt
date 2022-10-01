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

#include "getimagesrequest.h"
#include "getimagesrequest_p.h"
#include "getimagesresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetImagesRequest
 * \brief The GetImagesRequest class provides an interface for KinesisVideoArchivedMedia GetImages requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getImages
 */

/*!
 * Constructs a copy of \a other.
 */
GetImagesRequest::GetImagesRequest(const GetImagesRequest &other)
    : KinesisVideoArchivedMediaRequest(new GetImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImagesRequest object.
 */
GetImagesRequest::GetImagesRequest()
    : KinesisVideoArchivedMediaRequest(new GetImagesRequestPrivate(KinesisVideoArchivedMediaRequest::GetImagesAction, this))
{

}

/*!
 * \reimp
 */
bool GetImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImagesRequest::response(QNetworkReply * const reply) const
{
    return new GetImagesResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetImagesRequestPrivate
 * \brief The GetImagesRequestPrivate class provides private implementation for GetImagesRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetImagesRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
GetImagesRequestPrivate::GetImagesRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, GetImagesRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImagesRequest
 * class' copy constructor.
 */
GetImagesRequestPrivate::GetImagesRequestPrivate(
    const GetImagesRequestPrivate &other, GetImagesRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
