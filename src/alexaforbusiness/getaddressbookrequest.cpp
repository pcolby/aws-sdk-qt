// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaddressbookrequest.h"
#include "getaddressbookrequest_p.h"
#include "getaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetAddressBookRequest
 * \brief The GetAddressBookRequest class provides an interface for AlexaForBusiness GetAddressBook requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::getAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
GetAddressBookRequest::GetAddressBookRequest(const GetAddressBookRequest &other)
    : AlexaForBusinessRequest(new GetAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAddressBookRequest object.
 */
GetAddressBookRequest::GetAddressBookRequest()
    : AlexaForBusinessRequest(new GetAddressBookRequestPrivate(AlexaForBusinessRequest::GetAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool GetAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new GetAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetAddressBookRequestPrivate
 * \brief The GetAddressBookRequestPrivate class provides private implementation for GetAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetAddressBookRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetAddressBookRequestPrivate::GetAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAddressBookRequest
 * class' copy constructor.
 */
GetAddressBookRequestPrivate::GetAddressBookRequestPrivate(
    const GetAddressBookRequestPrivate &other, GetAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
