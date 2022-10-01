// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmethodrequest.h"
#include "putmethodrequest_p.h"
#include "putmethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutMethodRequest
 * \brief The PutMethodRequest class provides an interface for ApiGateway PutMethod requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putMethod
 */

/*!
 * Constructs a copy of \a other.
 */
PutMethodRequest::PutMethodRequest(const PutMethodRequest &other)
    : ApiGatewayRequest(new PutMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMethodRequest object.
 */
PutMethodRequest::PutMethodRequest()
    : ApiGatewayRequest(new PutMethodRequestPrivate(ApiGatewayRequest::PutMethodAction, this))
{

}

/*!
 * \reimp
 */
bool PutMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMethodRequest::response(QNetworkReply * const reply) const
{
    return new PutMethodResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutMethodRequestPrivate
 * \brief The PutMethodRequestPrivate class provides private implementation for PutMethodRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutMethodRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutMethodRequestPrivate::PutMethodRequestPrivate(
    const ApiGatewayRequest::Action action, PutMethodRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMethodRequest
 * class' copy constructor.
 */
PutMethodRequestPrivate::PutMethodRequestPrivate(
    const PutMethodRequestPrivate &other, PutMethodRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
