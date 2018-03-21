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

#include "startreplicationtaskassessmentrequest.h"
#include "startreplicationtaskassessmentrequest_p.h"
#include "startreplicationtaskassessmentresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  StartReplicationTaskAssessmentRequest
 *
 * @brief  Implements DatabaseMigrationService StartReplicationTaskAssessment requests.
 *
 * @see    DatabaseMigrationServiceClient::startReplicationTaskAssessment
 */

/**
 * @brief  Constructs a new StartReplicationTaskAssessmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartReplicationTaskAssessmentResponse::StartReplicationTaskAssessmentResponse(

/**
 * @brief  Constructs a new StartReplicationTaskAssessmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartReplicationTaskAssessmentRequest::StartReplicationTaskAssessmentRequest(const StartReplicationTaskAssessmentRequest &other)
    : DatabaseMigrationServiceRequest(new StartReplicationTaskAssessmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartReplicationTaskAssessmentRequest object.
 */
StartReplicationTaskAssessmentRequest::StartReplicationTaskAssessmentRequest()
    : DatabaseMigrationServiceRequest(new StartReplicationTaskAssessmentRequestPrivate(DatabaseMigrationServiceRequest::StartReplicationTaskAssessmentAction, this))
{

}

bool StartReplicationTaskAssessmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartReplicationTaskAssessmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartReplicationTaskAssessmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * StartReplicationTaskAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new StartReplicationTaskAssessmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartReplicationTaskAssessmentRequestPrivate
 *
 * @brief  Private implementation for StartReplicationTaskAssessmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskAssessmentRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public StartReplicationTaskAssessmentRequest instance.
 */
StartReplicationTaskAssessmentRequestPrivate::StartReplicationTaskAssessmentRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, StartReplicationTaskAssessmentRequest * const q)
    : StartReplicationTaskAssessmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskAssessmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartReplicationTaskAssessmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartReplicationTaskAssessmentRequest instance.
 */
StartReplicationTaskAssessmentRequestPrivate::StartReplicationTaskAssessmentRequestPrivate(
    const StartReplicationTaskAssessmentRequestPrivate &other, StartReplicationTaskAssessmentRequest * const q)
    : StartReplicationTaskAssessmentPrivate(other, q)
{

}
