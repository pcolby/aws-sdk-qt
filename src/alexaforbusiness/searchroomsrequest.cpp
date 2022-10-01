// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchroomsrequest.h"
#include "searchroomsrequest_p.h"
#include "searchroomsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchRoomsRequest
 * \brief The SearchRoomsRequest class provides an interface for AlexaForBusiness SearchRooms requests.
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
 * \sa AlexaForBusinessClient::searchRooms
 */

/*!
 * Constructs a copy of \a other.
 */
SearchRoomsRequest::SearchRoomsRequest(const SearchRoomsRequest &other)
    : AlexaForBusinessRequest(new SearchRoomsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchRoomsRequest object.
 */
SearchRoomsRequest::SearchRoomsRequest()
    : AlexaForBusinessRequest(new SearchRoomsRequestPrivate(AlexaForBusinessRequest::SearchRoomsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchRoomsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchRoomsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchRoomsRequest::response(QNetworkReply * const reply) const
{
    return new SearchRoomsResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SearchRoomsRequestPrivate
 * \brief The SearchRoomsRequestPrivate class provides private implementation for SearchRoomsRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchRoomsRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SearchRoomsRequestPrivate::SearchRoomsRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchRoomsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchRoomsRequest
 * class' copy constructor.
 */
SearchRoomsRequestPrivate::SearchRoomsRequestPrivate(
    const SearchRoomsRequestPrivate &other, SearchRoomsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
