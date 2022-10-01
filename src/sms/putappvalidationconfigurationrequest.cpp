// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putappvalidationconfigurationrequest.h"
#include "putappvalidationconfigurationrequest_p.h"
#include "putappvalidationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::PutAppValidationConfigurationRequest
 * \brief The PutAppValidationConfigurationRequest class provides an interface for Sms PutAppValidationConfiguration requests.
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
 * \sa SmsClient::putAppValidationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutAppValidationConfigurationRequest::PutAppValidationConfigurationRequest(const PutAppValidationConfigurationRequest &other)
    : SmsRequest(new PutAppValidationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAppValidationConfigurationRequest object.
 */
PutAppValidationConfigurationRequest::PutAppValidationConfigurationRequest()
    : SmsRequest(new PutAppValidationConfigurationRequestPrivate(SmsRequest::PutAppValidationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutAppValidationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAppValidationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAppValidationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutAppValidationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::PutAppValidationConfigurationRequestPrivate
 * \brief The PutAppValidationConfigurationRequestPrivate class provides private implementation for PutAppValidationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a PutAppValidationConfigurationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
PutAppValidationConfigurationRequestPrivate::PutAppValidationConfigurationRequestPrivate(
    const SmsRequest::Action action, PutAppValidationConfigurationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAppValidationConfigurationRequest
 * class' copy constructor.
 */
PutAppValidationConfigurationRequestPrivate::PutAppValidationConfigurationRequestPrivate(
    const PutAppValidationConfigurationRequestPrivate &other, PutAppValidationConfigurationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
