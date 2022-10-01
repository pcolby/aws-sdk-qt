// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewaygrouprequest.h"
#include "getgatewaygrouprequest_p.h"
#include "getgatewaygroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetGatewayGroupRequest
 * \brief The GetGatewayGroupRequest class provides an interface for AlexaForBusiness GetGatewayGroup requests.
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
 * \sa AlexaForBusinessClient::getGatewayGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayGroupRequest::GetGatewayGroupRequest(const GetGatewayGroupRequest &other)
    : AlexaForBusinessRequest(new GetGatewayGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayGroupRequest object.
 */
GetGatewayGroupRequest::GetGatewayGroupRequest()
    : AlexaForBusinessRequest(new GetGatewayGroupRequestPrivate(AlexaForBusinessRequest::GetGatewayGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetGatewayGroupRequestPrivate
 * \brief The GetGatewayGroupRequestPrivate class provides private implementation for GetGatewayGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetGatewayGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetGatewayGroupRequestPrivate::GetGatewayGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetGatewayGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayGroupRequest
 * class' copy constructor.
 */
GetGatewayGroupRequestPrivate::GetGatewayGroupRequestPrivate(
    const GetGatewayGroupRequestPrivate &other, GetGatewayGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
