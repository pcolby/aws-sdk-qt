// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedocumentationpartrequest.h"
#include "deletedocumentationpartrequest_p.h"
#include "deletedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationPartRequest
 * \brief The DeleteDocumentationPartRequest class provides an interface for ApiGateway DeleteDocumentationPart requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDocumentationPartRequest::DeleteDocumentationPartRequest(const DeleteDocumentationPartRequest &other)
    : ApiGatewayRequest(new DeleteDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDocumentationPartRequest object.
 */
DeleteDocumentationPartRequest::DeleteDocumentationPartRequest()
    : ApiGatewayRequest(new DeleteDocumentationPartRequestPrivate(ApiGatewayRequest::DeleteDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationPartRequestPrivate
 * \brief The DeleteDocumentationPartRequestPrivate class provides private implementation for DeleteDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDocumentationPartRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDocumentationPartRequestPrivate::DeleteDocumentationPartRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentationPartRequest
 * class' copy constructor.
 */
DeleteDocumentationPartRequestPrivate::DeleteDocumentationPartRequestPrivate(
    const DeleteDocumentationPartRequestPrivate &other, DeleteDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
