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

#include "createscheduledqueryrequest.h"
#include "createscheduledqueryrequest_p.h"
#include "createscheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::CreateScheduledQueryRequest
 * \brief The CreateScheduledQueryRequest class provides an interface for TimestreamQuery CreateScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::createScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
CreateScheduledQueryRequest::CreateScheduledQueryRequest(const CreateScheduledQueryRequest &other)
    : TimestreamQueryRequest(new CreateScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateScheduledQueryRequest object.
 */
CreateScheduledQueryRequest::CreateScheduledQueryRequest()
    : TimestreamQueryRequest(new CreateScheduledQueryRequestPrivate(TimestreamQueryRequest::CreateScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new CreateScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::CreateScheduledQueryRequestPrivate
 * \brief The CreateScheduledQueryRequestPrivate class provides private implementation for CreateScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a CreateScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
CreateScheduledQueryRequestPrivate::CreateScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, CreateScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateScheduledQueryRequest
 * class' copy constructor.
 */
CreateScheduledQueryRequestPrivate::CreateScheduledQueryRequestPrivate(
    const CreateScheduledQueryRequestPrivate &other, CreateScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
