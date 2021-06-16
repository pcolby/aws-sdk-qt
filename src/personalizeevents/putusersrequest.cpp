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

#include "putusersrequest.h"
#include "putusersrequest_p.h"
#include "putusersresponse.h"
#include "personalizeeventsrequest_p.h"

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PutUsersRequest
 * \brief The PutUsersRequest class provides an interface for PersonalizeEvents PutUsers requests.
 *
 * \inmodule QtAwsPersonalizeEvents
 *
 *  Amazon Personalize can consume real-time user event data, such as <i>stream</i> or <i>click</i> data, and use it for
 *  model training either alone or combined with historical data. For more information see <a
 *  href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 *
 * \sa PersonalizeEventsClient::putUsers
 */

/*!
 * Constructs a copy of \a other.
 */
PutUsersRequest::PutUsersRequest(const PutUsersRequest &other)
    : PersonalizeEventsRequest(new PutUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutUsersRequest object.
 */
PutUsersRequest::PutUsersRequest()
    : PersonalizeEventsRequest(new PutUsersRequestPrivate(PersonalizeEventsRequest::PutUsersAction, this))
{

}

/*!
 * \reimp
 */
bool PutUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutUsersRequest::response(QNetworkReply * const reply) const
{
    return new PutUsersResponse(*this, reply);
}

/*!
 * \class QtAws::PersonalizeEvents::PutUsersRequestPrivate
 * \brief The PutUsersRequestPrivate class provides private implementation for PutUsersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PutUsersRequestPrivate object for PersonalizeEvents \a action,
 * with public implementation \a q.
 */
PutUsersRequestPrivate::PutUsersRequestPrivate(
    const PersonalizeEventsRequest::Action action, PutUsersRequest * const q)
    : PersonalizeEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutUsersRequest
 * class' copy constructor.
 */
PutUsersRequestPrivate::PutUsersRequestPrivate(
    const PutUsersRequestPrivate &other, PutUsersRequest * const q)
    : PersonalizeEventsRequestPrivate(other, q)
{

}

} // namespace PersonalizeEvents
} // namespace QtAws
