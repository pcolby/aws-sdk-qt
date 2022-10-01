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

#include "listnotebookexecutionsrequest.h"
#include "listnotebookexecutionsrequest_p.h"
#include "listnotebookexecutionsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListNotebookExecutionsRequest
 * \brief The ListNotebookExecutionsRequest class provides an interface for Emr ListNotebookExecutions requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listNotebookExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotebookExecutionsRequest::ListNotebookExecutionsRequest(const ListNotebookExecutionsRequest &other)
    : EmrRequest(new ListNotebookExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotebookExecutionsRequest object.
 */
ListNotebookExecutionsRequest::ListNotebookExecutionsRequest()
    : EmrRequest(new ListNotebookExecutionsRequestPrivate(EmrRequest::ListNotebookExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNotebookExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListNotebookExecutionsRequestPrivate
 * \brief The ListNotebookExecutionsRequestPrivate class provides private implementation for ListNotebookExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListNotebookExecutionsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListNotebookExecutionsRequestPrivate::ListNotebookExecutionsRequestPrivate(
    const EmrRequest::Action action, ListNotebookExecutionsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookExecutionsRequest
 * class' copy constructor.
 */
ListNotebookExecutionsRequestPrivate::ListNotebookExecutionsRequestPrivate(
    const ListNotebookExecutionsRequestPrivate &other, ListNotebookExecutionsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
