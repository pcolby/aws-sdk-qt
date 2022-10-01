// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listskillsrequest.h"
#include "listskillsrequest_p.h"
#include "listskillsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsRequest
 * \brief The ListSkillsRequest class provides an interface for AlexaForBusiness ListSkills requests.
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
 * \sa AlexaForBusinessClient::listSkills
 */

/*!
 * Constructs a copy of \a other.
 */
ListSkillsRequest::ListSkillsRequest(const ListSkillsRequest &other)
    : AlexaForBusinessRequest(new ListSkillsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSkillsRequest object.
 */
ListSkillsRequest::ListSkillsRequest()
    : AlexaForBusinessRequest(new ListSkillsRequestPrivate(AlexaForBusinessRequest::ListSkillsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSkillsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSkillsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSkillsRequest::response(QNetworkReply * const reply) const
{
    return new ListSkillsResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsRequestPrivate
 * \brief The ListSkillsRequestPrivate class provides private implementation for ListSkillsRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSkillsRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListSkillsRequestPrivate::ListSkillsRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListSkillsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSkillsRequest
 * class' copy constructor.
 */
ListSkillsRequestPrivate::ListSkillsRequestPrivate(
    const ListSkillsRequestPrivate &other, ListSkillsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
