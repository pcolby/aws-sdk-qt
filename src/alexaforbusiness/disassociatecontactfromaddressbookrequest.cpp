// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatecontactfromaddressbookrequest.h"
#include "disassociatecontactfromaddressbookrequest_p.h"
#include "disassociatecontactfromaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateContactFromAddressBookRequest
 * \brief The DisassociateContactFromAddressBookRequest class provides an interface for AlexaForBusiness DisassociateContactFromAddressBook requests.
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
 * \sa AlexaForBusinessClient::disassociateContactFromAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateContactFromAddressBookRequest::DisassociateContactFromAddressBookRequest(const DisassociateContactFromAddressBookRequest &other)
    : AlexaForBusinessRequest(new DisassociateContactFromAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateContactFromAddressBookRequest object.
 */
DisassociateContactFromAddressBookRequest::DisassociateContactFromAddressBookRequest()
    : AlexaForBusinessRequest(new DisassociateContactFromAddressBookRequestPrivate(AlexaForBusinessRequest::DisassociateContactFromAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateContactFromAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateContactFromAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateContactFromAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateContactFromAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateContactFromAddressBookRequestPrivate
 * \brief The DisassociateContactFromAddressBookRequestPrivate class provides private implementation for DisassociateContactFromAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateContactFromAddressBookRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DisassociateContactFromAddressBookRequestPrivate::DisassociateContactFromAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateContactFromAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateContactFromAddressBookRequest
 * class' copy constructor.
 */
DisassociateContactFromAddressBookRequestPrivate::DisassociateContactFromAddressBookRequestPrivate(
    const DisassociateContactFromAddressBookRequestPrivate &other, DisassociateContactFromAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
