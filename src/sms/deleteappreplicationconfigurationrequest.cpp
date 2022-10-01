// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappreplicationconfigurationrequest.h"
#include "deleteappreplicationconfigurationrequest_p.h"
#include "deleteappreplicationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteAppReplicationConfigurationRequest
 * \brief The DeleteAppReplicationConfigurationRequest class provides an interface for Sms DeleteAppReplicationConfiguration requests.
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
 * \sa SmsClient::deleteAppReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppReplicationConfigurationRequest::DeleteAppReplicationConfigurationRequest(const DeleteAppReplicationConfigurationRequest &other)
    : SmsRequest(new DeleteAppReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppReplicationConfigurationRequest object.
 */
DeleteAppReplicationConfigurationRequest::DeleteAppReplicationConfigurationRequest()
    : SmsRequest(new DeleteAppReplicationConfigurationRequestPrivate(SmsRequest::DeleteAppReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::DeleteAppReplicationConfigurationRequestPrivate
 * \brief The DeleteAppReplicationConfigurationRequestPrivate class provides private implementation for DeleteAppReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteAppReplicationConfigurationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
DeleteAppReplicationConfigurationRequestPrivate::DeleteAppReplicationConfigurationRequestPrivate(
    const SmsRequest::Action action, DeleteAppReplicationConfigurationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppReplicationConfigurationRequest
 * class' copy constructor.
 */
DeleteAppReplicationConfigurationRequestPrivate::DeleteAppReplicationConfigurationRequestPrivate(
    const DeleteAppReplicationConfigurationRequestPrivate &other, DeleteAppReplicationConfigurationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
