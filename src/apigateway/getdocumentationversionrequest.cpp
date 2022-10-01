// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationversionrequest.h"
#include "getdocumentationversionrequest_p.h"
#include "getdocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionRequest
 * \brief The GetDocumentationVersionRequest class provides an interface for ApiGateway GetDocumentationVersion requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationVersionRequest::GetDocumentationVersionRequest(const GetDocumentationVersionRequest &other)
    : ApiGatewayRequest(new GetDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationVersionRequest object.
 */
GetDocumentationVersionRequest::GetDocumentationVersionRequest()
    : ApiGatewayRequest(new GetDocumentationVersionRequestPrivate(ApiGatewayRequest::GetDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionRequestPrivate
 * \brief The GetDocumentationVersionRequestPrivate class provides private implementation for GetDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationVersionRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationVersionRequestPrivate::GetDocumentationVersionRequestPrivate(
    const ApiGatewayRequest::Action action, GetDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionRequest
 * class' copy constructor.
 */
GetDocumentationVersionRequestPrivate::GetDocumentationVersionRequestPrivate(
    const GetDocumentationVersionRequestPrivate &other, GetDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
