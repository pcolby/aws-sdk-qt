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

#include "deleteappvalidationconfigurationrequest.h"
#include "deleteappvalidationconfigurationrequest_p.h"
#include "deleteappvalidationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DeleteAppValidationConfigurationRequest
 * \brief The DeleteAppValidationConfigurationRequest class provides an interface for SMS DeleteAppValidationConfiguration requests.
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
 * \class QtAws::SMS::DeleteAppValidationConfigurationRequestPrivate
 * \brief The DeleteAppValidationConfigurationRequestPrivate class provides private implementation for DeleteAppValidationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
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

} // namespace SMS
} // namespace QtAws
