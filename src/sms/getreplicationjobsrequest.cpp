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

#include "getreplicationjobsrequest.h"
#include "getreplicationjobsrequest_p.h"
#include "getreplicationjobsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetReplicationJobsRequest
 * \brief The GetReplicationJobsRequest class provides an interface for SMS GetReplicationJobs requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::getReplicationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationJobsRequest::GetReplicationJobsRequest(const GetReplicationJobsRequest &other)
    : SMSRequest(new GetReplicationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationJobsRequest object.
 */
GetReplicationJobsRequest::GetReplicationJobsRequest()
    : SMSRequest(new GetReplicationJobsRequestPrivate(SMSRequest::GetReplicationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReplicationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::GetReplicationJobsRequestPrivate
 * \brief The GetReplicationJobsRequestPrivate class provides private implementation for GetReplicationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetReplicationJobsRequestPrivate object for SMS \a action,
 * with public implementation \a q.
 */
GetReplicationJobsRequestPrivate::GetReplicationJobsRequestPrivate(
    const SMSRequest::Action action, GetReplicationJobsRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationJobsRequest
 * class' copy constructor.
 */
GetReplicationJobsRequestPrivate::GetReplicationJobsRequestPrivate(
    const GetReplicationJobsRequestPrivate &other, GetReplicationJobsRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
