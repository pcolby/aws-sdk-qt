/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyclientpropertiesrequest.h"
#include "modifyclientpropertiesrequest_p.h"
#include "modifyclientpropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyClientPropertiesRequest
 * \brief The ModifyClientPropertiesRequest class provides an interface for WorkSpaces ModifyClientProperties requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for your
 *  users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to procure and deploy hardware or install complex
 *  software. You can quickly add or remove users as your needs change. Users can access their virtual desktops from
 *  multiple devices or web
 * 
 *  browsers>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the WorkSpaces
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Amazon WorkSpaces service, see <a href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces endpoints and
 *  quotas</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  You can also manage your WorkSpaces resources using the WorkSpaces console, Command Line Interface (CLI), and SDKs. For
 *  more information about administering WorkSpaces, see the <a
 *  href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon WorkSpaces Administration Guide</a>. For more
 *  information about using the Amazon WorkSpaces client application or web browser to access provisioned WorkSpaces, see
 *  the <a href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon WorkSpaces User Guide</a>. For more
 *  information about using the CLI to manage your WorkSpaces resources, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces section of the CLI
 *
 * \sa WorkSpacesClient::modifyClientProperties
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyClientPropertiesRequest::ModifyClientPropertiesRequest(const ModifyClientPropertiesRequest &other)
    : WorkSpacesRequest(new ModifyClientPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyClientPropertiesRequest object.
 */
ModifyClientPropertiesRequest::ModifyClientPropertiesRequest()
    : WorkSpacesRequest(new ModifyClientPropertiesRequestPrivate(WorkSpacesRequest::ModifyClientPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyClientPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyClientPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyClientPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClientPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyClientPropertiesRequestPrivate
 * \brief The ModifyClientPropertiesRequestPrivate class provides private implementation for ModifyClientPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyClientPropertiesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyClientPropertiesRequestPrivate::ModifyClientPropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyClientPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyClientPropertiesRequest
 * class' copy constructor.
 */
ModifyClientPropertiesRequestPrivate::ModifyClientPropertiesRequestPrivate(
    const ModifyClientPropertiesRequestPrivate &other, ModifyClientPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
