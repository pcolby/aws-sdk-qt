// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
