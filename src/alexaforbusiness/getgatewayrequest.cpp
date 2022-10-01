// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewayrequest.h"
#include "getgatewayrequest_p.h"
#include "getgatewayresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetGatewayRequest
 * \brief The GetGatewayRequest class provides an interface for AlexaForBusiness GetGateway requests.
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
 * \sa AlexaForBusinessClient::getGateway
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayRequest::GetGatewayRequest(const GetGatewayRequest &other)
    : AlexaForBusinessRequest(new GetGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayRequest object.
 */
GetGatewayRequest::GetGatewayRequest()
    : AlexaForBusinessRequest(new GetGatewayRequestPrivate(AlexaForBusinessRequest::GetGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetGatewayRequestPrivate
 * \brief The GetGatewayRequestPrivate class provides private implementation for GetGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetGatewayRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetGatewayRequestPrivate::GetGatewayRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetGatewayRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayRequest
 * class' copy constructor.
 */
GetGatewayRequestPrivate::GetGatewayRequestPrivate(
    const GetGatewayRequestPrivate &other, GetGatewayRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
