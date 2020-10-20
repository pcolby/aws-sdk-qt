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

#include "updatestagerequest.h"
#include "updatestagerequest_p.h"
#include "updatestageresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateStageRequest
 * \brief The UpdateStageRequest class provides an interface for ApiGatewayV2 UpdateStage requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateStage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStageRequest::UpdateStageRequest(const UpdateStageRequest &other)
    : ApiGatewayV2Request(new UpdateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStageRequest object.
 */
UpdateStageRequest::UpdateStageRequest()
    : ApiGatewayV2Request(new UpdateStageRequestPrivate(ApiGatewayV2Request::UpdateStageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateStageRequestPrivate
 * \brief The UpdateStageRequestPrivate class provides private implementation for UpdateStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateStageRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateStageRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStageRequest
 * class' copy constructor.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const UpdateStageRequestPrivate &other, UpdateStageRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
