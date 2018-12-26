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

#include "deletestagerequest.h"
#include "deletestagerequest_p.h"
#include "deletestageresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteStageRequest
 * \brief The DeleteStageRequest class provides an interface for ApiGatewayV2 DeleteStage requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteStage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStageRequest::DeleteStageRequest(const DeleteStageRequest &other)
    : ApiGatewayV2Request(new DeleteStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStageRequest object.
 */
DeleteStageRequest::DeleteStageRequest()
    : ApiGatewayV2Request(new DeleteStageRequestPrivate(ApiGatewayV2Request::DeleteStageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteStageRequestPrivate
 * \brief The DeleteStageRequestPrivate class provides private implementation for DeleteStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteStageRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteStageRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStageRequest
 * class' copy constructor.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const DeleteStageRequestPrivate &other, DeleteStageRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
