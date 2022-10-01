// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsmarthomeappliancesrequest.h"
#include "listsmarthomeappliancesrequest_p.h"
#include "listsmarthomeappliancesresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSmartHomeAppliancesRequest
 * \brief The ListSmartHomeAppliancesRequest class provides an interface for AlexaForBusiness ListSmartHomeAppliances requests.
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
 * \sa AlexaForBusinessClient::listSmartHomeAppliances
 */

/*!
 * Constructs a copy of \a other.
 */
ListSmartHomeAppliancesRequest::ListSmartHomeAppliancesRequest(const ListSmartHomeAppliancesRequest &other)
    : AlexaForBusinessRequest(new ListSmartHomeAppliancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSmartHomeAppliancesRequest object.
 */
ListSmartHomeAppliancesRequest::ListSmartHomeAppliancesRequest()
    : AlexaForBusinessRequest(new ListSmartHomeAppliancesRequestPrivate(AlexaForBusinessRequest::ListSmartHomeAppliancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSmartHomeAppliancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSmartHomeAppliancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSmartHomeAppliancesRequest::response(QNetworkReply * const reply) const
{
    return new ListSmartHomeAppliancesResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListSmartHomeAppliancesRequestPrivate
 * \brief The ListSmartHomeAppliancesRequestPrivate class provides private implementation for ListSmartHomeAppliancesRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSmartHomeAppliancesRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListSmartHomeAppliancesRequestPrivate::ListSmartHomeAppliancesRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListSmartHomeAppliancesRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSmartHomeAppliancesRequest
 * class' copy constructor.
 */
ListSmartHomeAppliancesRequestPrivate::ListSmartHomeAppliancesRequestPrivate(
    const ListSmartHomeAppliancesRequestPrivate &other, ListSmartHomeAppliancesRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
