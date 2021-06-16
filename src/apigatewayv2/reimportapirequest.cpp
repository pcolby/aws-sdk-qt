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

#include "reimportapirequest.h"
#include "reimportapirequest_p.h"
#include "reimportapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiRequest
 * \brief The ReimportApiRequest class provides an interface for ApiGatewayV2 ReimportApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::reimportApi
 */

/*!
 * Constructs a copy of \a other.
 */
ReimportApiRequest::ReimportApiRequest(const ReimportApiRequest &other)
    : ApiGatewayV2Request(new ReimportApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReimportApiRequest object.
 */
ReimportApiRequest::ReimportApiRequest()
    : ApiGatewayV2Request(new ReimportApiRequestPrivate(ApiGatewayV2Request::ReimportApiAction, this))
{

}

/*!
 * \reimp
 */
bool ReimportApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReimportApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReimportApiRequest::response(QNetworkReply * const reply) const
{
    return new ReimportApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiRequestPrivate
 * \brief The ReimportApiRequestPrivate class provides private implementation for ReimportApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ReimportApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ReimportApiRequestPrivate::ReimportApiRequestPrivate(
    const ApiGatewayV2Request::Action action, ReimportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReimportApiRequest
 * class' copy constructor.
 */
ReimportApiRequestPrivate::ReimportApiRequestPrivate(
    const ReimportApiRequestPrivate &other, ReimportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
