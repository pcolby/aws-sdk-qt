// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnamerequest.h"
#include "getdomainnamerequest_p.h"
#include "getdomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDomainNameRequest
 * \brief The GetDomainNameRequest class provides an interface for ApiGateway GetDomainName requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainNameRequest::GetDomainNameRequest(const GetDomainNameRequest &other)
    : ApiGatewayRequest(new GetDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainNameRequest object.
 */
GetDomainNameRequest::GetDomainNameRequest()
    : ApiGatewayRequest(new GetDomainNameRequestPrivate(ApiGatewayRequest::GetDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDomainNameRequestPrivate
 * \brief The GetDomainNameRequestPrivate class provides private implementation for GetDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDomainNameRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const ApiGatewayRequest::Action action, GetDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNameRequest
 * class' copy constructor.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const GetDomainNameRequestPrivate &other, GetDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
