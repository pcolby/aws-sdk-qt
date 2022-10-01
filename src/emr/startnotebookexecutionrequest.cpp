// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
