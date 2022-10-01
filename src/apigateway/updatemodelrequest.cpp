// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemodelrequest.h"
#include "updatemodelrequest_p.h"
#include "updatemodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateModelRequest
 * \brief The UpdateModelRequest class provides an interface for ApiGateway UpdateModel requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelRequest::UpdateModelRequest(const UpdateModelRequest &other)
    : ApiGatewayRequest(new UpdateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelRequest object.
 */
UpdateModelRequest::UpdateModelRequest()
    : ApiGatewayRequest(new UpdateModelRequestPrivate(ApiGatewayRequest::UpdateModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateModelRequestPrivate
 * \brief The UpdateModelRequestPrivate class provides private implementation for UpdateModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateModelRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateModelRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelRequest
 * class' copy constructor.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const UpdateModelRequestPrivate &other, UpdateModelRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
