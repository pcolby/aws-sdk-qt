// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putappreplicationconfigurationrequest.h"
#include "putappreplicationconfigurationrequest_p.h"
#include "putappreplicationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::PutAppReplicationConfigurationRequest
 * \brief The PutAppReplicationConfigurationRequest class provides an interface for Sms PutAppReplicationConfiguration requests.
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
 * \sa SmsClient::putAppReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutAppReplicationConfigurationRequest::PutAppReplicationConfigurationRequest(const PutAppReplicationConfigurationRequest &other)
    : SmsRequest(new PutAppReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAppReplicationConfigurationRequest object.
 */
PutAppReplicationConfigurationRequest::PutAppReplicationConfigurationRequest()
    : SmsRequest(new PutAppReplicationConfigurationRequestPrivate(SmsRequest::PutAppReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutAppReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAppReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAppReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutAppReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::PutAppReplicationConfigurationRequestPrivate
 * \brief The PutAppReplicationConfigurationRequestPrivate class provides private implementation for PutAppReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a PutAppReplicationConfigurationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
PutAppReplicationConfigurationRequestPrivate::PutAppReplicationConfigurationRequestPrivate(
    const SmsRequest::Action action, PutAppReplicationConfigurationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAppReplicationConfigurationRequest
 * class' copy constructor.
 */
PutAppReplicationConfigurationRequestPrivate::PutAppReplicationConfigurationRequestPrivate(
    const PutAppReplicationConfigurationRequestPrivate &other, PutAppReplicationConfigurationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
