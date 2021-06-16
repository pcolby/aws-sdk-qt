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

#include "putreportdefinitionrequest.h"
#include "putreportdefinitionrequest_p.h"
#include "putreportdefinitionresponse.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::PutReportDefinitionRequest
 * \brief The PutReportDefinitionRequest class provides an interface for ApplicationCostProfiler PutReportDefinition requests.
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
 * \sa ApplicationCostProfilerClient::putReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
PutReportDefinitionRequest::PutReportDefinitionRequest(const PutReportDefinitionRequest &other)
    : ApplicationCostProfilerRequest(new PutReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutReportDefinitionRequest object.
 */
PutReportDefinitionRequest::PutReportDefinitionRequest()
    : ApplicationCostProfilerRequest(new PutReportDefinitionRequestPrivate(ApplicationCostProfilerRequest::PutReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool PutReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new PutReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationCostProfiler::PutReportDefinitionRequestPrivate
 * \brief The PutReportDefinitionRequestPrivate class provides private implementation for PutReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a PutReportDefinitionRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
PutReportDefinitionRequestPrivate::PutReportDefinitionRequestPrivate(
    const ApplicationCostProfilerRequest::Action action, PutReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutReportDefinitionRequest
 * class' copy constructor.
 */
PutReportDefinitionRequestPrivate::PutReportDefinitionRequestPrivate(
    const PutReportDefinitionRequestPrivate &other, PutReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(other, q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
