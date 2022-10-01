// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintegrationrequest.h"
#include "deleteintegrationrequest_p.h"
#include "deleteintegrationresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationRequest
 * \brief The DeleteIntegrationRequest class provides an interface for ApiGatewayV2 DeleteIntegration requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest(const DeleteIntegrationRequest &other)
    : ApiGatewayV2Request(new DeleteIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntegrationRequest object.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest()
    : ApiGatewayV2Request(new DeleteIntegrationRequestPrivate(ApiGatewayV2Request::DeleteIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationRequestPrivate
 * \brief The DeleteIntegrationRequestPrivate class provides private implementation for DeleteIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteIntegrationRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationRequest
 * class' copy constructor.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const DeleteIntegrationRequestPrivate &other, DeleteIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
