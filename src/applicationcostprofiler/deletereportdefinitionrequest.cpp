// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportdefinitionrequest.h"
#include "deletereportdefinitionrequest_p.h"
#include "deletereportdefinitionresponse.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::DeleteReportDefinitionRequest
 * \brief The DeleteReportDefinitionRequest class provides an interface for ApplicationCostProfiler DeleteReportDefinition requests.
 *
 * \inmodule QtAwsApplicationCostProfiler
 *
 *  This reference provides descriptions of the AWS Application Cost Profiler
 * 
 *  API>
 * 
 *  The AWS Application Cost Profiler API provides programmatic access to view, create, update, and delete application cost
 *  report definitions, as well as to import your usage data into the Application Cost Profiler
 * 
 *  service>
 * 
 *  For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/application-cost-profiler/latest/userguide/introduction.html">AWS Application Cost
 *  Profiler User
 *
 * \sa ApplicationCostProfilerClient::deleteReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReportDefinitionRequest::DeleteReportDefinitionRequest(const DeleteReportDefinitionRequest &other)
    : ApplicationCostProfilerRequest(new DeleteReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReportDefinitionRequest object.
 */
DeleteReportDefinitionRequest::DeleteReportDefinitionRequest()
    : ApplicationCostProfilerRequest(new DeleteReportDefinitionRequestPrivate(ApplicationCostProfilerRequest::DeleteReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationCostProfiler::DeleteReportDefinitionRequestPrivate
 * \brief The DeleteReportDefinitionRequestPrivate class provides private implementation for DeleteReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a DeleteReportDefinitionRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
DeleteReportDefinitionRequestPrivate::DeleteReportDefinitionRequestPrivate(
    const ApplicationCostProfilerRequest::Action action, DeleteReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReportDefinitionRequest
 * class' copy constructor.
 */
DeleteReportDefinitionRequestPrivate::DeleteReportDefinitionRequestPrivate(
    const DeleteReportDefinitionRequestPrivate &other, DeleteReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(other, q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
