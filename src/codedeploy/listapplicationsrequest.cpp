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

#include "listapplicationsrequest.h"
#include "listapplicationsrequest_p.h"
#include "listapplicationsresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  ListApplicationsRequest
 *
 * @brief  Implements CodeDeploy ListApplications requests.
 *
 * @see    CodeDeployClient::listApplications
 */

/**
 * @brief  Constructs a new ListApplicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListApplicationsRequest::ListApplicationsRequest(const ListApplicationsRequest &other)
    : CodeDeployRequest(new ListApplicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListApplicationsRequest object.
 */
ListApplicationsRequest::ListApplicationsRequest()
    : CodeDeployRequest(new ListApplicationsRequestPrivate(CodeDeployRequest::ListApplicationsAction, this))
{

}

bool ListApplicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListApplicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListApplicationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListApplicationsRequestPrivate
 *
 * @brief  Private implementation for ListApplicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ListApplicationsRequest instance.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const CodeDeployRequest::Action action, ListApplicationsRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListApplicationsRequest instance.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const ListApplicationsRequestPrivate &other, ListApplicationsRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
