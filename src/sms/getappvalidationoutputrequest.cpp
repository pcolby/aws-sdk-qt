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

#include "getappvalidationoutputrequest.h"
#include "getappvalidationoutputrequest_p.h"
#include "getappvalidationoutputresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetAppValidationOutputRequest
 * \brief The GetAppValidationOutputRequest class provides an interface for SMS GetAppValidationOutput requests.
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
 * \sa SmsClient::getAppValidationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppValidationOutputRequest::GetAppValidationOutputRequest(const GetAppValidationOutputRequest &other)
    : SmsRequest(new GetAppValidationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppValidationOutputRequest object.
 */
GetAppValidationOutputRequest::GetAppValidationOutputRequest()
    : SmsRequest(new GetAppValidationOutputRequestPrivate(SmsRequest::GetAppValidationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppValidationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppValidationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppValidationOutputRequest::response(QNetworkReply * const reply) const
{
    return new GetAppValidationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::GetAppValidationOutputRequestPrivate
 * \brief The GetAppValidationOutputRequestPrivate class provides private implementation for GetAppValidationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetAppValidationOutputRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetAppValidationOutputRequestPrivate::GetAppValidationOutputRequestPrivate(
    const SmsRequest::Action action, GetAppValidationOutputRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppValidationOutputRequest
 * class' copy constructor.
 */
GetAppValidationOutputRequestPrivate::GetAppValidationOutputRequestPrivate(
    const GetAppValidationOutputRequestPrivate &other, GetAppValidationOutputRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
