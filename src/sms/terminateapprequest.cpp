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

#include "terminateapprequest.h"
#include "terminateapprequest_p.h"
#include "terminateappresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::TerminateAppRequest
 * \brief The TerminateAppRequest class provides an interface for SMS TerminateApp requests.
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
 * \sa SmsClient::terminateApp
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateAppRequest::TerminateAppRequest(const TerminateAppRequest &other)
    : SmsRequest(new TerminateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateAppRequest object.
 */
TerminateAppRequest::TerminateAppRequest()
    : SmsRequest(new TerminateAppRequestPrivate(SmsRequest::TerminateAppAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateAppRequest::response(QNetworkReply * const reply) const
{
    return new TerminateAppResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::TerminateAppRequestPrivate
 * \brief The TerminateAppRequestPrivate class provides private implementation for TerminateAppRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a TerminateAppRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
TerminateAppRequestPrivate::TerminateAppRequestPrivate(
    const SmsRequest::Action action, TerminateAppRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateAppRequest
 * class' copy constructor.
 */
TerminateAppRequestPrivate::TerminateAppRequestPrivate(
    const TerminateAppRequestPrivate &other, TerminateAppRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
