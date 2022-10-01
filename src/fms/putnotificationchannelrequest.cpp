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

#include "putnotificationchannelrequest.h"
#include "putnotificationchannelrequest_p.h"
#include "putnotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutNotificationChannelRequest
 * \brief The PutNotificationChannelRequest class provides an interface for Fms PutNotificationChannel requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::putNotificationChannel
 */

/*!
 * Constructs a copy of \a other.
 */
PutNotificationChannelRequest::PutNotificationChannelRequest(const PutNotificationChannelRequest &other)
    : FmsRequest(new PutNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutNotificationChannelRequest object.
 */
PutNotificationChannelRequest::PutNotificationChannelRequest()
    : FmsRequest(new PutNotificationChannelRequestPrivate(FmsRequest::PutNotificationChannelAction, this))
{

}

/*!
 * \reimp
 */
bool PutNotificationChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutNotificationChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new PutNotificationChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::PutNotificationChannelRequestPrivate
 * \brief The PutNotificationChannelRequestPrivate class provides private implementation for PutNotificationChannelRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutNotificationChannelRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
PutNotificationChannelRequestPrivate::PutNotificationChannelRequestPrivate(
    const FmsRequest::Action action, PutNotificationChannelRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutNotificationChannelRequest
 * class' copy constructor.
 */
PutNotificationChannelRequestPrivate::PutNotificationChannelRequestPrivate(
    const PutNotificationChannelRequestPrivate &other, PutNotificationChannelRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
