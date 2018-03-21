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

#include "createjobrequest.h"
#include "createjobrequest_p.h"
#include "createjobresponse.h"
#include "importexportrequest_p.h"

namespace AWS {
namespace ImportExport {

/**
 * @class  CreateJobRequest
 *
 * @brief  Implements ImportExport CreateJob requests.
 *
 * @see    ImportExportClient::createJob
 */

/**
 * @brief  Constructs a new CreateJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateJobResponse::CreateJobResponse(

/**
 * @brief  Constructs a new CreateJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateJobRequest::CreateJobRequest(const CreateJobRequest &other)
    : ImportExportRequest(new CreateJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateJobRequest object.
 */
CreateJobRequest::CreateJobRequest()
    : ImportExportRequest(new CreateJobRequestPrivate(ImportExportRequest::CreateJobAction, this))
{

}

bool CreateJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ImportExportClient::send
 */
AwsAbstractResponse * CreateJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateJobRequestPrivate
 *
 * @brief  Private implementation for CreateJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateJobRequestPrivate object.
 *
 * @param  action  ImportExport action being performed.
 * @param  q       Pointer to this object's public CreateJobRequest instance.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const ImportExportRequest::Action action, CreateJobRequest * const q)
    : CreateJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateJobRequest instance.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const CreateJobRequestPrivate &other, CreateJobRequest * const q)
    : CreateJobPrivate(other, q)
{

}

} // namespace ImportExport
} // namespace AWS
