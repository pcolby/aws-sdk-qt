/*
    Copyright 2013-2019 Paul Colby

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

#include "getstagerequest.h"
#include "getstagerequest_p.h"
#include "getstageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetStageRequest
 * \brief The GetStageRequest class provides an interface for APIGateway GetStage requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getStage
 */

/*!
 * Constructs a copy of \a other.
 */
GetStageRequest::GetStageRequest(const GetStageRequest &other)
    : APIGatewayRequest(new GetStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStageRequest object.
 */
GetStageRequest::GetStageRequest()
    : APIGatewayRequest(new GetStageRequestPrivate(APIGatewayRequest::GetStageAction, this))
{

}

/*!
 * \reimp
 */
bool GetStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStageRequest::response(QNetworkReply * const reply) const
{
    return new GetStageResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetStageRequestPrivate
 * \brief The GetStageRequestPrivate class provides private implementation for GetStageRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetStageRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const APIGatewayRequest::Action action, GetStageRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStageRequest
 * class' copy constructor.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const GetStageRequestPrivate &other, GetStageRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
