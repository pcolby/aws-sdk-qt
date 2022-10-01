// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemethodrequest.h"
#include "updatemethodrequest_p.h"
#include "updatemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateMethodRequest
 * \brief The UpdateMethodRequest class provides an interface for ApiGateway UpdateMethod requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateMethod
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMethodRequest::UpdateMethodRequest(const UpdateMethodRequest &other)
    : ApiGatewayRequest(new UpdateMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMethodRequest object.
 */
UpdateMethodRequest::UpdateMethodRequest()
    : ApiGatewayRequest(new UpdateMethodRequestPrivate(ApiGatewayRequest::UpdateMethodAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMethodRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMethodResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateMethodRequestPrivate
 * \brief The UpdateMethodRequestPrivate class provides private implementation for UpdateMethodRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateMethodRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateMethodRequestPrivate::UpdateMethodRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateMethodRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMethodRequest
 * class' copy constructor.
 */
UpdateMethodRequestPrivate::UpdateMethodRequestPrivate(
    const UpdateMethodRequestPrivate &other, UpdateMethodRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
