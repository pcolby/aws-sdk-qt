// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterequestvalidatorrequest.h"
#include "updaterequestvalidatorrequest_p.h"
#include "updaterequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateRequestValidatorRequest
 * \brief The UpdateRequestValidatorRequest class provides an interface for ApiGateway UpdateRequestValidator requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateRequestValidator
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRequestValidatorRequest::UpdateRequestValidatorRequest(const UpdateRequestValidatorRequest &other)
    : ApiGatewayRequest(new UpdateRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRequestValidatorRequest object.
 */
UpdateRequestValidatorRequest::UpdateRequestValidatorRequest()
    : ApiGatewayRequest(new UpdateRequestValidatorRequestPrivate(ApiGatewayRequest::UpdateRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRequestValidatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRequestValidatorResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateRequestValidatorRequestPrivate
 * \brief The UpdateRequestValidatorRequestPrivate class provides private implementation for UpdateRequestValidatorRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateRequestValidatorRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateRequestValidatorRequestPrivate::UpdateRequestValidatorRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRequestValidatorRequest
 * class' copy constructor.
 */
UpdateRequestValidatorRequestPrivate::UpdateRequestValidatorRequestPrivate(
    const UpdateRequestValidatorRequestPrivate &other, UpdateRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
