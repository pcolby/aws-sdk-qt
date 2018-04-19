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

#include "getserversrequest.h"
#include "getserversrequest_p.h"
#include "getserversresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetServersRequest
 * \brief The GetServersRequest class provides an interface for SMS GetServers requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::getServers
 */

/*!
 * Constructs a copy of \a other.
 */
GetServersRequest::GetServersRequest(const GetServersRequest &other)
    : SMSRequest(new GetServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServersRequest object.
 */
GetServersRequest::GetServersRequest()
    : SMSRequest(new GetServersRequestPrivate(SMSRequest::GetServersAction, this))
{

}

/*!
 * \reimp
 */
bool GetServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServersRequest::response(QNetworkReply * const reply) const
{
    return new GetServersResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::GetServersRequestPrivate
 * \brief The GetServersRequestPrivate class provides private implementation for GetServersRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 *
 * Constructs a GetServersRequestPrivate object for SMS \a action with,
 * public implementation \a q.
 */
GetServersRequestPrivate::GetServersRequestPrivate(
    const SMSRequest::Action action, GetServersRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServersRequest
 * class' copy constructor.
 */
GetServersRequestPrivate::GetServersRequestPrivate(
    const GetServersRequestPrivate &other, GetServersRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
