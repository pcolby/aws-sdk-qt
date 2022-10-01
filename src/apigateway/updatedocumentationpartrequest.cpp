// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedocumentationpartrequest.h"
#include "updatedocumentationpartrequest_p.h"
#include "updatedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationPartRequest
 * \brief The UpdateDocumentationPartRequest class provides an interface for ApiGateway UpdateDocumentationPart requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest(const UpdateDocumentationPartRequest &other)
    : ApiGatewayRequest(new UpdateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDocumentationPartRequest object.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest()
    : ApiGatewayRequest(new UpdateDocumentationPartRequestPrivate(ApiGatewayRequest::UpdateDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationPartRequestPrivate
 * \brief The UpdateDocumentationPartRequestPrivate class provides private implementation for UpdateDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDocumentationPartRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentationPartRequest
 * class' copy constructor.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const UpdateDocumentationPartRequestPrivate &other, UpdateDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
