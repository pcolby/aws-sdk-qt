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

#include "describemigrationtaskrequest.h"
#include "describemigrationtaskrequest_p.h"
#include "describemigrationtaskresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/**
 * @class  DescribeMigrationTaskRequest
 *
 * @brief  Implements MigrationHub DescribeMigrationTask requests.
 *
 * @see    MigrationHubClient::describeMigrationTask
 */

/**
 * @brief  Constructs a new DescribeMigrationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMigrationTaskRequest::DescribeMigrationTaskRequest(const DescribeMigrationTaskRequest &other)
    : MigrationHubRequest(new DescribeMigrationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMigrationTaskRequest object.
 */
DescribeMigrationTaskRequest::DescribeMigrationTaskRequest()
    : MigrationHubRequest(new DescribeMigrationTaskRequestPrivate(MigrationHubRequest::DescribeMigrationTaskAction, this))
{

}

bool DescribeMigrationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMigrationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMigrationTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMigrationTaskRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMigrationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMigrationTaskRequestPrivate
 *
 * @brief  Private implementation for DescribeMigrationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMigrationTaskRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public DescribeMigrationTaskRequest instance.
 */
DescribeMigrationTaskRequestPrivate::DescribeMigrationTaskRequestPrivate(
    const MigrationHubRequest::Action action, DescribeMigrationTaskRequest * const q)
    : DescribeMigrationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMigrationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMigrationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMigrationTaskRequest instance.
 */
DescribeMigrationTaskRequestPrivate::DescribeMigrationTaskRequestPrivate(
    const DescribeMigrationTaskRequestPrivate &other, DescribeMigrationTaskRequest * const q)
    : DescribeMigrationTaskPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
