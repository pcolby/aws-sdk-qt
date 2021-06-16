/*
    Copyright 2013-2021 Paul Colby

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

#include "deleteapirequest.h"
#include "deleteapirequest_p.h"
#include "deleteapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiRequest
 * \brief The DeleteApiRequest class provides an interface for ApiGatewayV2 DeleteApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiRequest::DeleteApiRequest(const DeleteApiRequest &other)
    : ApiGatewayV2Request(new DeleteApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiRequest object.
 */
DeleteApiRequest::DeleteApiRequest()
    : ApiGatewayV2Request(new DeleteApiRequestPrivate(ApiGatewayV2Request::DeleteApiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiRequestPrivate
 * \brief The DeleteApiRequestPrivate class provides private implementation for DeleteApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteApiRequestPrivate::DeleteApiRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiRequest
 * class' copy constructor.
 */
DeleteApiRequestPrivate::DeleteApiRequestPrivate(
    const DeleteApiRequestPrivate &other, DeleteApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
