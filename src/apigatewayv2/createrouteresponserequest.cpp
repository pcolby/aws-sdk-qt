// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrouteresponserequest.h"
#include "createrouteresponserequest_p.h"
#include "createrouteresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseRequest
 * \brief The CreateRouteResponseRequest class provides an interface for ApiGatewayV2 CreateRouteResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRouteResponse
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRouteResponseRequest::CreateRouteResponseRequest(const CreateRouteResponseRequest &other)
    : ApiGatewayV2Request(new CreateRouteResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRouteResponseRequest object.
 */
CreateRouteResponseRequest::CreateRouteResponseRequest()
    : ApiGatewayV2Request(new CreateRouteResponseRequestPrivate(ApiGatewayV2Request::CreateRouteResponseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRouteResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRouteResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRouteResponseRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseRequestPrivate
 * \brief The CreateRouteResponseRequestPrivate class provides private implementation for CreateRouteResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateRouteResponseRequestPrivate::CreateRouteResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteResponseRequest
 * class' copy constructor.
 */
CreateRouteResponseRequestPrivate::CreateRouteResponseRequestPrivate(
    const CreateRouteResponseRequestPrivate &other, CreateRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
