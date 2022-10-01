// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewaygroupsrequest.h"
#include "listgatewaygroupsrequest_p.h"
#include "listgatewaygroupsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListGatewayGroupsRequest
 * \brief The ListGatewayGroupsRequest class provides an interface for AlexaForBusiness ListGatewayGroups requests.
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
 * \sa AlexaForBusinessClient::listGatewayGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListGatewayGroupsRequest::ListGatewayGroupsRequest(const ListGatewayGroupsRequest &other)
    : AlexaForBusinessRequest(new ListGatewayGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGatewayGroupsRequest object.
 */
ListGatewayGroupsRequest::ListGatewayGroupsRequest()
    : AlexaForBusinessRequest(new ListGatewayGroupsRequestPrivate(AlexaForBusinessRequest::ListGatewayGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGatewayGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGatewayGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGatewayGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGatewayGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListGatewayGroupsRequestPrivate
 * \brief The ListGatewayGroupsRequestPrivate class provides private implementation for ListGatewayGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListGatewayGroupsRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListGatewayGroupsRequestPrivate::ListGatewayGroupsRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListGatewayGroupsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGatewayGroupsRequest
 * class' copy constructor.
 */
ListGatewayGroupsRequestPrivate::ListGatewayGroupsRequestPrivate(
    const ListGatewayGroupsRequestPrivate &other, ListGatewayGroupsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
