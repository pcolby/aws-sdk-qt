// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puteventsrequest.h"
#include "puteventsrequest_p.h"
#include "puteventsresponse.h"
#include "personalizeeventsrequest_p.h"

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PutEventsRequest
 * \brief The PutEventsRequest class provides an interface for PersonalizeEvents PutEvents requests.
 *
 * \inmodule QtAwsPersonalizeEvents
 *
 *  Amazon Personalize can consume real-time user event data, such as <i>stream</i> or <i>click</i> data, and use it for
 *  model training either alone or combined with historical data. For more information see <a
 *  href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 *
 * \sa PersonalizeEventsClient::putEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventsRequest::PutEventsRequest(const PutEventsRequest &other)
    : PersonalizeEventsRequest(new PutEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventsRequest object.
 */
PutEventsRequest::PutEventsRequest()
    : PersonalizeEventsRequest(new PutEventsRequestPrivate(PersonalizeEventsRequest::PutEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventsResponse(*this, reply);
}

/*!
 * \class QtAws::PersonalizeEvents::PutEventsRequestPrivate
 * \brief The PutEventsRequestPrivate class provides private implementation for PutEventsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PutEventsRequestPrivate object for PersonalizeEvents \a action,
 * with public implementation \a q.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PersonalizeEventsRequest::Action action, PutEventsRequest * const q)
    : PersonalizeEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventsRequest
 * class' copy constructor.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PutEventsRequestPrivate &other, PutEventsRequest * const q)
    : PersonalizeEventsRequestPrivate(other, q)
{

}

} // namespace PersonalizeEvents
} // namespace QtAws
