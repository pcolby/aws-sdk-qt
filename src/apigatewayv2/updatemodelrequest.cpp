/*
    Copyright 2013-2020 Paul Colby

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

#include "updatemodelrequest.h"
#include "updatemodelrequest_p.h"
#include "updatemodelresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelRequest
 * \brief The UpdateModelRequest class provides an interface for ApiGatewayV2 UpdateModel requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelRequest::UpdateModelRequest(const UpdateModelRequest &other)
    : ApiGatewayV2Request(new UpdateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelRequest object.
 */
UpdateModelRequest::UpdateModelRequest()
    : ApiGatewayV2Request(new UpdateModelRequestPrivate(ApiGatewayV2Request::UpdateModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelRequestPrivate
 * \brief The UpdateModelRequestPrivate class provides private implementation for UpdateModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateModelRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateModelRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelRequest
 * class' copy constructor.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const UpdateModelRequestPrivate &other, UpdateModelRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
