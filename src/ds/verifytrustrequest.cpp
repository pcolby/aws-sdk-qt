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

#include "verifytrustrequest.h"
#include "verifytrustrequest_p.h"
#include "verifytrustresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  VerifyTrustRequest
 *
 * @brief  Implements DirectoryService VerifyTrust requests.
 *
 * @see    DirectoryServiceClient::verifyTrust
 */

/**
 * @brief  Constructs a new VerifyTrustRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifyTrustRequest::VerifyTrustRequest(const VerifyTrustRequest &other)
    : DirectoryServiceRequest(new VerifyTrustRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new VerifyTrustRequest object.
 */
VerifyTrustRequest::VerifyTrustRequest()
    : DirectoryServiceRequest(new VerifyTrustRequestPrivate(DirectoryServiceRequest::VerifyTrustAction, this))
{

}

bool VerifyTrustRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an VerifyTrustResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifyTrustResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * VerifyTrustRequest::response(QNetworkReply * const reply) const
{
    return new VerifyTrustResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  VerifyTrustRequestPrivate
 *
 * @brief  Private implementation for VerifyTrustRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyTrustRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public VerifyTrustRequest instance.
 */
VerifyTrustRequestPrivate::VerifyTrustRequestPrivate(
    const DirectoryServiceRequest::Action action, VerifyTrustRequest * const q)
    : VerifyTrustPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new VerifyTrustRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifyTrustRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifyTrustRequest instance.
 */
VerifyTrustRequestPrivate::VerifyTrustRequestPrivate(
    const VerifyTrustRequestPrivate &other, VerifyTrustRequest * const q)
    : VerifyTrustPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
