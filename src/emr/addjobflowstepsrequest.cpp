// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addjobflowstepsrequest.h"
#include "addjobflowstepsrequest_p.h"
#include "addjobflowstepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::AddJobFlowStepsRequest
 * \brief The AddJobFlowStepsRequest class provides an interface for Emr AddJobFlowSteps requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::addJobFlowSteps
 */

/*!
 * Constructs a copy of \a other.
 */
AddJobFlowStepsRequest::AddJobFlowStepsRequest(const AddJobFlowStepsRequest &other)
    : EmrRequest(new AddJobFlowStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddJobFlowStepsRequest object.
 */
AddJobFlowStepsRequest::AddJobFlowStepsRequest()
    : EmrRequest(new AddJobFlowStepsRequestPrivate(EmrRequest::AddJobFlowStepsAction, this))
{

}

/*!
 * \reimp
 */
bool AddJobFlowStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddJobFlowStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddJobFlowStepsRequest::response(QNetworkReply * const reply) const
{
    return new AddJobFlowStepsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::AddJobFlowStepsRequestPrivate
 * \brief The AddJobFlowStepsRequestPrivate class provides private implementation for AddJobFlowStepsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a AddJobFlowStepsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
AddJobFlowStepsRequestPrivate::AddJobFlowStepsRequestPrivate(
    const EmrRequest::Action action, AddJobFlowStepsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddJobFlowStepsRequest
 * class' copy constructor.
 */
AddJobFlowStepsRequestPrivate::AddJobFlowStepsRequestPrivate(
    const AddJobFlowStepsRequestPrivate &other, AddJobFlowStepsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
