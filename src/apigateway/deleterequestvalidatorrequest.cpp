// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterequestvalidatorrequest.h"
#include "deleterequestvalidatorrequest_p.h"
#include "deleterequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteRequestValidatorRequest
 * \brief The DeleteRequestValidatorRequest class provides an interface for ApiGateway DeleteRequestValidator requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteRequestValidator
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRequestValidatorRequest::DeleteRequestValidatorRequest(const DeleteRequestValidatorRequest &other)
    : ApiGatewayRequest(new DeleteRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRequestValidatorRequest object.
 */
DeleteRequestValidatorRequest::DeleteRequestValidatorRequest()
    : ApiGatewayRequest(new DeleteRequestValidatorRequestPrivate(ApiGatewayRequest::DeleteRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRequestValidatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRequestValidatorResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteRequestValidatorRequestPrivate
 * \brief The DeleteRequestValidatorRequestPrivate class provides private implementation for DeleteRequestValidatorRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteRequestValidatorRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteRequestValidatorRequestPrivate::DeleteRequestValidatorRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRequestValidatorRequest
 * class' copy constructor.
 */
DeleteRequestValidatorRequestPrivate::DeleteRequestValidatorRequestPrivate(
    const DeleteRequestValidatorRequestPrivate &other, DeleteRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
