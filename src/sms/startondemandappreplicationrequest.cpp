// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startondemandappreplicationrequest.h"
#include "startondemandappreplicationrequest_p.h"
#include "startondemandappreplicationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StartOnDemandAppReplicationRequest
 * \brief The StartOnDemandAppReplicationRequest class provides an interface for Sms StartOnDemandAppReplication requests.
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
 * \sa SmsClient::startOnDemandAppReplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartOnDemandAppReplicationRequest::StartOnDemandAppReplicationRequest(const StartOnDemandAppReplicationRequest &other)
    : SmsRequest(new StartOnDemandAppReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartOnDemandAppReplicationRequest object.
 */
StartOnDemandAppReplicationRequest::StartOnDemandAppReplicationRequest()
    : SmsRequest(new StartOnDemandAppReplicationRequestPrivate(SmsRequest::StartOnDemandAppReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartOnDemandAppReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartOnDemandAppReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOnDemandAppReplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartOnDemandAppReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::StartOnDemandAppReplicationRequestPrivate
 * \brief The StartOnDemandAppReplicationRequestPrivate class provides private implementation for StartOnDemandAppReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StartOnDemandAppReplicationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
StartOnDemandAppReplicationRequestPrivate::StartOnDemandAppReplicationRequestPrivate(
    const SmsRequest::Action action, StartOnDemandAppReplicationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartOnDemandAppReplicationRequest
 * class' copy constructor.
 */
StartOnDemandAppReplicationRequestPrivate::StartOnDemandAppReplicationRequestPrivate(
    const StartOnDemandAppReplicationRequestPrivate &other, StartOnDemandAppReplicationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
