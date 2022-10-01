// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importdocumentationpartsrequest.h"
#include "importdocumentationpartsrequest_p.h"
#include "importdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportDocumentationPartsRequest
 * \brief The ImportDocumentationPartsRequest class provides an interface for ApiGateway ImportDocumentationParts requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importDocumentationParts
 */

/*!
 * Constructs a copy of \a other.
 */
ImportDocumentationPartsRequest::ImportDocumentationPartsRequest(const ImportDocumentationPartsRequest &other)
    : ApiGatewayRequest(new ImportDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportDocumentationPartsRequest object.
 */
ImportDocumentationPartsRequest::ImportDocumentationPartsRequest()
    : ApiGatewayRequest(new ImportDocumentationPartsRequestPrivate(ApiGatewayRequest::ImportDocumentationPartsAction, this))
{

}

/*!
 * \reimp
 */
bool ImportDocumentationPartsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportDocumentationPartsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportDocumentationPartsRequest::response(QNetworkReply * const reply) const
{
    return new ImportDocumentationPartsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::ImportDocumentationPartsRequestPrivate
 * \brief The ImportDocumentationPartsRequestPrivate class provides private implementation for ImportDocumentationPartsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportDocumentationPartsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
ImportDocumentationPartsRequestPrivate::ImportDocumentationPartsRequestPrivate(
    const ApiGatewayRequest::Action action, ImportDocumentationPartsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportDocumentationPartsRequest
 * class' copy constructor.
 */
ImportDocumentationPartsRequestPrivate::ImportDocumentationPartsRequestPrivate(
    const ImportDocumentationPartsRequestPrivate &other, ImportDocumentationPartsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
