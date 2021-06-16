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

#include "activatecontactchannelrequest.h"
#include "activatecontactchannelrequest_p.h"
#include "activatecontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ActivateContactChannelRequest
 * \brief The ActivateContactChannelRequest class provides an interface for SSMContacts ActivateContactChannel requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::activateContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
ActivateContactChannelRequest::ActivateContactChannelRequest(const ActivateContactChannelRequest &other)
    : SSMContactsRequest(new ActivateContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivateContactChannelRequest object.
 */
ActivateContactChannelRequest::ActivateContactChannelRequest()
    : SSMContactsRequest(new ActivateContactChannelRequestPrivate(SSMContactsRequest::ActivateContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool ActivateContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivateContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivateContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new ActivateContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::ActivateContactChannelRequestPrivate
 * \brief The ActivateContactChannelRequestPrivate class provides private implementation for ActivateContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ActivateContactChannelRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
ActivateContactChannelRequestPrivate::ActivateContactChannelRequestPrivate(
    const SSMContactsRequest::Action action, ActivateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivateContactChannelRequest
 * class' copy constructor.
 */
ActivateContactChannelRequestPrivate::ActivateContactChannelRequestPrivate(
    const ActivateContactChannelRequestPrivate &other, ActivateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
