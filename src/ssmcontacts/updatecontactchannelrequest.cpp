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

#include "updatecontactchannelrequest.h"
#include "updatecontactchannelrequest_p.h"
#include "updatecontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::UpdateContactChannelRequest
 * \brief The UpdateContactChannelRequest class provides an interface for SSMContacts UpdateContactChannel requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::updateContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContactChannelRequest::UpdateContactChannelRequest(const UpdateContactChannelRequest &other)
    : SSMContactsRequest(new UpdateContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContactChannelRequest object.
 */
UpdateContactChannelRequest::UpdateContactChannelRequest()
    : SSMContactsRequest(new UpdateContactChannelRequestPrivate(SSMContactsRequest::UpdateContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::UpdateContactChannelRequestPrivate
 * \brief The UpdateContactChannelRequestPrivate class provides private implementation for UpdateContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a UpdateContactChannelRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
UpdateContactChannelRequestPrivate::UpdateContactChannelRequestPrivate(
    const SSMContactsRequest::Action action, UpdateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContactChannelRequest
 * class' copy constructor.
 */
UpdateContactChannelRequestPrivate::UpdateContactChannelRequestPrivate(
    const UpdateContactChannelRequestPrivate &other, UpdateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
