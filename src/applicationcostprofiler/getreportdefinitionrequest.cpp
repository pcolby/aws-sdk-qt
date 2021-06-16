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

#include "getreportdefinitionrequest.h"
#include "getreportdefinitionrequest_p.h"
#include "getreportdefinitionresponse.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::GetReportDefinitionRequest
 * \brief The GetReportDefinitionRequest class provides an interface for ApplicationCostProfiler GetReportDefinition requests.
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
 * \sa ApplicationCostProfilerClient::getReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetReportDefinitionRequest::GetReportDefinitionRequest(const GetReportDefinitionRequest &other)
    : ApplicationCostProfilerRequest(new GetReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReportDefinitionRequest object.
 */
GetReportDefinitionRequest::GetReportDefinitionRequest()
    : ApplicationCostProfilerRequest(new GetReportDefinitionRequestPrivate(ApplicationCostProfilerRequest::GetReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationCostProfiler::GetReportDefinitionRequestPrivate
 * \brief The GetReportDefinitionRequestPrivate class provides private implementation for GetReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a GetReportDefinitionRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
GetReportDefinitionRequestPrivate::GetReportDefinitionRequestPrivate(
    const ApplicationCostProfilerRequest::Action action, GetReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReportDefinitionRequest
 * class' copy constructor.
 */
GetReportDefinitionRequestPrivate::GetReportDefinitionRequestPrivate(
    const GetReportDefinitionRequestPrivate &other, GetReportDefinitionRequest * const q)
    : ApplicationCostProfilerRequestPrivate(other, q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
