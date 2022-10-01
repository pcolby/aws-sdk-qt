// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrouterequest.h"
#include "createrouterequest_p.h"
#include "createrouteresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteRequest
 * \brief The CreateRouteRequest class provides an interface for ApiGatewayV2 CreateRoute requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRoute
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRouteRequest::CreateRouteRequest(const CreateRouteRequest &other)
    : ApiGatewayV2Request(new CreateRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRouteRequest object.
 */
CreateRouteRequest::CreateRouteRequest()
    : ApiGatewayV2Request(new CreateRouteRequestPrivate(ApiGatewayV2Request::CreateRouteAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRouteRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteRequestPrivate
 * \brief The CreateRouteRequestPrivate class provides private implementation for CreateRouteRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateRouteRequestPrivate::CreateRouteRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteRequest
 * class' copy constructor.
 */
CreateRouteRequestPrivate::CreateRouteRequestPrivate(
    const CreateRouteRequestPrivate &other, CreateRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
