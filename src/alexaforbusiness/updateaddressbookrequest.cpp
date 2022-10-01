// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaddressbookrequest.h"
#include "updateaddressbookrequest_p.h"
#include "updateaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateAddressBookRequest
 * \brief The UpdateAddressBookRequest class provides an interface for AlexaForBusiness UpdateAddressBook requests.
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
 * \sa AlexaForBusinessClient::updateAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAddressBookRequest::UpdateAddressBookRequest(const UpdateAddressBookRequest &other)
    : AlexaForBusinessRequest(new UpdateAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAddressBookRequest object.
 */
UpdateAddressBookRequest::UpdateAddressBookRequest()
    : AlexaForBusinessRequest(new UpdateAddressBookRequestPrivate(AlexaForBusinessRequest::UpdateAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateAddressBookRequestPrivate
 * \brief The UpdateAddressBookRequestPrivate class provides private implementation for UpdateAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateAddressBookRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateAddressBookRequestPrivate::UpdateAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAddressBookRequest
 * class' copy constructor.
 */
UpdateAddressBookRequestPrivate::UpdateAddressBookRequestPrivate(
    const UpdateAddressBookRequestPrivate &other, UpdateAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
