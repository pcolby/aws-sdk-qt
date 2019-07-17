/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatenetworkprofilerequest.h"
#include "updatenetworkprofilerequest_p.h"
#include "updatenetworkprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateNetworkProfileRequest
 * \brief The UpdateNetworkProfileRequest class provides an interface for AlexaForBusiness UpdateNetworkProfile requests.
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
 * \sa AlexaForBusinessClient::updateNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest(const UpdateNetworkProfileRequest &other)
    : AlexaForBusinessRequest(new UpdateNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkProfileRequest object.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest()
    : AlexaForBusinessRequest(new UpdateNetworkProfileRequestPrivate(AlexaForBusinessRequest::UpdateNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateNetworkProfileRequestPrivate
 * \brief The UpdateNetworkProfileRequestPrivate class provides private implementation for UpdateNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateNetworkProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkProfileRequest
 * class' copy constructor.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const UpdateNetworkProfileRequestPrivate &other, UpdateNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
