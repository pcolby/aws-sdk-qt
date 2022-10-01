// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontactrequest.h"
#include "deletecontactrequest_p.h"
#include "deletecontactresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteContactRequest
 * \brief The DeleteContactRequest class provides an interface for AlexaForBusiness DeleteContact requests.
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
 * \sa AlexaForBusinessClient::deleteContact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContactRequest::DeleteContactRequest(const DeleteContactRequest &other)
    : AlexaForBusinessRequest(new DeleteContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContactRequest object.
 */
DeleteContactRequest::DeleteContactRequest()
    : AlexaForBusinessRequest(new DeleteContactRequestPrivate(AlexaForBusinessRequest::DeleteContactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContactResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteContactRequestPrivate
 * \brief The DeleteContactRequestPrivate class provides private implementation for DeleteContactRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteContactRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteContactRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContactRequest
 * class' copy constructor.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const DeleteContactRequestPrivate &other, DeleteContactRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
