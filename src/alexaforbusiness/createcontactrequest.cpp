// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontactrequest.h"
#include "createcontactrequest_p.h"
#include "createcontactresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateContactRequest
 * \brief The CreateContactRequest class provides an interface for AlexaForBusiness CreateContact requests.
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
 * \sa AlexaForBusinessClient::createContact
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContactRequest::CreateContactRequest(const CreateContactRequest &other)
    : AlexaForBusinessRequest(new CreateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContactRequest object.
 */
CreateContactRequest::CreateContactRequest()
    : AlexaForBusinessRequest(new CreateContactRequestPrivate(AlexaForBusinessRequest::CreateContactAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContactRequest::response(QNetworkReply * const reply) const
{
    return new CreateContactResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateContactRequestPrivate
 * \brief The CreateContactRequestPrivate class provides private implementation for CreateContactRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateContactRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateContactRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContactRequest
 * class' copy constructor.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const CreateContactRequestPrivate &other, CreateContactRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
