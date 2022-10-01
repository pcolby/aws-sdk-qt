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

#include "startnotebookexecutionrequest.h"
#include "startnotebookexecutionrequest_p.h"
#include "startnotebookexecutionresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::StartNotebookExecutionRequest
 * \brief The StartNotebookExecutionRequest class provides an interface for Emr StartNotebookExecution requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::startNotebookExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartNotebookExecutionRequest::StartNotebookExecutionRequest(const StartNotebookExecutionRequest &other)
    : EmrRequest(new StartNotebookExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartNotebookExecutionRequest object.
 */
StartNotebookExecutionRequest::StartNotebookExecutionRequest()
    : EmrRequest(new StartNotebookExecutionRequestPrivate(EmrRequest::StartNotebookExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartNotebookExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartNotebookExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartNotebookExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartNotebookExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::StartNotebookExecutionRequestPrivate
 * \brief The StartNotebookExecutionRequestPrivate class provides private implementation for StartNotebookExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a StartNotebookExecutionRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
StartNotebookExecutionRequestPrivate::StartNotebookExecutionRequestPrivate(
    const EmrRequest::Action action, StartNotebookExecutionRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartNotebookExecutionRequest
 * class' copy constructor.
 */
StartNotebookExecutionRequestPrivate::StartNotebookExecutionRequestPrivate(
    const StartNotebookExecutionRequestPrivate &other, StartNotebookExecutionRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
