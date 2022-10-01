// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnamesrequest.h"
#include "getdomainnamesrequest_p.h"
#include "getdomainnamesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDomainNamesRequest
 * \brief The GetDomainNamesRequest class provides an interface for ApiGateway GetDomainNames requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDomainNames
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainNamesRequest::GetDomainNamesRequest(const GetDomainNamesRequest &other)
    : ApiGatewayRequest(new GetDomainNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainNamesRequest object.
 */
GetDomainNamesRequest::GetDomainNamesRequest()
    : ApiGatewayRequest(new GetDomainNamesRequestPrivate(ApiGatewayRequest::GetDomainNamesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainNamesRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNamesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDomainNamesRequestPrivate
 * \brief The GetDomainNamesRequestPrivate class provides private implementation for GetDomainNamesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDomainNamesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDomainNamesRequestPrivate::GetDomainNamesRequestPrivate(
    const ApiGatewayRequest::Action action, GetDomainNamesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNamesRequest
 * class' copy constructor.
 */
GetDomainNamesRequestPrivate::GetDomainNamesRequestPrivate(
    const GetDomainNamesRequestPrivate &other, GetDomainNamesRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
