// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewayresponserequest.h"
#include "updategatewayresponserequest_p.h"
#include "updategatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseRequest
 * \brief The UpdateGatewayResponseRequest class provides an interface for ApiGateway UpdateGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewayResponseRequest::UpdateGatewayResponseRequest(const UpdateGatewayResponseRequest &other)
    : ApiGatewayRequest(new UpdateGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewayResponseRequest object.
 */
UpdateGatewayResponseRequest::UpdateGatewayResponseRequest()
    : ApiGatewayRequest(new UpdateGatewayResponseRequestPrivate(ApiGatewayRequest::UpdateGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseRequestPrivate
 * \brief The UpdateGatewayResponseRequestPrivate class provides private implementation for UpdateGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateGatewayResponseRequestPrivate::UpdateGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayResponseRequest
 * class' copy constructor.
 */
UpdateGatewayResponseRequestPrivate::UpdateGatewayResponseRequestPrivate(
    const UpdateGatewayResponseRequestPrivate &other, UpdateGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
