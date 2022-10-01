// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinputrequest.h"
#include "updateinputrequest_p.h"
#include "updateinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputRequest
 * \brief The UpdateInputRequest class provides an interface for MediaLive UpdateInput requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInput
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInputRequest::UpdateInputRequest(const UpdateInputRequest &other)
    : MediaLiveRequest(new UpdateInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInputRequest object.
 */
UpdateInputRequest::UpdateInputRequest()
    : MediaLiveRequest(new UpdateInputRequestPrivate(MediaLiveRequest::UpdateInputAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateInputRequestPrivate
 * \brief The UpdateInputRequestPrivate class provides private implementation for UpdateInputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const MediaLiveRequest::Action action, UpdateInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputRequest
 * class' copy constructor.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const UpdateInputRequestPrivate &other, UpdateInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
