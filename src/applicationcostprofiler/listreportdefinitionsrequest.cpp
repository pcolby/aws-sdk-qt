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

#include "listreportdefinitionsrequest.h"
#include "listreportdefinitionsrequest_p.h"
#include "listreportdefinitionsresponse.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ListReportDefinitionsRequest
 * \brief The ListReportDefinitionsRequest class provides an interface for ApplicationCostProfiler ListReportDefinitions requests.
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
 * \sa ApplicationCostProfilerClient::listReportDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListReportDefinitionsRequest::ListReportDefinitionsRequest(const ListReportDefinitionsRequest &other)
    : ApplicationCostProfilerRequest(new ListReportDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReportDefinitionsRequest object.
 */
ListReportDefinitionsRequest::ListReportDefinitionsRequest()
    : ApplicationCostProfilerRequest(new ListReportDefinitionsRequestPrivate(ApplicationCostProfilerRequest::ListReportDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReportDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReportDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReportDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListReportDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationCostProfiler::ListReportDefinitionsRequestPrivate
 * \brief The ListReportDefinitionsRequestPrivate class provides private implementation for ListReportDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ListReportDefinitionsRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
ListReportDefinitionsRequestPrivate::ListReportDefinitionsRequestPrivate(
    const ApplicationCostProfilerRequest::Action action, ListReportDefinitionsRequest * const q)
    : ApplicationCostProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReportDefinitionsRequest
 * class' copy constructor.
 */
ListReportDefinitionsRequestPrivate::ListReportDefinitionsRequestPrivate(
    const ListReportDefinitionsRequestPrivate &other, ListReportDefinitionsRequest * const q)
    : ApplicationCostProfilerRequestPrivate(other, q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
