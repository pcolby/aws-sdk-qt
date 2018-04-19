/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getconnectorsrequest.h"
#include "getconnectorsrequest_p.h"
#include "getconnectorsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetConnectorsRequest
 * \brief The GetConnectorsRequest class provides an interface for SMS GetConnectors requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::getConnectors
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectorsRequest::GetConnectorsRequest(const GetConnectorsRequest &other)
    : SMSRequest(new GetConnectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectorsRequest object.
 */
GetConnectorsRequest::GetConnectorsRequest()
    : SMSRequest(new GetConnectorsRequestPrivate(SMSRequest::GetConnectorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectorsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectorsResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::GetConnectorsRequestPrivate
 * \brief The GetConnectorsRequestPrivate class provides private implementation for GetConnectorsRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetConnectorsRequestPrivate object for SMS \a action,
 * with public implementation \a q.
 */
GetConnectorsRequestPrivate::GetConnectorsRequestPrivate(
    const SMSRequest::Action action, GetConnectorsRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectorsRequest
 * class' copy constructor.
 */
GetConnectorsRequestPrivate::GetConnectorsRequestPrivate(
    const GetConnectorsRequestPrivate &other, GetConnectorsRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
