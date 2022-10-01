// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopappreplicationrequest.h"
#include "stopappreplicationrequest_p.h"
#include "stopappreplicationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StopAppReplicationRequest
 * \brief The StopAppReplicationRequest class provides an interface for Sms StopAppReplication requests.
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
 * \sa SmsClient::stopAppReplication
 */

/*!
 * Constructs a copy of \a other.
 */
StopAppReplicationRequest::StopAppReplicationRequest(const StopAppReplicationRequest &other)
    : SmsRequest(new StopAppReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopAppReplicationRequest object.
 */
StopAppReplicationRequest::StopAppReplicationRequest()
    : SmsRequest(new StopAppReplicationRequestPrivate(SmsRequest::StopAppReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StopAppReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopAppReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAppReplicationRequest::response(QNetworkReply * const reply) const
{
    return new StopAppReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::StopAppReplicationRequestPrivate
 * \brief The StopAppReplicationRequestPrivate class provides private implementation for StopAppReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StopAppReplicationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
StopAppReplicationRequestPrivate::StopAppReplicationRequestPrivate(
    const SmsRequest::Action action, StopAppReplicationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopAppReplicationRequest
 * class' copy constructor.
 */
StopAppReplicationRequestPrivate::StopAppReplicationRequestPrivate(
    const StopAppReplicationRequestPrivate &other, StopAppReplicationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
