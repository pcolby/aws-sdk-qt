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

#include "liststepsrequest.h"
#include "liststepsrequest_p.h"
#include "liststepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListStepsRequest
 * \brief The ListStepsRequest class provides an interface for EMR ListSteps requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listSteps
 */

/*!
 * Constructs a copy of \a other.
 */
ListStepsRequest::ListStepsRequest(const ListStepsRequest &other)
    : EmrRequest(new ListStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStepsRequest object.
 */
ListStepsRequest::ListStepsRequest()
    : EmrRequest(new ListStepsRequestPrivate(EmrRequest::ListStepsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStepsRequest::response(QNetworkReply * const reply) const
{
    return new ListStepsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::ListStepsRequestPrivate
 * \brief The ListStepsRequestPrivate class provides private implementation for ListStepsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListStepsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListStepsRequestPrivate::ListStepsRequestPrivate(
    const EmrRequest::Action action, ListStepsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStepsRequest
 * class' copy constructor.
 */
ListStepsRequestPrivate::ListStepsRequestPrivate(
    const ListStepsRequestPrivate &other, ListStepsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
