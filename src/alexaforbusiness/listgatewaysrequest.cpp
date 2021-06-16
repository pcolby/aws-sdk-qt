/*
    Copyright 2013-2021 Paul Colby

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

#include "listgatewaysrequest.h"
#include "listgatewaysrequest_p.h"
#include "listgatewaysresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListGatewaysRequest
 * \brief The ListGatewaysRequest class provides an interface for AlexaForBusiness ListGateways requests.
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
 * \sa AlexaForBusinessClient::listGateways
 */

/*!
 * Constructs a copy of \a other.
 */
ListGatewaysRequest::ListGatewaysRequest(const ListGatewaysRequest &other)
    : AlexaForBusinessRequest(new ListGatewaysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGatewaysRequest object.
 */
ListGatewaysRequest::ListGatewaysRequest()
    : AlexaForBusinessRequest(new ListGatewaysRequestPrivate(AlexaForBusinessRequest::ListGatewaysAction, this))
{

}

/*!
 * \reimp
 */
bool ListGatewaysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGatewaysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new ListGatewaysResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListGatewaysRequestPrivate
 * \brief The ListGatewaysRequestPrivate class provides private implementation for ListGatewaysRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListGatewaysRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListGatewaysRequestPrivate::ListGatewaysRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListGatewaysRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGatewaysRequest
 * class' copy constructor.
 */
ListGatewaysRequestPrivate::ListGatewaysRequestPrivate(
    const ListGatewaysRequestPrivate &other, ListGatewaysRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
