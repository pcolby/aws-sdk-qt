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

#include "searchcontactsrequest.h"
#include "searchcontactsrequest_p.h"
#include "searchcontactsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchContactsRequest
 * \brief The SearchContactsRequest class provides an interface for AlexaForBusiness SearchContacts requests.
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
 * \sa AlexaForBusinessClient::searchContacts
 */

/*!
 * Constructs a copy of \a other.
 */
SearchContactsRequest::SearchContactsRequest(const SearchContactsRequest &other)
    : AlexaForBusinessRequest(new SearchContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchContactsRequest object.
 */
SearchContactsRequest::SearchContactsRequest()
    : AlexaForBusinessRequest(new SearchContactsRequestPrivate(AlexaForBusinessRequest::SearchContactsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchContactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchContactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchContactsRequest::response(QNetworkReply * const reply) const
{
    return new SearchContactsResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SearchContactsRequestPrivate
 * \brief The SearchContactsRequestPrivate class provides private implementation for SearchContactsRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchContactsRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SearchContactsRequestPrivate::SearchContactsRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchContactsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchContactsRequest
 * class' copy constructor.
 */
SearchContactsRequestPrivate::SearchContactsRequestPrivate(
    const SearchContactsRequestPrivate &other, SearchContactsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
