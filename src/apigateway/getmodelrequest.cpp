// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelrequest.h"
#include "getmodelrequest_p.h"
#include "getmodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetModelRequest
 * \brief The GetModelRequest class provides an interface for ApiGateway GetModel requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getModel
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelRequest::GetModelRequest(const GetModelRequest &other)
    : ApiGatewayRequest(new GetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelRequest object.
 */
GetModelRequest::GetModelRequest()
    : ApiGatewayRequest(new GetModelRequestPrivate(ApiGatewayRequest::GetModelAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelRequest::response(QNetworkReply * const reply) const
{
    return new GetModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetModelRequestPrivate
 * \brief The GetModelRequestPrivate class provides private implementation for GetModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetModelRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const ApiGatewayRequest::Action action, GetModelRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelRequest
 * class' copy constructor.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const GetModelRequestPrivate &other, GetModelRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
