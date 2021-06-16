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

#include "generatechangesetrequest.h"
#include "generatechangesetrequest_p.h"
#include "generatechangesetresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GenerateChangeSetRequest
 * \brief The GenerateChangeSetRequest class provides an interface for SMS GenerateChangeSet requests.
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
 * \sa SmsClient::generateChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateChangeSetRequest::GenerateChangeSetRequest(const GenerateChangeSetRequest &other)
    : SmsRequest(new GenerateChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateChangeSetRequest object.
 */
GenerateChangeSetRequest::GenerateChangeSetRequest()
    : SmsRequest(new GenerateChangeSetRequestPrivate(SmsRequest::GenerateChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new GenerateChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::GenerateChangeSetRequestPrivate
 * \brief The GenerateChangeSetRequestPrivate class provides private implementation for GenerateChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GenerateChangeSetRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GenerateChangeSetRequestPrivate::GenerateChangeSetRequestPrivate(
    const SmsRequest::Action action, GenerateChangeSetRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateChangeSetRequest
 * class' copy constructor.
 */
GenerateChangeSetRequestPrivate::GenerateChangeSetRequestPrivate(
    const GenerateChangeSetRequestPrivate &other, GenerateChangeSetRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
