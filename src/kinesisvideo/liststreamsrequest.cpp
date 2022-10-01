// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::ListStreamsRequest
 * \brief The ListStreamsRequest class provides an interface for KinesisVideo ListStreams requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::listStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : KinesisVideoRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : KinesisVideoRequest(new ListStreamsRequestPrivate(KinesisVideoRequest::ListStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::ListStreamsRequestPrivate
 * \brief The ListStreamsRequestPrivate class provides private implementation for ListStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a ListStreamsRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const KinesisVideoRequest::Action action, ListStreamsRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamsRequest
 * class' copy constructor.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const ListStreamsRequestPrivate &other, ListStreamsRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
