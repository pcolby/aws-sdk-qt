// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
