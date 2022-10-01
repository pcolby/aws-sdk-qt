// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchnetworkprofilesrequest.h"
#include "searchnetworkprofilesrequest_p.h"
#include "searchnetworkprofilesresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchNetworkProfilesRequest
 * \brief The SearchNetworkProfilesRequest class provides an interface for AlexaForBusiness SearchNetworkProfiles requests.
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
 * \sa AlexaForBusinessClient::searchNetworkProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
SearchNetworkProfilesRequest::SearchNetworkProfilesRequest(const SearchNetworkProfilesRequest &other)
    : AlexaForBusinessRequest(new SearchNetworkProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchNetworkProfilesRequest object.
 */
SearchNetworkProfilesRequest::SearchNetworkProfilesRequest()
    : AlexaForBusinessRequest(new SearchNetworkProfilesRequestPrivate(AlexaForBusinessRequest::SearchNetworkProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchNetworkProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchNetworkProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchNetworkProfilesRequest::response(QNetworkReply * const reply) const
{
    return new SearchNetworkProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SearchNetworkProfilesRequestPrivate
 * \brief The SearchNetworkProfilesRequestPrivate class provides private implementation for SearchNetworkProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchNetworkProfilesRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SearchNetworkProfilesRequestPrivate::SearchNetworkProfilesRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchNetworkProfilesRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchNetworkProfilesRequest
 * class' copy constructor.
 */
SearchNetworkProfilesRequestPrivate::SearchNetworkProfilesRequestPrivate(
    const SearchNetworkProfilesRequestPrivate &other, SearchNetworkProfilesRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
