// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
