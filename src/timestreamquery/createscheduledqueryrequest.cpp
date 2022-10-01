// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
