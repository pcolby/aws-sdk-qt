// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecorsconfigurationrequest.h"
#include "deletecorsconfigurationrequest_p.h"
#include "deletecorsconfigurationresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteCorsConfigurationRequest
 * \brief The DeleteCorsConfigurationRequest class provides an interface for ApiGatewayV2 DeleteCorsConfiguration requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteCorsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCorsConfigurationRequest::DeleteCorsConfigurationRequest(const DeleteCorsConfigurationRequest &other)
    : ApiGatewayV2Request(new DeleteCorsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCorsConfigurationRequest object.
 */
DeleteCorsConfigurationRequest::DeleteCorsConfigurationRequest()
    : ApiGatewayV2Request(new DeleteCorsConfigurationRequestPrivate(ApiGatewayV2Request::DeleteCorsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCorsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCorsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCorsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCorsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteCorsConfigurationRequestPrivate
 * \brief The DeleteCorsConfigurationRequestPrivate class provides private implementation for DeleteCorsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteCorsConfigurationRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteCorsConfigurationRequestPrivate::DeleteCorsConfigurationRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteCorsConfigurationRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCorsConfigurationRequest
 * class' copy constructor.
 */
DeleteCorsConfigurationRequestPrivate::DeleteCorsConfigurationRequestPrivate(
    const DeleteCorsConfigurationRequestPrivate &other, DeleteCorsConfigurationRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
