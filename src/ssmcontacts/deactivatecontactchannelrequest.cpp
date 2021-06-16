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

#include "deactivatecontactchannelrequest.h"
#include "deactivatecontactchannelrequest_p.h"
#include "deactivatecontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DeactivateContactChannelRequest
 * \brief The DeactivateContactChannelRequest class provides an interface for SSMContacts DeactivateContactChannel requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::deactivateContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateContactChannelRequest::DeactivateContactChannelRequest(const DeactivateContactChannelRequest &other)
    : SSMContactsRequest(new DeactivateContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateContactChannelRequest object.
 */
DeactivateContactChannelRequest::DeactivateContactChannelRequest()
    : SSMContactsRequest(new DeactivateContactChannelRequestPrivate(SSMContactsRequest::DeactivateContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::DeactivateContactChannelRequestPrivate
 * \brief The DeactivateContactChannelRequestPrivate class provides private implementation for DeactivateContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DeactivateContactChannelRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
DeactivateContactChannelRequestPrivate::DeactivateContactChannelRequestPrivate(
    const SSMContactsRequest::Action action, DeactivateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateContactChannelRequest
 * class' copy constructor.
 */
DeactivateContactChannelRequestPrivate::DeactivateContactChannelRequestPrivate(
    const DeactivateContactChannelRequestPrivate &other, DeactivateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
