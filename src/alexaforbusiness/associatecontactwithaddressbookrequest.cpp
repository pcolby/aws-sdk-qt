// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatecontactwithaddressbookrequest.h"
#include "associatecontactwithaddressbookrequest_p.h"
#include "associatecontactwithaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateContactWithAddressBookRequest
 * \brief The AssociateContactWithAddressBookRequest class provides an interface for AlexaForBusiness AssociateContactWithAddressBook requests.
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
 * \sa AlexaForBusinessClient::associateContactWithAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateContactWithAddressBookRequest::AssociateContactWithAddressBookRequest(const AssociateContactWithAddressBookRequest &other)
    : AlexaForBusinessRequest(new AssociateContactWithAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateContactWithAddressBookRequest object.
 */
AssociateContactWithAddressBookRequest::AssociateContactWithAddressBookRequest()
    : AlexaForBusinessRequest(new AssociateContactWithAddressBookRequestPrivate(AlexaForBusinessRequest::AssociateContactWithAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateContactWithAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateContactWithAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateContactWithAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new AssociateContactWithAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateContactWithAddressBookRequestPrivate
 * \brief The AssociateContactWithAddressBookRequestPrivate class provides private implementation for AssociateContactWithAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateContactWithAddressBookRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
AssociateContactWithAddressBookRequestPrivate::AssociateContactWithAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateContactWithAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateContactWithAddressBookRequest
 * class' copy constructor.
 */
AssociateContactWithAddressBookRequestPrivate::AssociateContactWithAddressBookRequestPrivate(
    const AssociateContactWithAddressBookRequestPrivate &other, AssociateContactWithAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
