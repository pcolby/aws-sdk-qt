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

#include "stopworkspacesrequest.h"
#include "stopworkspacesrequest_p.h"
#include "stopworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::StopWorkspacesRequest
 *
 * \brief The StopWorkspacesRequest class provides an interface for WorkSpaces StopWorkspaces requests.
 *
 * \ingroup WorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::stopWorkspaces
 */

/*!
 * @brief  Constructs a new StopWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopWorkspacesRequest::StopWorkspacesRequest(const StopWorkspacesRequest &other)
    : WorkSpacesRequest(new StopWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopWorkspacesRequest object.
 */
StopWorkspacesRequest::StopWorkspacesRequest()
    : WorkSpacesRequest(new StopWorkspacesRequestPrivate(WorkSpacesRequest::StopWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool StopWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopWorkspacesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
QtAws::Core::AwsAbstractResponse * StopWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new StopWorkspacesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopWorkspacesRequestPrivate
 *
 * @brief  Private implementation for StopWorkspacesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public StopWorkspacesRequest instance.
 */
StopWorkspacesRequestPrivate::StopWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, StopWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopWorkspacesRequest instance.
 */
StopWorkspacesRequestPrivate::StopWorkspacesRequestPrivate(
    const StopWorkspacesRequestPrivate &other, StopWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
