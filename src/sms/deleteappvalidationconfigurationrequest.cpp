// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappvalidationconfigurationrequest.h"
#include "deleteappvalidationconfigurationrequest_p.h"
#include "deleteappvalidationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteAppValidationConfigurationRequest
 * \brief The DeleteAppValidationConfigurationRequest class provides an interface for Sms DeleteAppValidationConfiguration requests.
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
 * \sa SmsClient::deleteAppValidationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppValidationConfigurationRequest::DeleteAppValidationConfigurationRequest(const DeleteAppValidationConfigurationRequest &other)
    : SmsRequest(new DeleteAppValidationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppValidationConfigurationRequest object.
 */
DeleteAppValidationConfigurationRequest::DeleteAppValidationConfigurationRequest()
    : SmsRequest(new DeleteAppValidationConfigurationRequestPrivate(SmsRequest::DeleteAppValidationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppValidationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppValidationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppValidationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppValidationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::DeleteAppValidationConfigurationRequestPrivate
 * \brief The DeleteAppValidationConfigurationRequestPrivate class provides private implementation for DeleteAppValidationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteAppValidationConfigurationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
DeleteAppValidationConfigurationRequestPrivate::DeleteAppValidationConfigurationRequestPrivate(
    const SmsRequest::Action action, DeleteAppValidationConfigurationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppValidationConfigurationRequest
 * class' copy constructor.
 */
DeleteAppValidationConfigurationRequestPrivate::DeleteAppValidationConfigurationRequestPrivate(
    const DeleteAppValidationConfigurationRequestPrivate &other, DeleteAppValidationConfigurationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
