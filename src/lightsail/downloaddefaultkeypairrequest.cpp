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

#include "downloaddefaultkeypairrequest.h"
#include "downloaddefaultkeypairrequest_p.h"
#include "downloaddefaultkeypairresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DownloadDefaultKeyPairRequest
 *
 * @brief  Implements Lightsail DownloadDefaultKeyPair requests.
 *
 * @see    LightsailClient::downloadDefaultKeyPair
 */

/**
 * @brief  Constructs a new DownloadDefaultKeyPairRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DownloadDefaultKeyPairRequest::DownloadDefaultKeyPairRequest(const DownloadDefaultKeyPairRequest &other)
    : LightsailRequest(new DownloadDefaultKeyPairRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DownloadDefaultKeyPairRequest object.
 */
DownloadDefaultKeyPairRequest::DownloadDefaultKeyPairRequest()
    : LightsailRequest(new DownloadDefaultKeyPairRequestPrivate(LightsailRequest::DownloadDefaultKeyPairAction, this))
{

}

bool DownloadDefaultKeyPairRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DownloadDefaultKeyPairResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DownloadDefaultKeyPairResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DownloadDefaultKeyPairRequest::response(QNetworkReply * const reply) const
{
    return new DownloadDefaultKeyPairResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DownloadDefaultKeyPairRequestPrivate
 *
 * @brief  Private implementation for DownloadDefaultKeyPairRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DownloadDefaultKeyPairRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DownloadDefaultKeyPairRequest instance.
 */
DownloadDefaultKeyPairRequestPrivate::DownloadDefaultKeyPairRequestPrivate(
    const LightsailRequest::Action action, DownloadDefaultKeyPairRequest * const q)
    : DownloadDefaultKeyPairPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DownloadDefaultKeyPairRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DownloadDefaultKeyPairRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DownloadDefaultKeyPairRequest instance.
 */
DownloadDefaultKeyPairRequestPrivate::DownloadDefaultKeyPairRequestPrivate(
    const DownloadDefaultKeyPairRequestPrivate &other, DownloadDefaultKeyPairRequest * const q)
    : DownloadDefaultKeyPairPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
