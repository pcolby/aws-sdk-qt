// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereportdefinitionrequest.h"
#include "updatereportdefinitionrequest_p.h"
#include "updatereportdefinitionresponse.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::UpdateReportDefinitionRequest
 * \brief The UpdateReportDefinitionRequest class provides an interface for ApplicationCostProfiler UpdateReportDefinition requests.
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
 * \sa ApplicationCostProfilerClient::updateReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReportDefinitionRequest::UpdateReportDefinitionRequest(const UpdateReportDefinitionRequest &other)
    : ApplicationCostProfilerRequest(new UpdateReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReportDefinitionRequest object.
 */
UpdateReportDefinitionRequest::UpdateReportDefinitionRequest()
    : ApplicationCostProfilerRequest(new UpdateReportDefinitionRequestPrivate(ApplicationCostProfilerRequest::UpdateReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationCostProfiler::UpdateReportDefinitionRequestPrivate
 * \brief The UpdateReportDefinitionRequestPrivate class provides private implementation for UpdateReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a UpdateReportDefinitionRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
UpdateReportDefinitionRequestPrivate::UpdateReportDefinitionRequestPrivate(
    const ApplicationCostProfilerRequest::Action action, UpdateReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReportDefinitionRequest
 * class' copy constructor.
 */
UpdateReportDefinitionRequestPrivate::UpdateReportDefinitionRequestPrivate(
    const UpdateReportDefinitionRequestPrivate &other, UpdateReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(other, q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
