// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdocumentationversionrequest.h"
#include "createdocumentationversionrequest_p.h"
#include "createdocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDocumentationVersionRequest
 * \brief The CreateDocumentationVersionRequest class provides an interface for ApiGateway CreateDocumentationVersion requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDocumentationVersionRequest::CreateDocumentationVersionRequest(const CreateDocumentationVersionRequest &other)
    : ApiGatewayRequest(new CreateDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDocumentationVersionRequest object.
 */
CreateDocumentationVersionRequest::CreateDocumentationVersionRequest()
    : ApiGatewayRequest(new CreateDocumentationVersionRequestPrivate(ApiGatewayRequest::CreateDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateDocumentationVersionRequestPrivate
 * \brief The CreateDocumentationVersionRequestPrivate class provides private implementation for CreateDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDocumentationVersionRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateDocumentationVersionRequestPrivate::CreateDocumentationVersionRequestPrivate(
    const ApiGatewayRequest::Action action, CreateDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentationVersionRequest
 * class' copy constructor.
 */
CreateDocumentationVersionRequestPrivate::CreateDocumentationVersionRequestPrivate(
    const CreateDocumentationVersionRequestPrivate &other, CreateDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
