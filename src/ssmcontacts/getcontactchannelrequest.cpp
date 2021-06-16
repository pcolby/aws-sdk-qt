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

#include "getcontactchannelrequest.h"
#include "getcontactchannelrequest_p.h"
#include "getcontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::GetContactChannelRequest
 * \brief The GetContactChannelRequest class provides an interface for SSMContacts GetContactChannel requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::getContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactChannelRequest::GetContactChannelRequest(const GetContactChannelRequest &other)
    : SSMContactsRequest(new GetContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactChannelRequest object.
 */
GetContactChannelRequest::GetContactChannelRequest()
    : SSMContactsRequest(new GetContactChannelRequestPrivate(SSMContactsRequest::GetContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::GetContactChannelRequestPrivate
 * \brief The GetContactChannelRequestPrivate class provides private implementation for GetContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a GetContactChannelRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
GetContactChannelRequestPrivate::GetContactChannelRequestPrivate(
    const SSMContactsRequest::Action action, GetContactChannelRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactChannelRequest
 * class' copy constructor.
 */
GetContactChannelRequestPrivate::GetContactChannelRequestPrivate(
    const GetContactChannelRequestPrivate &other, GetContactChannelRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
