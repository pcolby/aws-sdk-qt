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

#include "getrestapirequest.h"
#include "getrestapirequest_p.h"
#include "getrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRestApiRequest
 *
 * \brief The GetRestApiRequest class encapsulates APIGateway GetRestApi requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRestApi
 */

/*!
 * @brief  Constructs a new GetRestApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRestApiRequest::GetRestApiRequest(const GetRestApiRequest &other)
    : APIGatewayRequest(new GetRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetRestApiRequest object.
 */
GetRestApiRequest::GetRestApiRequest()
    : APIGatewayRequest(new GetRestApiRequestPrivate(APIGatewayRequest::GetRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool GetRestApiRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetRestApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRestApiResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRestApiRequest::response(QNetworkReply * const reply) const
{
    return new GetRestApiResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetRestApiRequestPrivate
 *
 * @brief  Private implementation for GetRestApiRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRestApiRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetRestApiRequest instance.
 */
GetRestApiRequestPrivate::GetRestApiRequestPrivate(
    const APIGatewayRequest::Action action, GetRestApiRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetRestApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRestApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRestApiRequest instance.
 */
GetRestApiRequestPrivate::GetRestApiRequestPrivate(
    const GetRestApiRequestPrivate &other, GetRestApiRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
