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

#include "createdocumentationpartrequest.h"
#include "createdocumentationpartrequest_p.h"
#include "createdocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateDocumentationPartRequest
 *
 * \brief The CreateDocumentationPartRequest class provides an interface for APIGateway CreateDocumentationPart requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createDocumentationPart
 */

/*!
 * @brief  Constructs a new CreateDocumentationPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDocumentationPartRequest::CreateDocumentationPartRequest(const CreateDocumentationPartRequest &other)
    : APIGatewayRequest(new CreateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateDocumentationPartRequest object.
 */
CreateDocumentationPartRequest::CreateDocumentationPartRequest()
    : APIGatewayRequest(new CreateDocumentationPartRequestPrivate(APIGatewayRequest::CreateDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateDocumentationPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDocumentationPartResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentationPartResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateDocumentationPartRequestPrivate
 *
 * @brief  Private implementation for CreateDocumentationPartRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDocumentationPartRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateDocumentationPartRequest instance.
 */
CreateDocumentationPartRequestPrivate::CreateDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, CreateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDocumentationPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentationPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDocumentationPartRequest instance.
 */
CreateDocumentationPartRequestPrivate::CreateDocumentationPartRequestPrivate(
    const CreateDocumentationPartRequestPrivate &other, CreateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
