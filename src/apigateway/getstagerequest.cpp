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

#include "getstagerequest.h"
#include "getstagerequest_p.h"
#include "getstageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetStageRequest
 *
 * \brief The GetStageRequest class encapsulates APIGateway GetStage requests.
 *
 * \ingroup APIGateway
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
 * @brief  Constructs a new GetStageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStageRequest::GetStageRequest(const GetStageRequest &other)
    : APIGatewayRequest(new GetStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetStageRequest object.
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
 * @brief  Construct an GetStageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStageRequest::response(QNetworkReply * const reply) const
{
    return new GetStageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetStageRequestPrivate
 *
 * @brief  Private implementation for GetStageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetStageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetStageRequest instance.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const APIGatewayRequest::Action action, GetStageRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetStageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStageRequest instance.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const GetStageRequestPrivate &other, GetStageRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
