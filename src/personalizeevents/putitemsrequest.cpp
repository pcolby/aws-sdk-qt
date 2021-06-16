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
