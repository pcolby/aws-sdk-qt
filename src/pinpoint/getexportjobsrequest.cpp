/*
    Copyright 2013-2018 Paul Colby

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

#include "getexportjobsrequest.h"
#include "getexportjobsrequest_p.h"
#include "getexportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobsRequest
 * \brief The GetExportJobsRequest class provides an interface for Pinpoint GetExportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportJobsRequest::GetExportJobsRequest(const GetExportJobsRequest &other)
    : PinpointRequest(new GetExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportJobsRequest object.
 */
GetExportJobsRequest::GetExportJobsRequest()
    : PinpointRequest(new GetExportJobsRequestPrivate(PinpointRequest::GetExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetExportJobsRequestPrivate
 * \brief The GetExportJobsRequestPrivate class provides private implementation for GetExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetExportJobsRequestPrivate::GetExportJobsRequestPrivate(
    const PinpointRequest::Action action, GetExportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportJobsRequest
 * class' copy constructor.
 */
GetExportJobsRequestPrivate::GetExportJobsRequestPrivate(
    const GetExportJobsRequestPrivate &other, GetExportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
