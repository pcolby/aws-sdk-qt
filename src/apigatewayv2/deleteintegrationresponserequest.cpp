// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponserequest_p.h"
#include "deleteintegrationresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationResponseRequest
 * \brief The DeleteIntegrationResponseRequest class provides an interface for ApiGatewayV2 DeleteIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest(const DeleteIntegrationResponseRequest &other)
    : ApiGatewayV2Request(new DeleteIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntegrationResponseRequest object.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest()
    : ApiGatewayV2Request(new DeleteIntegrationResponseRequestPrivate(ApiGatewayV2Request::DeleteIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationResponseRequestPrivate
 * \brief The DeleteIntegrationResponseRequestPrivate class provides private implementation for DeleteIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteIntegrationResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationResponseRequest
 * class' copy constructor.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const DeleteIntegrationResponseRequestPrivate &other, DeleteIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
