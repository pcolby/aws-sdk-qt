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

#include "importapirequest.h"
#include "importapirequest_p.h"
#include "importapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ImportApiRequest
 * \brief The ImportApiRequest class provides an interface for ApiGatewayV2 ImportApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::importApi
 */

/*!
 * Constructs a copy of \a other.
 */
ImportApiRequest::ImportApiRequest(const ImportApiRequest &other)
    : ApiGatewayV2Request(new ImportApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportApiRequest object.
 */
ImportApiRequest::ImportApiRequest()
    : ApiGatewayV2Request(new ImportApiRequestPrivate(ApiGatewayV2Request::ImportApiAction, this))
{

}

/*!
 * \reimp
 */
bool ImportApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportApiRequest::response(QNetworkReply * const reply) const
{
    return new ImportApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::ImportApiRequestPrivate
 * \brief The ImportApiRequestPrivate class provides private implementation for ImportApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ImportApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ImportApiRequestPrivate::ImportApiRequestPrivate(
    const ApiGatewayV2Request::Action action, ImportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportApiRequest
 * class' copy constructor.
 */
ImportApiRequestPrivate::ImportApiRequestPrivate(
    const ImportApiRequestPrivate &other, ImportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
