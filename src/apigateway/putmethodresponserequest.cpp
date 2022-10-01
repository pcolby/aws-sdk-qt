// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmethodresponserequest.h"
#include "putmethodresponserequest_p.h"
#include "putmethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutMethodResponseRequest
 * \brief The PutMethodResponseRequest class provides an interface for ApiGateway PutMethodResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutMethodResponseRequest::PutMethodResponseRequest(const PutMethodResponseRequest &other)
    : ApiGatewayRequest(new PutMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMethodResponseRequest object.
 */
PutMethodResponseRequest::PutMethodResponseRequest()
    : ApiGatewayRequest(new PutMethodResponseRequestPrivate(ApiGatewayRequest::PutMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutMethodResponseRequestPrivate
 * \brief The PutMethodResponseRequestPrivate class provides private implementation for PutMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutMethodResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutMethodResponseRequestPrivate::PutMethodResponseRequestPrivate(
    const ApiGatewayRequest::Action action, PutMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMethodResponseRequest
 * class' copy constructor.
 */
PutMethodResponseRequestPrivate::PutMethodResponseRequestPrivate(
    const PutMethodResponseRequestPrivate &other, PutMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
