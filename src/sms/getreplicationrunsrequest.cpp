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

#include "getreplicationrunsrequest.h"
#include "getreplicationrunsrequest_p.h"
#include "getreplicationrunsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetReplicationRunsRequest
 * \brief The GetReplicationRunsRequest class provides an interface for SMS GetReplicationRuns requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::getReplicationRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationRunsRequest::GetReplicationRunsRequest(const GetReplicationRunsRequest &other)
    : SmsRequest(new GetReplicationRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationRunsRequest object.
 */
GetReplicationRunsRequest::GetReplicationRunsRequest()
    : SmsRequest(new GetReplicationRunsRequestPrivate(SmsRequest::GetReplicationRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReplicationRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationRunsResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::GetReplicationRunsRequestPrivate
 * \brief The GetReplicationRunsRequestPrivate class provides private implementation for GetReplicationRunsRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetReplicationRunsRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetReplicationRunsRequestPrivate::GetReplicationRunsRequestPrivate(
    const SmsRequest::Action action, GetReplicationRunsRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationRunsRequest
 * class' copy constructor.
 */
GetReplicationRunsRequestPrivate::GetReplicationRunsRequestPrivate(
    const GetReplicationRunsRequestPrivate &other, GetReplicationRunsRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
