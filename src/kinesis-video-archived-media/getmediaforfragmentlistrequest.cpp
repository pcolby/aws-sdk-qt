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

#include "getmediaforfragmentlistrequest.h"
#include "getmediaforfragmentlistrequest_p.h"
#include "getmediaforfragmentlistresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/**
 * @class  GetMediaForFragmentListRequest
 *
 * @brief  Implements KinesisVideoArchivedMedia GetMediaForFragmentList requests.
 *
 * @see    KinesisVideoArchivedMediaClient::getMediaForFragmentList
 */

/**
 * @brief  Constructs a new GetMediaForFragmentListRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMediaForFragmentListRequest::GetMediaForFragmentListRequest(const GetMediaForFragmentListRequest &other)
    : KinesisVideoArchivedMediaRequest(new GetMediaForFragmentListRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMediaForFragmentListRequest object.
 */
GetMediaForFragmentListRequest::GetMediaForFragmentListRequest()
    : KinesisVideoArchivedMediaRequest(new GetMediaForFragmentListRequestPrivate(KinesisVideoArchivedMediaRequest::GetMediaForFragmentListAction, this))
{

}

bool GetMediaForFragmentListRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMediaForFragmentListResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMediaForFragmentListResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoArchivedMediaClient::send
 */
AwsAbstractResponse * GetMediaForFragmentListRequest::response(QNetworkReply * const reply) const
{
    return new GetMediaForFragmentListResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMediaForFragmentListRequestPrivate
 *
 * @brief  Private implementation for GetMediaForFragmentListRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMediaForFragmentListRequestPrivate object.
 *
 * @param  action  KinesisVideoArchivedMedia action being performed.
 * @param  q       Pointer to this object's public GetMediaForFragmentListRequest instance.
 */
GetMediaForFragmentListRequestPrivate::GetMediaForFragmentListRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, GetMediaForFragmentListRequest * const q)
    : GetMediaForFragmentListPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMediaForFragmentListRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMediaForFragmentListRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMediaForFragmentListRequest instance.
 */
GetMediaForFragmentListRequestPrivate::GetMediaForFragmentListRequestPrivate(
    const GetMediaForFragmentListRequestPrivate &other, GetMediaForFragmentListRequest * const q)
    : GetMediaForFragmentListPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
