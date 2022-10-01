// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactrequest.h"
#include "getcontactrequest_p.h"
#include "getcontactresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetContactRequest
 * \brief The GetContactRequest class provides an interface for AlexaForBusiness GetContact requests.
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
 * \sa AlexaForBusinessClient::getContact
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactRequest::GetContactRequest(const GetContactRequest &other)
    : AlexaForBusinessRequest(new GetContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactRequest object.
 */
GetContactRequest::GetContactRequest()
    : AlexaForBusinessRequest(new GetContactRequestPrivate(AlexaForBusinessRequest::GetContactAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactRequest::response(QNetworkReply * const reply) const
{
    return new GetContactResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetContactRequestPrivate
 * \brief The GetContactRequestPrivate class provides private implementation for GetContactRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetContactRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetContactRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactRequest
 * class' copy constructor.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const GetContactRequestPrivate &other, GetContactRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
