/*
    Copyright 2013-2018 Paul Colby

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

#include "liststreamconsumersrequest.h"
#include "liststreamconsumersrequest_p.h"
#include "liststreamconsumersresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListStreamConsumersRequest
 * \brief The ListStreamConsumersRequest class provides an interface for Kinesis ListStreamConsumers requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listStreamConsumers
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamConsumersRequest::ListStreamConsumersRequest(const ListStreamConsumersRequest &other)
    : KinesisRequest(new ListStreamConsumersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamConsumersRequest object.
 */
ListStreamConsumersRequest::ListStreamConsumersRequest()
    : KinesisRequest(new ListStreamConsumersRequestPrivate(KinesisRequest::ListStreamConsumersAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamConsumersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamConsumersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamConsumersRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamConsumersResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::ListStreamConsumersRequestPrivate
 * \brief The ListStreamConsumersRequestPrivate class provides private implementation for ListStreamConsumersRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListStreamConsumersRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
ListStreamConsumersRequestPrivate::ListStreamConsumersRequestPrivate(
    const KinesisRequest::Action action, ListStreamConsumersRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamConsumersRequest
 * class' copy constructor.
 */
ListStreamConsumersRequestPrivate::ListStreamConsumersRequestPrivate(
    const ListStreamConsumersRequestPrivate &other, ListStreamConsumersRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
