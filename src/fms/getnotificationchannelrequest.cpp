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

#include "getnotificationchannelrequest.h"
#include "getnotificationchannelrequest_p.h"
#include "getnotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetNotificationChannelRequest
 * \brief The GetNotificationChannelRequest class provides an interface for FMS GetNotificationChannel requests.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::getNotificationChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetNotificationChannelRequest::GetNotificationChannelRequest(const GetNotificationChannelRequest &other)
    : FMSRequest(new GetNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNotificationChannelRequest object.
 */
GetNotificationChannelRequest::GetNotificationChannelRequest()
    : FMSRequest(new GetNotificationChannelRequestPrivate(FMSRequest::GetNotificationChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetNotificationChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNotificationChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetNotificationChannelResponse(*this, reply);
}

/*!
 * \class QtAws::FMS::GetNotificationChannelRequestPrivate
 * \brief The GetNotificationChannelRequestPrivate class provides private implementation for GetNotificationChannelRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a GetNotificationChannelRequestPrivate object for FMS \a action,
 * with public implementation \a q.
 */
GetNotificationChannelRequestPrivate::GetNotificationChannelRequestPrivate(
    const FMSRequest::Action action, GetNotificationChannelRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNotificationChannelRequest
 * class' copy constructor.
 */
GetNotificationChannelRequestPrivate::GetNotificationChannelRequestPrivate(
    const GetNotificationChannelRequestPrivate &other, GetNotificationChannelRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
