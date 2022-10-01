// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegatewayresponserequest.h"
#include "deletegatewayresponserequest_p.h"
#include "deletegatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteGatewayResponseRequest
 * \brief The DeleteGatewayResponseRequest class provides an interface for ApiGateway DeleteGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGatewayResponseRequest::DeleteGatewayResponseRequest(const DeleteGatewayResponseRequest &other)
    : ApiGatewayRequest(new DeleteGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGatewayResponseRequest object.
 */
DeleteGatewayResponseRequest::DeleteGatewayResponseRequest()
    : ApiGatewayRequest(new DeleteGatewayResponseRequestPrivate(ApiGatewayRequest::DeleteGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteGatewayResponseRequestPrivate
 * \brief The DeleteGatewayResponseRequestPrivate class provides private implementation for DeleteGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteGatewayResponseRequestPrivate::DeleteGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGatewayResponseRequest
 * class' copy constructor.
 */
DeleteGatewayResponseRequestPrivate::DeleteGatewayResponseRequestPrivate(
    const DeleteGatewayResponseRequestPrivate &other, DeleteGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
