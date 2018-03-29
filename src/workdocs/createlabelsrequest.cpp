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

#include "createlabelsrequest.h"
#include "createlabelsrequest_p.h"
#include "createlabelsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  CreateLabelsRequest
 *
 * @brief  Implements WorkDocs CreateLabels requests.
 *
 * @see    WorkDocsClient::createLabels
 */

/**
 * @brief  Constructs a new CreateLabelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLabelsRequest::CreateLabelsRequest(const CreateLabelsRequest &other)
    : WorkDocsRequest(new CreateLabelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLabelsRequest object.
 */
CreateLabelsRequest::CreateLabelsRequest()
    : WorkDocsRequest(new CreateLabelsRequestPrivate(WorkDocsRequest::CreateLabelsAction, this))
{

}

bool CreateLabelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLabelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLabelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * CreateLabelsRequest::response(QNetworkReply * const reply) const
{
    return new CreateLabelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLabelsRequestPrivate
 *
 * @brief  Private implementation for CreateLabelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLabelsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public CreateLabelsRequest instance.
 */
CreateLabelsRequestPrivate::CreateLabelsRequestPrivate(
    const WorkDocsRequest::Action action, CreateLabelsRequest * const q)
    : CreateLabelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLabelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLabelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLabelsRequest instance.
 */
CreateLabelsRequestPrivate::CreateLabelsRequestPrivate(
    const CreateLabelsRequestPrivate &other, CreateLabelsRequest * const q)
    : CreateLabelsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
