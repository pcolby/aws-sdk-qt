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

#include "listcuratedenvironmentimagesrequest.h"
#include "listcuratedenvironmentimagesrequest_p.h"
#include "listcuratedenvironmentimagesresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/**
 * @class  ListCuratedEnvironmentImagesRequest
 *
 * @brief  Implements CodeBuild ListCuratedEnvironmentImages requests.
 *
 * @see    CodeBuildClient::listCuratedEnvironmentImages
 */

/**
 * @brief  Constructs a new ListCuratedEnvironmentImagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCuratedEnvironmentImagesRequest::ListCuratedEnvironmentImagesRequest(const ListCuratedEnvironmentImagesRequest &other)
    : CodeBuildRequest(new ListCuratedEnvironmentImagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCuratedEnvironmentImagesRequest object.
 */
ListCuratedEnvironmentImagesRequest::ListCuratedEnvironmentImagesRequest()
    : CodeBuildRequest(new ListCuratedEnvironmentImagesRequestPrivate(CodeBuildRequest::ListCuratedEnvironmentImagesAction, this))
{

}

bool ListCuratedEnvironmentImagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCuratedEnvironmentImagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCuratedEnvironmentImagesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCuratedEnvironmentImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListCuratedEnvironmentImagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCuratedEnvironmentImagesRequestPrivate
 *
 * @brief  Private implementation for ListCuratedEnvironmentImagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCuratedEnvironmentImagesRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public ListCuratedEnvironmentImagesRequest instance.
 */
ListCuratedEnvironmentImagesRequestPrivate::ListCuratedEnvironmentImagesRequestPrivate(
    const CodeBuildRequest::Action action, ListCuratedEnvironmentImagesRequest * const q)
    : ListCuratedEnvironmentImagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCuratedEnvironmentImagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCuratedEnvironmentImagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCuratedEnvironmentImagesRequest instance.
 */
ListCuratedEnvironmentImagesRequestPrivate::ListCuratedEnvironmentImagesRequestPrivate(
    const ListCuratedEnvironmentImagesRequestPrivate &other, ListCuratedEnvironmentImagesRequest * const q)
    : ListCuratedEnvironmentImagesPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
