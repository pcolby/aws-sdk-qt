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

#include "stopnotebookexecutionrequest.h"
#include "stopnotebookexecutionrequest_p.h"
#include "stopnotebookexecutionresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::StopNotebookExecutionRequest
 * \brief The StopNotebookExecutionRequest class provides an interface for Emr StopNotebookExecution requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::stopNotebookExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StopNotebookExecutionRequest::StopNotebookExecutionRequest(const StopNotebookExecutionRequest &other)
    : EmrRequest(new StopNotebookExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopNotebookExecutionRequest object.
 */
StopNotebookExecutionRequest::StopNotebookExecutionRequest()
    : EmrRequest(new StopNotebookExecutionRequestPrivate(EmrRequest::StopNotebookExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StopNotebookExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopNotebookExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopNotebookExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StopNotebookExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::StopNotebookExecutionRequestPrivate
 * \brief The StopNotebookExecutionRequestPrivate class provides private implementation for StopNotebookExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a StopNotebookExecutionRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
StopNotebookExecutionRequestPrivate::StopNotebookExecutionRequestPrivate(
    const EmrRequest::Action action, StopNotebookExecutionRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopNotebookExecutionRequest
 * class' copy constructor.
 */
StopNotebookExecutionRequestPrivate::StopNotebookExecutionRequestPrivate(
    const StopNotebookExecutionRequestPrivate &other, StopNotebookExecutionRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
