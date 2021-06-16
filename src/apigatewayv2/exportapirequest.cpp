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

#include "exportapirequest.h"
#include "exportapirequest_p.h"
#include "exportapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ExportApiRequest
 * \brief The ExportApiRequest class provides an interface for ApiGatewayV2 ExportApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::exportApi
 */

/*!
 * Constructs a copy of \a other.
 */
ExportApiRequest::ExportApiRequest(const ExportApiRequest &other)
    : ApiGatewayV2Request(new ExportApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportApiRequest object.
 */
ExportApiRequest::ExportApiRequest()
    : ApiGatewayV2Request(new ExportApiRequestPrivate(ApiGatewayV2Request::ExportApiAction, this))
{

}

/*!
 * \reimp
 */
bool ExportApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportApiRequest::response(QNetworkReply * const reply) const
{
    return new ExportApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::ExportApiRequestPrivate
 * \brief The ExportApiRequestPrivate class provides private implementation for ExportApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ExportApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ExportApiRequestPrivate::ExportApiRequestPrivate(
    const ApiGatewayV2Request::Action action, ExportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportApiRequest
 * class' copy constructor.
 */
ExportApiRequestPrivate::ExportApiRequestPrivate(
    const ExportApiRequestPrivate &other, ExportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
