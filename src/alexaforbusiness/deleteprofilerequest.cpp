// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofilerequest.h"
#include "deleteprofilerequest_p.h"
#include "deleteprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteProfileRequest
 * \brief The DeleteProfileRequest class provides an interface for AlexaForBusiness DeleteProfile requests.
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
 * \sa AlexaForBusinessClient::deleteProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProfileRequest::DeleteProfileRequest(const DeleteProfileRequest &other)
    : AlexaForBusinessRequest(new DeleteProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProfileRequest object.
 */
DeleteProfileRequest::DeleteProfileRequest()
    : AlexaForBusinessRequest(new DeleteProfileRequestPrivate(AlexaForBusinessRequest::DeleteProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteProfileRequestPrivate
 * \brief The DeleteProfileRequestPrivate class provides private implementation for DeleteProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DeleteProfileRequestPrivate::DeleteProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProfileRequest
 * class' copy constructor.
 */
DeleteProfileRequestPrivate::DeleteProfileRequestPrivate(
    const DeleteProfileRequestPrivate &other, DeleteProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
