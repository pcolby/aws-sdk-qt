// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putitemsrequest.h"
#include "putitemsrequest_p.h"
#include "putitemsresponse.h"
#include "personalizeeventsrequest_p.h"

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PutItemsRequest
 * \brief The PutItemsRequest class provides an interface for PersonalizeEvents PutItems requests.
 *
 * \inmodule QtAwsPersonalizeEvents
 *
 *  Amazon Personalize can consume real-time user event data, such as <i>stream</i> or <i>click</i> data, and use it for
 *  model training either alone or combined with historical data. For more information see <a
 *  href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 *
 * \sa PersonalizeEventsClient::putItems
 */

/*!
 * Constructs a copy of \a other.
 */
PutItemsRequest::PutItemsRequest(const PutItemsRequest &other)
    : PersonalizeEventsRequest(new PutItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutItemsRequest object.
 */
PutItemsRequest::PutItemsRequest()
    : PersonalizeEventsRequest(new PutItemsRequestPrivate(PersonalizeEventsRequest::PutItemsAction, this))
{

}

/*!
 * \reimp
 */
bool PutItemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutItemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutItemsRequest::response(QNetworkReply * const reply) const
{
    return new PutItemsResponse(*this, reply);
}

/*!
 * \class QtAws::PersonalizeEvents::PutItemsRequestPrivate
 * \brief The PutItemsRequestPrivate class provides private implementation for PutItemsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PutItemsRequestPrivate object for PersonalizeEvents \a action,
 * with public implementation \a q.
 */
PutItemsRequestPrivate::PutItemsRequestPrivate(
    const PersonalizeEventsRequest::Action action, PutItemsRequest * const q)
    : PersonalizeEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutItemsRequest
 * class' copy constructor.
 */
PutItemsRequestPrivate::PutItemsRequestPrivate(
    const PutItemsRequestPrivate &other, PutItemsRequest * const q)
    : PersonalizeEventsRequestPrivate(other, q)
{

}

} // namespace PersonalizeEvents
} // namespace QtAws
