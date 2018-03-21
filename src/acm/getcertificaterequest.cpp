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

#include "getcertificaterequest.h"
#include "getcertificaterequest_p.h"
#include "getcertificateresponse.h"
#include "acmrequest_p.h"

namespace AWS {
namespace ACM {

/**
 * @class  GetCertificateRequest
 *
 * @brief  Implements ACM GetCertificate requests.
 *
 * @see    ACMClient::getCertificate
 */

/**
 * @brief  Constructs a new GetCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCertificateResponse::GetCertificateResponse(

/**
 * @brief  Constructs a new GetCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCertificateRequest::GetCertificateRequest(const GetCertificateRequest &other)
    : ACMRequest(new GetCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCertificateRequest object.
 */
GetCertificateRequest::GetCertificateRequest()
    : ACMRequest(new GetCertificateRequestPrivate(ACMRequest::GetCertificateAction, this))
{

}

bool GetCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ACMClient::send
 */
AwsAbstractResponse * GetCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCertificateRequestPrivate
 *
 * @brief  Private implementation for GetCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public GetCertificateRequest instance.
 */
GetCertificateRequestPrivate::GetCertificateRequestPrivate(
    const ACMRequest::Action action, GetCertificateRequest * const q)
    : GetCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCertificateRequest instance.
 */
GetCertificateRequestPrivate::GetCertificateRequestPrivate(
    const GetCertificateRequestPrivate &other, GetCertificateRequest * const q)
    : GetCertificatePrivate(other, q)
{

}

} // namespace ACM
} // namespace AWS
