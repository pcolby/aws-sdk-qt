/*
    Copyright 2013-2020 Paul Colby

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

#include "getinvitationconfigurationrequest.h"
#include "getinvitationconfigurationrequest_p.h"
#include "getinvitationconfigurationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetInvitationConfigurationRequest
 * \brief The GetInvitationConfigurationRequest class provides an interface for AlexaForBusiness GetInvitationConfiguration requests.
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
 * \sa AlexaForBusinessClient::getInvitationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetInvitationConfigurationRequest::GetInvitationConfigurationRequest(const GetInvitationConfigurationRequest &other)
    : AlexaForBusinessRequest(new GetInvitationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInvitationConfigurationRequest object.
 */
GetInvitationConfigurationRequest::GetInvitationConfigurationRequest()
    : AlexaForBusinessRequest(new GetInvitationConfigurationRequestPrivate(AlexaForBusinessRequest::GetInvitationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetInvitationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInvitationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInvitationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetInvitationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetInvitationConfigurationRequestPrivate
 * \brief The GetInvitationConfigurationRequestPrivate class provides private implementation for GetInvitationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetInvitationConfigurationRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetInvitationConfigurationRequestPrivate::GetInvitationConfigurationRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetInvitationConfigurationRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInvitationConfigurationRequest
 * class' copy constructor.
 */
GetInvitationConfigurationRequestPrivate::GetInvitationConfigurationRequestPrivate(
    const GetInvitationConfigurationRequestPrivate &other, GetInvitationConfigurationRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
