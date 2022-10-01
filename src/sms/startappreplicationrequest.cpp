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

#include "startappreplicationrequest.h"
#include "startappreplicationrequest_p.h"
#include "startappreplicationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StartAppReplicationRequest
 * \brief The StartAppReplicationRequest class provides an interface for Sms StartAppReplication requests.
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
 * \sa SmsClient::startAppReplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartAppReplicationRequest::StartAppReplicationRequest(const StartAppReplicationRequest &other)
    : SmsRequest(new StartAppReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAppReplicationRequest object.
 */
StartAppReplicationRequest::StartAppReplicationRequest()
    : SmsRequest(new StartAppReplicationRequestPrivate(SmsRequest::StartAppReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartAppReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAppReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAppReplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartAppReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::StartAppReplicationRequestPrivate
 * \brief The StartAppReplicationRequestPrivate class provides private implementation for StartAppReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StartAppReplicationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
StartAppReplicationRequestPrivate::StartAppReplicationRequestPrivate(
    const SmsRequest::Action action, StartAppReplicationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAppReplicationRequest
 * class' copy constructor.
 */
StartAppReplicationRequestPrivate::StartAppReplicationRequestPrivate(
    const StartAppReplicationRequestPrivate &other, StartAppReplicationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
