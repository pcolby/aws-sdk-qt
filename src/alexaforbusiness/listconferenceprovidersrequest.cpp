/*
    Copyright 2013-2018 Paul Colby

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

#include "listconferenceprovidersrequest.h"
#include "listconferenceprovidersrequest_p.h"
#include "listconferenceprovidersresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListConferenceProvidersRequest
 * \brief The ListConferenceProvidersRequest class provides an interface for AlexaForBusiness ListConferenceProviders requests.
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
 * \sa AlexaForBusinessClient::listConferenceProviders
 */

/*!
 * Constructs a copy of \a other.
 */
ListConferenceProvidersRequest::ListConferenceProvidersRequest(const ListConferenceProvidersRequest &other)
    : AlexaForBusinessRequest(new ListConferenceProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConferenceProvidersRequest object.
 */
ListConferenceProvidersRequest::ListConferenceProvidersRequest()
    : AlexaForBusinessRequest(new ListConferenceProvidersRequestPrivate(AlexaForBusinessRequest::ListConferenceProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool ListConferenceProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConferenceProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConferenceProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListConferenceProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListConferenceProvidersRequestPrivate
 * \brief The ListConferenceProvidersRequestPrivate class provides private implementation for ListConferenceProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListConferenceProvidersRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListConferenceProvidersRequestPrivate::ListConferenceProvidersRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListConferenceProvidersRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConferenceProvidersRequest
 * class' copy constructor.
 */
ListConferenceProvidersRequestPrivate::ListConferenceProvidersRequestPrivate(
    const ListConferenceProvidersRequestPrivate &other, ListConferenceProvidersRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
