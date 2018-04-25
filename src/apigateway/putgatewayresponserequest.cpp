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

#include "putgatewayresponserequest.h"
#include "putgatewayresponserequest_p.h"
#include "putgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutGatewayResponseRequest
 * \brief The PutGatewayResponseRequest class provides an interface for APIGateway PutGatewayResponse requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutGatewayResponseRequest::PutGatewayResponseRequest(const PutGatewayResponseRequest &other)
    : APIGatewayRequest(new PutGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutGatewayResponseRequest object.
 */
PutGatewayResponseRequest::PutGatewayResponseRequest()
    : APIGatewayRequest(new PutGatewayResponseRequestPrivate(APIGatewayRequest::PutGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::PutGatewayResponseRequestPrivate
 * \brief The PutGatewayResponseRequestPrivate class provides private implementation for PutGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutGatewayResponseRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
PutGatewayResponseRequestPrivate::PutGatewayResponseRequestPrivate(
    const APIGatewayRequest::Action action, PutGatewayResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutGatewayResponseRequest
 * class' copy constructor.
 */
PutGatewayResponseRequestPrivate::PutGatewayResponseRequestPrivate(
    const PutGatewayResponseRequestPrivate &other, PutGatewayResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
