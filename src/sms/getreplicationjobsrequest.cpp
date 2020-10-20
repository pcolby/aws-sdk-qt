/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
 *
 * \sa SmsClient::getReplicationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationJobsRequest::GetReplicationJobsRequest(const GetReplicationJobsRequest &other)
    : SmsRequest(new GetReplicationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationJobsRequest object.
 */
GetReplicationJobsRequest::GetReplicationJobsRequest()
    : SmsRequest(new GetReplicationJobsRequestPrivate(SmsRequest::GetReplicationJobsAction, this))
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
 * Constructs a GetReplicationJobsRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetReplicationJobsRequestPrivate::GetReplicationJobsRequestPrivate(
    const SmsRequest::Action action, GetReplicationJobsRequest * const q)
    : SmsRequestPrivate(action, q)
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
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
