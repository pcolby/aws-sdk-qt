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

#include "deletestagerequest.h"
#include "deletestagerequest_p.h"
#include "deletestageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteStageRequest
 * \brief The DeleteStageRequest class provides an interface for ApiGateway DeleteStage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteStage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStageRequest::DeleteStageRequest(const DeleteStageRequest &other)
    : ApiGatewayRequest(new DeleteStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStageRequest object.
 */
DeleteStageRequest::DeleteStageRequest()
    : ApiGatewayRequest(new DeleteStageRequestPrivate(ApiGatewayRequest::DeleteStageAction, this))
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
 * \class QtAws::ApiGateway::DeleteStageRequestPrivate
 * \brief The DeleteStageRequestPrivate class provides private implementation for DeleteStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteStageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteStageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
