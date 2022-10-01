// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listspeakersrequest.h"
#include "listspeakersrequest_p.h"
#include "listspeakersresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListSpeakersRequest
 * \brief The ListSpeakersRequest class provides an interface for VoiceId ListSpeakers requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listSpeakers
 */

/*!
 * Constructs a copy of \a other.
 */
ListSpeakersRequest::ListSpeakersRequest(const ListSpeakersRequest &other)
    : VoiceIdRequest(new ListSpeakersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSpeakersRequest object.
 */
ListSpeakersRequest::ListSpeakersRequest()
    : VoiceIdRequest(new ListSpeakersRequestPrivate(VoiceIdRequest::ListSpeakersAction, this))
{

}

/*!
 * \reimp
 */
bool ListSpeakersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSpeakersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSpeakersRequest::response(QNetworkReply * const reply) const
{
    return new ListSpeakersResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::ListSpeakersRequestPrivate
 * \brief The ListSpeakersRequestPrivate class provides private implementation for ListSpeakersRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListSpeakersRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
ListSpeakersRequestPrivate::ListSpeakersRequestPrivate(
    const VoiceIdRequest::Action action, ListSpeakersRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSpeakersRequest
 * class' copy constructor.
 */
ListSpeakersRequestPrivate::ListSpeakersRequestPrivate(
    const ListSpeakersRequestPrivate &other, ListSpeakersRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
