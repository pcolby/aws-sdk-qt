// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategatewaygrouprequest.h"
#include "creategatewaygrouprequest_p.h"
#include "creategatewaygroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateGatewayGroupRequest
 * \brief The CreateGatewayGroupRequest class provides an interface for AlexaForBusiness CreateGatewayGroup requests.
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
 * \sa AlexaForBusinessClient::createGatewayGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGatewayGroupRequest::CreateGatewayGroupRequest(const CreateGatewayGroupRequest &other)
    : AlexaForBusinessRequest(new CreateGatewayGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGatewayGroupRequest object.
 */
CreateGatewayGroupRequest::CreateGatewayGroupRequest()
    : AlexaForBusinessRequest(new CreateGatewayGroupRequestPrivate(AlexaForBusinessRequest::CreateGatewayGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGatewayGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGatewayGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGatewayGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGatewayGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateGatewayGroupRequestPrivate
 * \brief The CreateGatewayGroupRequestPrivate class provides private implementation for CreateGatewayGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateGatewayGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateGatewayGroupRequestPrivate::CreateGatewayGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateGatewayGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGatewayGroupRequest
 * class' copy constructor.
 */
CreateGatewayGroupRequestPrivate::CreateGatewayGroupRequestPrivate(
    const CreateGatewayGroupRequestPrivate &other, CreateGatewayGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
