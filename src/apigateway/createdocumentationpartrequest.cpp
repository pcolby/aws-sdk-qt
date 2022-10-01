// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdocumentationpartrequest.h"
#include "createdocumentationpartrequest_p.h"
#include "createdocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDocumentationPartRequest
 * \brief The CreateDocumentationPartRequest class provides an interface for ApiGateway CreateDocumentationPart requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDocumentationPartRequest::CreateDocumentationPartRequest(const CreateDocumentationPartRequest &other)
    : ApiGatewayRequest(new CreateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDocumentationPartRequest object.
 */
CreateDocumentationPartRequest::CreateDocumentationPartRequest()
    : ApiGatewayRequest(new CreateDocumentationPartRequestPrivate(ApiGatewayRequest::CreateDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateDocumentationPartRequestPrivate
 * \brief The CreateDocumentationPartRequestPrivate class provides private implementation for CreateDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDocumentationPartRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateDocumentationPartRequestPrivate::CreateDocumentationPartRequestPrivate(
    const ApiGatewayRequest::Action action, CreateDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentationPartRequest
 * class' copy constructor.
 */
CreateDocumentationPartRequestPrivate::CreateDocumentationPartRequestPrivate(
    const CreateDocumentationPartRequestPrivate &other, CreateDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
