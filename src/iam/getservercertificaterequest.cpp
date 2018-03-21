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

#include "getservercertificaterequest.h"
#include "getservercertificaterequest_p.h"
#include "getservercertificateresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetServerCertificateRequest
 *
 * @brief  Implements IAM GetServerCertificate requests.
 *
 * @see    IAMClient::getServerCertificate
 */

/**
 * @brief  Constructs a new GetServerCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetServerCertificateRequest::GetServerCertificateRequest(const GetServerCertificateRequest &other)
    : IAMRequest(new GetServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetServerCertificateRequest object.
 */
GetServerCertificateRequest::GetServerCertificateRequest()
    : IAMRequest(new GetServerCertificateRequestPrivate(IAMRequest::GetServerCertificateAction, this))
{

}

bool GetServerCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetServerCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetServerCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetServerCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetServerCertificateRequestPrivate
 *
 * @brief  Private implementation for GetServerCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServerCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetServerCertificateRequest instance.
 */
GetServerCertificateRequestPrivate::GetServerCertificateRequestPrivate(
    const IAMRequest::Action action, GetServerCertificateRequest * const q)
    : GetServerCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetServerCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetServerCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetServerCertificateRequest instance.
 */
GetServerCertificateRequestPrivate::GetServerCertificateRequestPrivate(
    const GetServerCertificateRequestPrivate &other, GetServerCertificateRequest * const q)
    : GetServerCertificatePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
