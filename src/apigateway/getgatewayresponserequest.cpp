/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getgatewayresponserequest.h"
#include "getgatewayresponserequest_p.h"
#include "getgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetGatewayResponseRequest
 *
 * \brief The GetGatewayResponseRequest class encapsulates APIGateway GetGatewayResponse requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getGatewayResponse
 */

/*!
 * @brief  Constructs a new GetGatewayResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest(const GetGatewayResponseRequest &other)
    : APIGatewayRequest(new GetGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetGatewayResponseRequest object.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest()
    : APIGatewayRequest(new GetGatewayResponseRequestPrivate(APIGatewayRequest::GetGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetGatewayResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGatewayResponseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponseResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetGatewayResponseRequestPrivate
 *
 * @brief  Private implementation for GetGatewayResponseRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetGatewayResponseRequest instance.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const APIGatewayRequest::Action action, GetGatewayResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGatewayResponseRequest instance.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const GetGatewayResponseRequestPrivate &other, GetGatewayResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
