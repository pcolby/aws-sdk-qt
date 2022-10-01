// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationversionsrequest.h"
#include "getdocumentationversionsrequest_p.h"
#include "getdocumentationversionsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionsRequest
 * \brief The GetDocumentationVersionsRequest class provides an interface for ApiGateway GetDocumentationVersions requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest(const GetDocumentationVersionsRequest &other)
    : ApiGatewayRequest(new GetDocumentationVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationVersionsRequest object.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest()
    : ApiGatewayRequest(new GetDocumentationVersionsRequestPrivate(ApiGatewayRequest::GetDocumentationVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionsRequestPrivate
 * \brief The GetDocumentationVersionsRequestPrivate class provides private implementation for GetDocumentationVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationVersionsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const ApiGatewayRequest::Action action, GetDocumentationVersionsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionsRequest
 * class' copy constructor.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const GetDocumentationVersionsRequestPrivate &other, GetDocumentationVersionsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
