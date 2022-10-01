// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprofilerequest.h"
#include "updateprofilerequest_p.h"
#include "updateprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateProfileRequest
 * \brief The UpdateProfileRequest class provides an interface for AlexaForBusiness UpdateProfile requests.
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
 * \sa AlexaForBusinessClient::updateProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProfileRequest::UpdateProfileRequest(const UpdateProfileRequest &other)
    : AlexaForBusinessRequest(new UpdateProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProfileRequest object.
 */
UpdateProfileRequest::UpdateProfileRequest()
    : AlexaForBusinessRequest(new UpdateProfileRequestPrivate(AlexaForBusinessRequest::UpdateProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateProfileRequestPrivate
 * \brief The UpdateProfileRequestPrivate class provides private implementation for UpdateProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateProfileRequestPrivate::UpdateProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProfileRequest
 * class' copy constructor.
 */
UpdateProfileRequestPrivate::UpdateProfileRequestPrivate(
    const UpdateProfileRequestPrivate &other, UpdateProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
