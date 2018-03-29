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

#include "buildsuggestersrequest.h"
#include "buildsuggestersrequest_p.h"
#include "buildsuggestersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  BuildSuggestersRequest
 *
 * @brief  Implements CloudSearch BuildSuggesters requests.
 *
 * @see    CloudSearchClient::buildSuggesters
 */

/**
 * @brief  Constructs a new BuildSuggestersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BuildSuggestersRequest::BuildSuggestersRequest(const BuildSuggestersRequest &other)
    : CloudSearchRequest(new BuildSuggestersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BuildSuggestersRequest object.
 */
BuildSuggestersRequest::BuildSuggestersRequest()
    : CloudSearchRequest(new BuildSuggestersRequestPrivate(CloudSearchRequest::BuildSuggestersAction, this))
{

}

bool BuildSuggestersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BuildSuggestersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BuildSuggestersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * BuildSuggestersRequest::response(QNetworkReply * const reply) const
{
    return new BuildSuggestersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BuildSuggestersRequestPrivate
 *
 * @brief  Private implementation for BuildSuggestersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BuildSuggestersRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public BuildSuggestersRequest instance.
 */
BuildSuggestersRequestPrivate::BuildSuggestersRequestPrivate(
    const CloudSearchRequest::Action action, BuildSuggestersRequest * const q)
    : BuildSuggestersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BuildSuggestersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BuildSuggestersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BuildSuggestersRequest instance.
 */
BuildSuggestersRequestPrivate::BuildSuggestersRequestPrivate(
    const BuildSuggestersRequestPrivate &other, BuildSuggestersRequest * const q)
    : BuildSuggestersPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
