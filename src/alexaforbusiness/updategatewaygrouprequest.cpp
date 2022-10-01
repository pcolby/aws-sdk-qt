// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewaygrouprequest.h"
#include "updategatewaygrouprequest_p.h"
#include "updategatewaygroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayGroupRequest
 * \brief The UpdateGatewayGroupRequest class provides an interface for AlexaForBusiness UpdateGatewayGroup requests.
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
 * \sa AlexaForBusinessClient::updateGatewayGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewayGroupRequest::UpdateGatewayGroupRequest(const UpdateGatewayGroupRequest &other)
    : AlexaForBusinessRequest(new UpdateGatewayGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewayGroupRequest object.
 */
UpdateGatewayGroupRequest::UpdateGatewayGroupRequest()
    : AlexaForBusinessRequest(new UpdateGatewayGroupRequestPrivate(AlexaForBusinessRequest::UpdateGatewayGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewayGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewayGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewayGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayGroupRequestPrivate
 * \brief The UpdateGatewayGroupRequestPrivate class provides private implementation for UpdateGatewayGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateGatewayGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateGatewayGroupRequestPrivate::UpdateGatewayGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateGatewayGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayGroupRequest
 * class' copy constructor.
 */
UpdateGatewayGroupRequestPrivate::UpdateGatewayGroupRequestPrivate(
    const UpdateGatewayGroupRequestPrivate &other, UpdateGatewayGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
