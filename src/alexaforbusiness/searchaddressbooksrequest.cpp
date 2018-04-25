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

#include "searchaddressbooksrequest.h"
#include "searchaddressbooksrequest_p.h"
#include "searchaddressbooksresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchAddressBooksRequest
 * \brief The SearchAddressBooksRequest class provides an interface for AlexaForBusiness SearchAddressBooks requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::searchAddressBooks
 */

/*!
 * Constructs a copy of \a other.
 */
SearchAddressBooksRequest::SearchAddressBooksRequest(const SearchAddressBooksRequest &other)
    : AlexaForBusinessRequest(new SearchAddressBooksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchAddressBooksRequest object.
 */
SearchAddressBooksRequest::SearchAddressBooksRequest()
    : AlexaForBusinessRequest(new SearchAddressBooksRequestPrivate(AlexaForBusinessRequest::SearchAddressBooksAction, this))
{

}

/*!
 * \reimp
 */
bool SearchAddressBooksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchAddressBooksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchAddressBooksRequest::response(QNetworkReply * const reply) const
{
    return new SearchAddressBooksResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SearchAddressBooksRequestPrivate
 * \brief The SearchAddressBooksRequestPrivate class provides private implementation for SearchAddressBooksRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchAddressBooksRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SearchAddressBooksRequestPrivate::SearchAddressBooksRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchAddressBooksRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchAddressBooksRequest
 * class' copy constructor.
 */
SearchAddressBooksRequestPrivate::SearchAddressBooksRequestPrivate(
    const SearchAddressBooksRequestPrivate &other, SearchAddressBooksRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
