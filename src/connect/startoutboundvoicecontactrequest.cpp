/*
    Copyright 2013-2018 Paul Colby

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

#include "startoutboundvoicecontactrequest.h"
#include "startoutboundvoicecontactrequest_p.h"
#include "startoutboundvoicecontactresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StartOutboundVoiceContactRequest
 * \brief The StartOutboundVoiceContactRequest class provides an interface for Connect StartOutboundVoiceContact requests.
 *
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 *
 * \sa ConnectClient::startOutboundVoiceContact
 */

/*!
 * Constructs a copy of \a other.
 */
StartOutboundVoiceContactRequest::StartOutboundVoiceContactRequest(const StartOutboundVoiceContactRequest &other)
    : ConnectRequest(new StartOutboundVoiceContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartOutboundVoiceContactRequest object.
 */
StartOutboundVoiceContactRequest::StartOutboundVoiceContactRequest()
    : ConnectRequest(new StartOutboundVoiceContactRequestPrivate(ConnectRequest::StartOutboundVoiceContactAction, this))
{

}

/*!
 * \reimp
 */
bool StartOutboundVoiceContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartOutboundVoiceContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOutboundVoiceContactRequest::response(QNetworkReply * const reply) const
{
    return new StartOutboundVoiceContactResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::StartOutboundVoiceContactRequestPrivate
 * \brief The StartOutboundVoiceContactRequestPrivate class provides private implementation for StartOutboundVoiceContactRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a StartOutboundVoiceContactRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
StartOutboundVoiceContactRequestPrivate::StartOutboundVoiceContactRequestPrivate(
    const ConnectRequest::Action action, StartOutboundVoiceContactRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartOutboundVoiceContactRequest
 * class' copy constructor.
 */
StartOutboundVoiceContactRequestPrivate::StartOutboundVoiceContactRequestPrivate(
    const StartOutboundVoiceContactRequestPrivate &other, StartOutboundVoiceContactRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
