// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinputrequest.h"
#include "deleteinputrequest_p.h"
#include "deleteinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputRequest
 * \brief The DeleteInputRequest class provides an interface for MediaLive DeleteInput requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInput
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInputRequest::DeleteInputRequest(const DeleteInputRequest &other)
    : MediaLiveRequest(new DeleteInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInputRequest object.
 */
DeleteInputRequest::DeleteInputRequest()
    : MediaLiveRequest(new DeleteInputRequestPrivate(MediaLiveRequest::DeleteInputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteInputRequestPrivate
 * \brief The DeleteInputRequestPrivate class provides private implementation for DeleteInputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteInputRequestPrivate::DeleteInputRequestPrivate(
    const MediaLiveRequest::Action action, DeleteInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInputRequest
 * class' copy constructor.
 */
DeleteInputRequestPrivate::DeleteInputRequestPrivate(
    const DeleteInputRequestPrivate &other, DeleteInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
