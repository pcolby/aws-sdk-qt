// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationpartrequest.h"
#include "getdocumentationpartrequest_p.h"
#include "getdocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartRequest
 * \brief The GetDocumentationPartRequest class provides an interface for ApiGateway GetDocumentationPart requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationPartRequest::GetDocumentationPartRequest(const GetDocumentationPartRequest &other)
    : ApiGatewayRequest(new GetDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationPartRequest object.
 */
GetDocumentationPartRequest::GetDocumentationPartRequest()
    : ApiGatewayRequest(new GetDocumentationPartRequestPrivate(ApiGatewayRequest::GetDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartRequestPrivate
 * \brief The GetDocumentationPartRequestPrivate class provides private implementation for GetDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationPartRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationPartRequestPrivate::GetDocumentationPartRequestPrivate(
    const ApiGatewayRequest::Action action, GetDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationPartRequest
 * class' copy constructor.
 */
GetDocumentationPartRequestPrivate::GetDocumentationPartRequestPrivate(
    const GetDocumentationPartRequestPrivate &other, GetDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
