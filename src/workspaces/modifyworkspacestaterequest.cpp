// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyworkspacestaterequest.h"
#include "modifyworkspacestaterequest_p.h"
#include "modifyworkspacestateresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceStateRequest
 * \brief The ModifyWorkspaceStateRequest class provides an interface for WorkSpaces ModifyWorkspaceState requests.
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
 * \sa WorkSpacesClient::modifyWorkspaceState
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyWorkspaceStateRequest::ModifyWorkspaceStateRequest(const ModifyWorkspaceStateRequest &other)
    : WorkSpacesRequest(new ModifyWorkspaceStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyWorkspaceStateRequest object.
 */
ModifyWorkspaceStateRequest::ModifyWorkspaceStateRequest()
    : WorkSpacesRequest(new ModifyWorkspaceStateRequestPrivate(WorkSpacesRequest::ModifyWorkspaceStateAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyWorkspaceStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyWorkspaceStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyWorkspaceStateRequest::response(QNetworkReply * const reply) const
{
    return new ModifyWorkspaceStateResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceStateRequestPrivate
 * \brief The ModifyWorkspaceStateRequestPrivate class provides private implementation for ModifyWorkspaceStateRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceStateRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyWorkspaceStateRequestPrivate::ModifyWorkspaceStateRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyWorkspaceStateRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyWorkspaceStateRequest
 * class' copy constructor.
 */
ModifyWorkspaceStateRequestPrivate::ModifyWorkspaceStateRequestPrivate(
    const ModifyWorkspaceStateRequestPrivate &other, ModifyWorkspaceStateRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
