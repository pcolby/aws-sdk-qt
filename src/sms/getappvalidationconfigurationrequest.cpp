// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappvalidationconfigurationrequest.h"
#include "getappvalidationconfigurationrequest_p.h"
#include "getappvalidationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetAppValidationConfigurationRequest
 * \brief The GetAppValidationConfigurationRequest class provides an interface for Sms GetAppValidationConfiguration requests.
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
 * \sa SmsClient::getAppValidationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppValidationConfigurationRequest::GetAppValidationConfigurationRequest(const GetAppValidationConfigurationRequest &other)
    : SmsRequest(new GetAppValidationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppValidationConfigurationRequest object.
 */
GetAppValidationConfigurationRequest::GetAppValidationConfigurationRequest()
    : SmsRequest(new GetAppValidationConfigurationRequestPrivate(SmsRequest::GetAppValidationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppValidationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppValidationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppValidationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetAppValidationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GetAppValidationConfigurationRequestPrivate
 * \brief The GetAppValidationConfigurationRequestPrivate class provides private implementation for GetAppValidationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetAppValidationConfigurationRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetAppValidationConfigurationRequestPrivate::GetAppValidationConfigurationRequestPrivate(
    const SmsRequest::Action action, GetAppValidationConfigurationRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppValidationConfigurationRequest
 * class' copy constructor.
 */
GetAppValidationConfigurationRequestPrivate::GetAppValidationConfigurationRequestPrivate(
    const GetAppValidationConfigurationRequestPrivate &other, GetAppValidationConfigurationRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
