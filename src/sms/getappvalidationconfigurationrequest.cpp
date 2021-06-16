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

#include "getappvalidationconfigurationrequest.h"
#include "getappvalidationconfigurationrequest_p.h"
#include "getappvalidationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetAppValidationConfigurationRequest
 * \brief The GetAppValidationConfigurationRequest class provides an interface for SMS GetAppValidationConfiguration requests.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AWS Server Migration Service</fullname>
 * 
 *  AWS Server Migration Service (AWS SMS) makes it easier and faster for you to migrate your on-premises workloads to AWS.
 *  To learn more about AWS SMS, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">AWS Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS Server Migration Service User
 *  Guide</a>
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
 * \class QtAws::SMS::GetAppValidationConfigurationRequestPrivate
 * \brief The GetAppValidationConfigurationRequestPrivate class provides private implementation for GetAppValidationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
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

} // namespace SMS
} // namespace QtAws
