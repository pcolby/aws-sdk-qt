// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationpartsrequest.h"
#include "getdocumentationpartsrequest_p.h"
#include "getdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartsRequest
 * \brief The GetDocumentationPartsRequest class provides an interface for ApiGateway GetDocumentationParts requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationParts
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest(const GetDocumentationPartsRequest &other)
    : ApiGatewayRequest(new GetDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationPartsRequest object.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest()
    : ApiGatewayRequest(new GetDocumentationPartsRequestPrivate(ApiGatewayRequest::GetDocumentationPartsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationPartsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationPartsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationPartsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationPartsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartsRequestPrivate
 * \brief The GetDocumentationPartsRequestPrivate class provides private implementation for GetDocumentationPartsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationPartsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const ApiGatewayRequest::Action action, GetDocumentationPartsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationPartsRequest
 * class' copy constructor.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const GetDocumentationPartsRequestPrivate &other, GetDocumentationPartsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
