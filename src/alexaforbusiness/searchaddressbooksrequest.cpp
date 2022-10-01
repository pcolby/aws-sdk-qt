// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
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
