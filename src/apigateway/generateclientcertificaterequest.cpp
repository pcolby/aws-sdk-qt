/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "generateclientcertificaterequest.h"
#include "generateclientcertificaterequest_p.h"
#include "generateclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GenerateClientCertificateRequest
 *
 * @brief  Implements APIGateway GenerateClientCertificate requests.
 *
 * @see    APIGatewayClient::generateClientCertificate
 */

/**
 * @brief  Constructs a new GenerateClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateClientCertificateResponse::GenerateClientCertificateResponse(

/**
 * @brief  Constructs a new GenerateClientCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GenerateClientCertificateRequest::GenerateClientCertificateRequest(const GenerateClientCertificateRequest &other)
    : APIGatewayRequest(new GenerateClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GenerateClientCertificateRequest object.
 */
GenerateClientCertificateRequest::GenerateClientCertificateRequest()
    : APIGatewayRequest(new GenerateClientCertificateRequestPrivate(APIGatewayRequest::GenerateClientCertificateAction, this))
{

}

bool GenerateClientCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GenerateClientCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GenerateClientCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GenerateClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GenerateClientCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GenerateClientCertificateRequestPrivate
 *
 * @brief  Private implementation for GenerateClientCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateClientCertificateRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GenerateClientCertificateRequest instance.
 */
GenerateClientCertificateRequestPrivate::GenerateClientCertificateRequestPrivate(
    const APIGatewayRequest::Action action, GenerateClientCertificateRequest * const q)
    : GenerateClientCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GenerateClientCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GenerateClientCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GenerateClientCertificateRequest instance.
 */
GenerateClientCertificateRequestPrivate::GenerateClientCertificateRequestPrivate(
    const GenerateClientCertificateRequestPrivate &other, GenerateClientCertificateRequest * const q)
    : GenerateClientCertificatePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
