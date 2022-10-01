// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelsrequest.h"
#include "getmodelsrequest_p.h"
#include "getmodelsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetModelsRequest
 * \brief The GetModelsRequest class provides an interface for ApiGateway GetModels requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelsRequest::GetModelsRequest(const GetModelsRequest &other)
    : ApiGatewayRequest(new GetModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelsRequest object.
 */
GetModelsRequest::GetModelsRequest()
    : ApiGatewayRequest(new GetModelsRequestPrivate(ApiGatewayRequest::GetModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetModelsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetModelsRequestPrivate
 * \brief The GetModelsRequestPrivate class provides private implementation for GetModelsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetModelsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const ApiGatewayRequest::Action action, GetModelsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelsRequest
 * class' copy constructor.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const GetModelsRequestPrivate &other, GetModelsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
