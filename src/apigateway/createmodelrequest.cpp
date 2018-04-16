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

#include "createmodelrequest.h"
#include "createmodelrequest_p.h"
#include "createmodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateModelRequest
 *
 * \brief The CreateModelRequest class encapsulates APIGateway CreateModel requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createModel
 */

/*!
 * @brief  Constructs a new CreateModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateModelRequest::CreateModelRequest(const CreateModelRequest &other)
    : APIGatewayRequest(new CreateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateModelRequest object.
 */
CreateModelRequest::CreateModelRequest()
    : APIGatewayRequest(new CreateModelRequestPrivate(APIGatewayRequest::CreateModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateModelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateModelRequestPrivate
 *
 * @brief  Private implementation for CreateModelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateModelRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateModelRequest instance.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const APIGatewayRequest::Action action, CreateModelRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateModelRequest instance.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const CreateModelRequestPrivate &other, CreateModelRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
