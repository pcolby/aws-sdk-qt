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

#include "createworkspacesrequest.h"
#include "createworkspacesrequest_p.h"
#include "createworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesRequest
 *
 * \brief The CreateWorkspacesRequest class provides an interface for WorkSpaces CreateWorkspaces requests.
 *
 * \ingroup WorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::createWorkspaces
 */

/*!
 * @brief  Constructs a new CreateWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateWorkspacesRequest::CreateWorkspacesRequest(const CreateWorkspacesRequest &other)
    : WorkSpacesRequest(new CreateWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateWorkspacesRequest object.
 */
CreateWorkspacesRequest::CreateWorkspacesRequest()
    : WorkSpacesRequest(new CreateWorkspacesRequestPrivate(WorkSpacesRequest::CreateWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateWorkspacesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspacesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateWorkspacesRequestPrivate
 *
 * @brief  Private implementation for CreateWorkspacesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public CreateWorkspacesRequest instance.
 */
CreateWorkspacesRequestPrivate::CreateWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, CreateWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateWorkspacesRequest instance.
 */
CreateWorkspacesRequestPrivate::CreateWorkspacesRequestPrivate(
    const CreateWorkspacesRequestPrivate &other, CreateWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
