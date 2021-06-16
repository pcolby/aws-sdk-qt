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

#include "listenvironmentsrequest.h"
#include "listenvironmentsrequest_p.h"
#include "listenvironmentsresponse.h"
#include "mwaarequest_p.h"

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::ListEnvironmentsRequest
 * \brief The ListEnvironmentsRequest class provides an interface for MWAA ListEnvironments requests.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 *
 * \sa MwaaClient::listEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest(const ListEnvironmentsRequest &other)
    : MwaaRequest(new ListEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentsRequest object.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest()
    : MwaaRequest(new ListEnvironmentsRequestPrivate(MwaaRequest::ListEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::MWAA::ListEnvironmentsRequestPrivate
 * \brief The ListEnvironmentsRequestPrivate class provides private implementation for ListEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a ListEnvironmentsRequestPrivate object for Mwaa \a action,
 * with public implementation \a q.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const MwaaRequest::Action action, ListEnvironmentsRequest * const q)
    : MwaaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentsRequest
 * class' copy constructor.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const ListEnvironmentsRequestPrivate &other, ListEnvironmentsRequest * const q)
    : MwaaRequestPrivate(other, q)
{

}

} // namespace MWAA
} // namespace QtAws
