// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putgatewayresponserequest.h"
#include "putgatewayresponserequest_p.h"
#include "putgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutGatewayResponseRequest
 * \brief The PutGatewayResponseRequest class provides an interface for ApiGateway PutGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutGatewayResponseRequest::PutGatewayResponseRequest(const PutGatewayResponseRequest &other)
    : ApiGatewayRequest(new PutGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutGatewayResponseRequest object.
 */
PutGatewayResponseRequest::PutGatewayResponseRequest()
    : ApiGatewayRequest(new PutGatewayResponseRequestPrivate(ApiGatewayRequest::PutGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutGatewayResponseRequestPrivate
 * \brief The PutGatewayResponseRequestPrivate class provides private implementation for PutGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutGatewayResponseRequestPrivate::PutGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, PutGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutGatewayResponseRequest
 * class' copy constructor.
 */
PutGatewayResponseRequestPrivate::PutGatewayResponseRequestPrivate(
    const PutGatewayResponseRequestPrivate &other, PutGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
