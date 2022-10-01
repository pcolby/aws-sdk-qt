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
