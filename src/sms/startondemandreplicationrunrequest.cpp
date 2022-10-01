// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startondemandreplicationrunrequest.h"
#include "startondemandreplicationrunrequest_p.h"
#include "startondemandreplicationrunresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StartOnDemandReplicationRunRequest
 * \brief The StartOnDemandReplicationRunRequest class provides an interface for Sms StartOnDemandReplicationRun requests.
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
 * \sa SmsClient::startOnDemandReplicationRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest(const StartOnDemandReplicationRunRequest &other)
    : SmsRequest(new StartOnDemandReplicationRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartOnDemandReplicationRunRequest object.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest()
    : SmsRequest(new StartOnDemandReplicationRunRequestPrivate(SmsRequest::StartOnDemandReplicationRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartOnDemandReplicationRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartOnDemandReplicationRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOnDemandReplicationRunRequest::response(QNetworkReply * const reply) const
{
    return new StartOnDemandReplicationRunResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::StartOnDemandReplicationRunRequestPrivate
 * \brief The StartOnDemandReplicationRunRequestPrivate class provides private implementation for StartOnDemandReplicationRunRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StartOnDemandReplicationRunRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const SmsRequest::Action action, StartOnDemandReplicationRunRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartOnDemandReplicationRunRequest
 * class' copy constructor.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const StartOnDemandReplicationRunRequestPrivate &other, StartOnDemandReplicationRunRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
