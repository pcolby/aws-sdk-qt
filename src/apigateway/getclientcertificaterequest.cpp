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

#include "getclientcertificaterequest.h"
#include "getclientcertificaterequest_p.h"
#include "getclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetClientCertificateRequest
 *
 * @brief  Implements APIGateway GetClientCertificate requests.
 *
 * @see    APIGatewayClient::getClientCertificate
 */

/**
 * @brief  Constructs a new GetClientCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetClientCertificateRequest::GetClientCertificateRequest(const GetClientCertificateRequest &other)
    : APIGatewayRequest(new GetClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetClientCertificateRequest object.
 */
GetClientCertificateRequest::GetClientCertificateRequest()
    : APIGatewayRequest(new GetClientCertificateRequestPrivate(APIGatewayRequest::GetClientCertificateAction, this))
{

}

bool GetClientCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetClientCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetClientCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetClientCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetClientCertificateRequestPrivate
 *
 * @brief  Private implementation for GetClientCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClientCertificateRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetClientCertificateRequest instance.
 */
GetClientCertificateRequestPrivate::GetClientCertificateRequestPrivate(
    const APIGatewayRequest::Action action, GetClientCertificateRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetClientCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetClientCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetClientCertificateRequest instance.
 */
GetClientCertificateRequestPrivate::GetClientCertificateRequestPrivate(
    const GetClientCertificateRequestPrivate &other, GetClientCertificateRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
