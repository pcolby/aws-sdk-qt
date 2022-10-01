// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmediarequest.h"
#include "getmediarequest_p.h"
#include "getmediaresponse.h"
#include "kinesisvideomediarequest_p.h"

namespace QtAws {
namespace KinesisVideoMedia {

/*!
 * \class QtAws::KinesisVideoMedia::GetMediaRequest
 * \brief The GetMediaRequest class provides an interface for KinesisVideoMedia GetMedia requests.
 *
 * \inmodule QtAwsKinesisVideoMedia
 *
 *
 * \sa KinesisVideoMediaClient::getMedia
 */

/*!
 * Constructs a copy of \a other.
 */
GetMediaRequest::GetMediaRequest(const GetMediaRequest &other)
    : KinesisVideoMediaRequest(new GetMediaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMediaRequest object.
 */
GetMediaRequest::GetMediaRequest()
    : KinesisVideoMediaRequest(new GetMediaRequestPrivate(KinesisVideoMediaRequest::GetMediaAction, this))
{

}

/*!
 * \reimp
 */
bool GetMediaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMediaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMediaRequest::response(QNetworkReply * const reply) const
{
    return new GetMediaResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoMedia::GetMediaRequestPrivate
 * \brief The GetMediaRequestPrivate class provides private implementation for GetMediaRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a GetMediaRequestPrivate object for KinesisVideoMedia \a action,
 * with public implementation \a q.
 */
GetMediaRequestPrivate::GetMediaRequestPrivate(
    const KinesisVideoMediaRequest::Action action, GetMediaRequest * const q)
    : KinesisVideoMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMediaRequest
 * class' copy constructor.
 */
GetMediaRequestPrivate::GetMediaRequestPrivate(
    const GetMediaRequestPrivate &other, GetMediaRequest * const q)
    : KinesisVideoMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoMedia
} // namespace QtAws
