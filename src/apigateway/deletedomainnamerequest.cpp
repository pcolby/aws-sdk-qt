// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainnamerequest.h"
#include "deletedomainnamerequest_p.h"
#include "deletedomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDomainNameRequest
 * \brief The DeleteDomainNameRequest class provides an interface for ApiGateway DeleteDomainName requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest(const DeleteDomainNameRequest &other)
    : ApiGatewayRequest(new DeleteDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainNameRequest object.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest()
    : ApiGatewayRequest(new DeleteDomainNameRequestPrivate(ApiGatewayRequest::DeleteDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDomainNameRequestPrivate
 * \brief The DeleteDomainNameRequestPrivate class provides private implementation for DeleteDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDomainNameRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainNameRequest
 * class' copy constructor.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const DeleteDomainNameRequestPrivate &other, DeleteDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
