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

#include "deleteaddressbookrequest.h"
#include "deleteaddressbookrequest_p.h"
#include "deleteaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteAddressBookRequest
 * \brief The DeleteAddressBookRequest class provides an interface for AlexaForBusiness DeleteAddressBook requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::deleteAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAddressBookRequest::DeleteAddressBookRequest(const DeleteAddressBookRequest &other)
    : AlexaForBusinessRequest(new DeleteAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAddressBookRequest object.
 */
DeleteAddressBookRequest::DeleteAddressBookRequest()
    : AlexaForBusinessRequest(new DeleteAddressBookRequestPrivate(AlexaForBusinessRequest::DeleteAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteAddressBookRequestPrivate
 * \brief The DeleteAddressBookRequestPrivate class provides private implementation for DeleteAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 *
 * Constructs a DeleteAddressBookRequestPrivate object for AlexaForBusiness \a action with,
 * public implementation \a q.
 */
DeleteAddressBookRequestPrivate::DeleteAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAddressBookRequest
 * class' copy constructor.
 */
DeleteAddressBookRequestPrivate::DeleteAddressBookRequestPrivate(
    const DeleteAddressBookRequestPrivate &other, DeleteAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
