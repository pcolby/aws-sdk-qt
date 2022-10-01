// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedocumentationversionrequest.h"
#include "deletedocumentationversionrequest_p.h"
#include "deletedocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationVersionRequest
 * \brief The DeleteDocumentationVersionRequest class provides an interface for ApiGateway DeleteDocumentationVersion requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDocumentationVersionRequest::DeleteDocumentationVersionRequest(const DeleteDocumentationVersionRequest &other)
    : ApiGatewayRequest(new DeleteDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDocumentationVersionRequest object.
 */
DeleteDocumentationVersionRequest::DeleteDocumentationVersionRequest()
    : ApiGatewayRequest(new DeleteDocumentationVersionRequestPrivate(ApiGatewayRequest::DeleteDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationVersionRequestPrivate
 * \brief The DeleteDocumentationVersionRequestPrivate class provides private implementation for DeleteDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDocumentationVersionRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDocumentationVersionRequestPrivate::DeleteDocumentationVersionRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentationVersionRequest
 * class' copy constructor.
 */
DeleteDocumentationVersionRequestPrivate::DeleteDocumentationVersionRequestPrivate(
    const DeleteDocumentationVersionRequestPrivate &other, DeleteDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
