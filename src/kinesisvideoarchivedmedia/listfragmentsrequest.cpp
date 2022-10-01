// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfragmentsrequest.h"
#include "listfragmentsrequest_p.h"
#include "listfragmentsresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::ListFragmentsRequest
 * \brief The ListFragmentsRequest class provides an interface for KinesisVideoArchivedMedia ListFragments requests.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::listFragments
 */

/*!
 * Constructs a copy of \a other.
 */
ListFragmentsRequest::ListFragmentsRequest(const ListFragmentsRequest &other)
    : KinesisVideoArchivedMediaRequest(new ListFragmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFragmentsRequest object.
 */
ListFragmentsRequest::ListFragmentsRequest()
    : KinesisVideoArchivedMediaRequest(new ListFragmentsRequestPrivate(KinesisVideoArchivedMediaRequest::ListFragmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFragmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFragmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFragmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListFragmentsResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::ListFragmentsRequestPrivate
 * \brief The ListFragmentsRequestPrivate class provides private implementation for ListFragmentsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a ListFragmentsRequestPrivate object for KinesisVideoArchivedMedia \a action,
 * with public implementation \a q.
 */
ListFragmentsRequestPrivate::ListFragmentsRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, ListFragmentsRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFragmentsRequest
 * class' copy constructor.
 */
ListFragmentsRequestPrivate::ListFragmentsRequestPrivate(
    const ListFragmentsRequestPrivate &other, ListFragmentsRequest * const q)
    : KinesisVideoArchivedMediaRequestPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
