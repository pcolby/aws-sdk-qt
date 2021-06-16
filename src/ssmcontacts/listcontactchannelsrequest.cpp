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

#include "listcontactchannelsrequest.h"
#include "listcontactchannelsrequest_p.h"
#include "listcontactchannelsresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListContactChannelsRequest
 * \brief The ListContactChannelsRequest class provides an interface for SSMContacts ListContactChannels requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listContactChannels
 */

/*!
 * Constructs a copy of \a other.
 */
ListContactChannelsRequest::ListContactChannelsRequest(const ListContactChannelsRequest &other)
    : SSMContactsRequest(new ListContactChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContactChannelsRequest object.
 */
ListContactChannelsRequest::ListContactChannelsRequest()
    : SSMContactsRequest(new ListContactChannelsRequestPrivate(SSMContactsRequest::ListContactChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContactChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContactChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContactChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListContactChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::ListContactChannelsRequestPrivate
 * \brief The ListContactChannelsRequestPrivate class provides private implementation for ListContactChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListContactChannelsRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
ListContactChannelsRequestPrivate::ListContactChannelsRequestPrivate(
    const SSMContactsRequest::Action action, ListContactChannelsRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContactChannelsRequest
 * class' copy constructor.
 */
ListContactChannelsRequestPrivate::ListContactChannelsRequestPrivate(
    const ListContactChannelsRequestPrivate &other, ListContactChannelsRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
