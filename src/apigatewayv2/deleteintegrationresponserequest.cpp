/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
