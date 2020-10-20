/*
    Copyright 2013-2020 Paul Colby

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

#include "deletenotificationchannelrequest.h"
#include "deletenotificationchannelrequest_p.h"
#include "deletenotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::DeleteNotificationChannelRequest
 * \brief The DeleteNotificationChannelRequest class provides an interface for FMS DeleteNotificationChannel requests.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::deleteNotificationChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNotificationChannelRequest::DeleteNotificationChannelRequest(const DeleteNotificationChannelRequest &other)
    : FmsRequest(new DeleteNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNotificationChannelRequest object.
 */
DeleteNotificationChannelRequest::DeleteNotificationChannelRequest()
    : FmsRequest(new DeleteNotificationChannelRequestPrivate(FmsRequest::DeleteNotificationChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNotificationChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNotificationChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotificationChannelResponse(*this, reply);
}

/*!
 * \class QtAws::FMS::DeleteNotificationChannelRequestPrivate
 * \brief The DeleteNotificationChannelRequestPrivate class provides private implementation for DeleteNotificationChannelRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a DeleteNotificationChannelRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DeleteNotificationChannelRequestPrivate::DeleteNotificationChannelRequestPrivate(
    const FmsRequest::Action action, DeleteNotificationChannelRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotificationChannelRequest
 * class' copy constructor.
 */
DeleteNotificationChannelRequestPrivate::DeleteNotificationChannelRequestPrivate(
    const DeleteNotificationChannelRequestPrivate &other, DeleteNotificationChannelRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
