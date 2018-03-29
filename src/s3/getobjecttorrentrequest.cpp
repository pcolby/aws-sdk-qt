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

#include "getobjecttorrentrequest.h"
#include "getobjecttorrentrequest_p.h"
#include "getobjecttorrentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  GetObjectTorrentRequest
 *
 * @brief  Implements S3 GetObjectTorrent requests.
 *
 * @see    S3Client::getObjectTorrent
 */

/**
 * @brief  Constructs a new GetObjectTorrentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetObjectTorrentRequest::GetObjectTorrentRequest(const GetObjectTorrentRequest &other)
    : S3Request(new GetObjectTorrentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetObjectTorrentRequest object.
 */
GetObjectTorrentRequest::GetObjectTorrentRequest()
    : S3Request(new GetObjectTorrentRequestPrivate(S3Request::GetObjectTorrentAction, this))
{

}

bool GetObjectTorrentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetObjectTorrentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetObjectTorrentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetObjectTorrentRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectTorrentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetObjectTorrentRequestPrivate
 *
 * @brief  Private implementation for GetObjectTorrentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectTorrentRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetObjectTorrentRequest instance.
 */
GetObjectTorrentRequestPrivate::GetObjectTorrentRequestPrivate(
    const S3Request::Action action, GetObjectTorrentRequest * const q)
    : GetObjectTorrentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectTorrentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetObjectTorrentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetObjectTorrentRequest instance.
 */
GetObjectTorrentRequestPrivate::GetObjectTorrentRequestPrivate(
    const GetObjectTorrentRequestPrivate &other, GetObjectTorrentRequest * const q)
    : GetObjectTorrentPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
