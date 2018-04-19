/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getimportjobsrequest.h"
#include "getimportjobsrequest_p.h"
#include "getimportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobsRequest
 * \brief The GetImportJobsRequest class provides an interface for Pinpoint GetImportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportJobsRequest::GetImportJobsRequest(const GetImportJobsRequest &other)
    : PinpointRequest(new GetImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportJobsRequest object.
 */
GetImportJobsRequest::GetImportJobsRequest()
    : PinpointRequest(new GetImportJobsRequestPrivate(PinpointRequest::GetImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetImportJobsRequestPrivate
 * \brief The GetImportJobsRequestPrivate class provides private implementation for GetImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a GetImportJobsRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
GetImportJobsRequestPrivate::GetImportJobsRequestPrivate(
    const PinpointRequest::Action action, GetImportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobsRequest
 * class' copy constructor.
 */
GetImportJobsRequestPrivate::GetImportJobsRequestPrivate(
    const GetImportJobsRequestPrivate &other, GetImportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
