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

#include "startexporttaskrequest.h"
#include "startexporttaskrequest_p.h"
#include "startexporttaskresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  StartExportTaskRequest
 *
 * @brief  Implements ApplicationDiscoveryService StartExportTask requests.
 *
 * @see    ApplicationDiscoveryServiceClient::startExportTask
 */

/**
 * @brief  Constructs a new StartExportTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartExportTaskRequest::StartExportTaskRequest(const StartExportTaskRequest &other)
    : ApplicationDiscoveryServiceRequest(new StartExportTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartExportTaskRequest object.
 */
StartExportTaskRequest::StartExportTaskRequest()
    : ApplicationDiscoveryServiceRequest(new StartExportTaskRequestPrivate(ApplicationDiscoveryServiceRequest::StartExportTaskAction, this))
{

}

bool StartExportTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartExportTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartExportTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * StartExportTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartExportTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartExportTaskRequestPrivate
 *
 * @brief  Private implementation for StartExportTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartExportTaskRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public StartExportTaskRequest instance.
 */
StartExportTaskRequestPrivate::StartExportTaskRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, StartExportTaskRequest * const q)
    : StartExportTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartExportTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartExportTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartExportTaskRequest instance.
 */
StartExportTaskRequestPrivate::StartExportTaskRequestPrivate(
    const StartExportTaskRequestPrivate &other, StartExportTaskRequest * const q)
    : StartExportTaskPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
