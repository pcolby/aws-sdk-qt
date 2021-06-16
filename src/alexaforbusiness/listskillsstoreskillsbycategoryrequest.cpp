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

#include "listskillsstoreskillsbycategoryrequest.h"
#include "listskillsstoreskillsbycategoryrequest_p.h"
#include "listskillsstoreskillsbycategoryresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreSkillsByCategoryRequest
 * \brief The ListSkillsStoreSkillsByCategoryRequest class provides an interface for AlexaForBusiness ListSkillsStoreSkillsByCategory requests.
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
 * \sa AlexaForBusinessClient::listSkillsStoreSkillsByCategory
 */

/*!
 * Constructs a copy of \a other.
 */
ListSkillsStoreSkillsByCategoryRequest::ListSkillsStoreSkillsByCategoryRequest(const ListSkillsStoreSkillsByCategoryRequest &other)
    : AlexaForBusinessRequest(new ListSkillsStoreSkillsByCategoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSkillsStoreSkillsByCategoryRequest object.
 */
ListSkillsStoreSkillsByCategoryRequest::ListSkillsStoreSkillsByCategoryRequest()
    : AlexaForBusinessRequest(new ListSkillsStoreSkillsByCategoryRequestPrivate(AlexaForBusinessRequest::ListSkillsStoreSkillsByCategoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListSkillsStoreSkillsByCategoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSkillsStoreSkillsByCategoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSkillsStoreSkillsByCategoryRequest::response(QNetworkReply * const reply) const
{
    return new ListSkillsStoreSkillsByCategoryResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreSkillsByCategoryRequestPrivate
 * \brief The ListSkillsStoreSkillsByCategoryRequestPrivate class provides private implementation for ListSkillsStoreSkillsByCategoryRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSkillsStoreSkillsByCategoryRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListSkillsStoreSkillsByCategoryRequestPrivate::ListSkillsStoreSkillsByCategoryRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListSkillsStoreSkillsByCategoryRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSkillsStoreSkillsByCategoryRequest
 * class' copy constructor.
 */
ListSkillsStoreSkillsByCategoryRequestPrivate::ListSkillsStoreSkillsByCategoryRequestPrivate(
    const ListSkillsStoreSkillsByCategoryRequestPrivate &other, ListSkillsStoreSkillsByCategoryRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
