// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationjobsrequest.h"
#include "getreplicationjobsrequest_p.h"
#include "getreplicationjobsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetReplicationJobsRequest
 * \brief The GetReplicationJobsRequest class provides an interface for Sms GetReplicationJobs requests.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
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
 * \class QtAws::Sms::GetReplicationJobsRequestPrivate
 * \brief The GetReplicationJobsRequestPrivate class provides private implementation for GetReplicationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSms
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

} // namespace Sms
} // namespace QtAws
