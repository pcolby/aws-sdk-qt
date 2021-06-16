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

#include "putappvalidationconfigurationrequest.h"
#include "putappvalidationconfigurationrequest_p.h"
#include "putappvalidationconfigurationresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::PutAppValidationConfigurationRequest
 * \brief The PutAppValidationConfigurationRequest class provides an interface for SMS PutAppValidationConfiguration requests.
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
 * \class QtAws::SMS::PutAppValidationConfigurationRequestPrivate
 * \brief The PutAppValidationConfigurationRequestPrivate class provides private implementation for PutAppValidationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
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

} // namespace SMS
} // namespace QtAws
