// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
