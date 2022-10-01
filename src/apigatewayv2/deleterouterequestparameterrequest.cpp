// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouterequestparameterrequest.h"
#include "deleterouterequestparameterrequest_p.h"
#include "deleterouterequestparameterresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterRequest
 * \brief The DeleteRouteRequestParameterRequest class provides an interface for ApiGatewayV2 DeleteRouteRequestParameter requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteRequestParameter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteRequestParameterRequest::DeleteRouteRequestParameterRequest(const DeleteRouteRequestParameterRequest &other)
    : ApiGatewayV2Request(new DeleteRouteRequestParameterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteRequestParameterRequest object.
 */
DeleteRouteRequestParameterRequest::DeleteRouteRequestParameterRequest()
    : ApiGatewayV2Request(new DeleteRouteRequestParameterRequestPrivate(ApiGatewayV2Request::DeleteRouteRequestParameterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteRequestParameterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteRequestParameterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteRequestParameterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteRequestParameterResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterRequestPrivate
 * \brief The DeleteRouteRequestParameterRequestPrivate class provides private implementation for DeleteRouteRequestParameterRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteRequestParameterRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteRouteRequestParameterRequestPrivate::DeleteRouteRequestParameterRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteRouteRequestParameterRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteRequestParameterRequest
 * class' copy constructor.
 */
DeleteRouteRequestParameterRequestPrivate::DeleteRouteRequestParameterRequestPrivate(
    const DeleteRouteRequestParameterRequestPrivate &other, DeleteRouteRequestParameterRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
