// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
