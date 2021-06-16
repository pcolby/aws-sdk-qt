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

#include "createcontactchannelrequest.h"
#include "createcontactchannelrequest_p.h"
#include "createcontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::CreateContactChannelRequest
 * \brief The CreateContactChannelRequest class provides an interface for SSMContacts CreateContactChannel requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::createContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContactChannelRequest::CreateContactChannelRequest(const CreateContactChannelRequest &other)
    : SSMContactsRequest(new CreateContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContactChannelRequest object.
 */
CreateContactChannelRequest::CreateContactChannelRequest()
    : SSMContactsRequest(new CreateContactChannelRequestPrivate(SSMContactsRequest::CreateContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::CreateContactChannelRequestPrivate
 * \brief The CreateContactChannelRequestPrivate class provides private implementation for CreateContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a CreateContactChannelRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
CreateContactChannelRequestPrivate::CreateContactChannelRequestPrivate(
    const SSMContactsRequest::Action action, CreateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContactChannelRequest
 * class' copy constructor.
 */
CreateContactChannelRequestPrivate::CreateContactChannelRequestPrivate(
    const CreateContactChannelRequestPrivate &other, CreateContactChannelRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
