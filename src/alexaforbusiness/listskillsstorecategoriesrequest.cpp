// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listskillsstorecategoriesrequest.h"
#include "listskillsstorecategoriesrequest_p.h"
#include "listskillsstorecategoriesresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreCategoriesRequest
 * \brief The ListSkillsStoreCategoriesRequest class provides an interface for AlexaForBusiness ListSkillsStoreCategories requests.
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
 * \sa AlexaForBusinessClient::listSkillsStoreCategories
 */

/*!
 * Constructs a copy of \a other.
 */
ListSkillsStoreCategoriesRequest::ListSkillsStoreCategoriesRequest(const ListSkillsStoreCategoriesRequest &other)
    : AlexaForBusinessRequest(new ListSkillsStoreCategoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSkillsStoreCategoriesRequest object.
 */
ListSkillsStoreCategoriesRequest::ListSkillsStoreCategoriesRequest()
    : AlexaForBusinessRequest(new ListSkillsStoreCategoriesRequestPrivate(AlexaForBusinessRequest::ListSkillsStoreCategoriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSkillsStoreCategoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSkillsStoreCategoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSkillsStoreCategoriesRequest::response(QNetworkReply * const reply) const
{
    return new ListSkillsStoreCategoriesResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreCategoriesRequestPrivate
 * \brief The ListSkillsStoreCategoriesRequestPrivate class provides private implementation for ListSkillsStoreCategoriesRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSkillsStoreCategoriesRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListSkillsStoreCategoriesRequestPrivate::ListSkillsStoreCategoriesRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListSkillsStoreCategoriesRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSkillsStoreCategoriesRequest
 * class' copy constructor.
 */
ListSkillsStoreCategoriesRequestPrivate::ListSkillsStoreCategoriesRequestPrivate(
    const ListSkillsStoreCategoriesRequestPrivate &other, ListSkillsStoreCategoriesRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
