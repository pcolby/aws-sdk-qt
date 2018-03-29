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

#include "archivefindingsrequest.h"
#include "archivefindingsrequest_p.h"
#include "archivefindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  ArchiveFindingsRequest
 *
 * @brief  Implements GuardDuty ArchiveFindings requests.
 *
 * @see    GuardDutyClient::archiveFindings
 */

/**
 * @brief  Constructs a new ArchiveFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ArchiveFindingsRequest::ArchiveFindingsRequest(const ArchiveFindingsRequest &other)
    : GuardDutyRequest(new ArchiveFindingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ArchiveFindingsRequest object.
 */
ArchiveFindingsRequest::ArchiveFindingsRequest()
    : GuardDutyRequest(new ArchiveFindingsRequestPrivate(GuardDutyRequest::ArchiveFindingsAction, this))
{

}

bool ArchiveFindingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ArchiveFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ArchiveFindingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * ArchiveFindingsRequest::response(QNetworkReply * const reply) const
{
    return new ArchiveFindingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ArchiveFindingsRequestPrivate
 *
 * @brief  Private implementation for ArchiveFindingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ArchiveFindingsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public ArchiveFindingsRequest instance.
 */
ArchiveFindingsRequestPrivate::ArchiveFindingsRequestPrivate(
    const GuardDutyRequest::Action action, ArchiveFindingsRequest * const q)
    : ArchiveFindingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ArchiveFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ArchiveFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ArchiveFindingsRequest instance.
 */
ArchiveFindingsRequestPrivate::ArchiveFindingsRequestPrivate(
    const ArchiveFindingsRequestPrivate &other, ArchiveFindingsRequest * const q)
    : ArchiveFindingsPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
