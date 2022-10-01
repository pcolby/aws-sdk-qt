// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterworkspacedirectoryrequest.h"
#include "deregisterworkspacedirectoryrequest_p.h"
#include "deregisterworkspacedirectoryresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeregisterWorkspaceDirectoryRequest
 * \brief The DeregisterWorkspaceDirectoryRequest class provides an interface for WorkSpaces DeregisterWorkspaceDirectory requests.
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
 * \sa WorkSpacesClient::deregisterWorkspaceDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterWorkspaceDirectoryRequest::DeregisterWorkspaceDirectoryRequest(const DeregisterWorkspaceDirectoryRequest &other)
    : WorkSpacesRequest(new DeregisterWorkspaceDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterWorkspaceDirectoryRequest object.
 */
DeregisterWorkspaceDirectoryRequest::DeregisterWorkspaceDirectoryRequest()
    : WorkSpacesRequest(new DeregisterWorkspaceDirectoryRequestPrivate(WorkSpacesRequest::DeregisterWorkspaceDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterWorkspaceDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterWorkspaceDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterWorkspaceDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterWorkspaceDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DeregisterWorkspaceDirectoryRequestPrivate
 * \brief The DeregisterWorkspaceDirectoryRequestPrivate class provides private implementation for DeregisterWorkspaceDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeregisterWorkspaceDirectoryRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DeregisterWorkspaceDirectoryRequestPrivate::DeregisterWorkspaceDirectoryRequestPrivate(
    const WorkSpacesRequest::Action action, DeregisterWorkspaceDirectoryRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterWorkspaceDirectoryRequest
 * class' copy constructor.
 */
DeregisterWorkspaceDirectoryRequestPrivate::DeregisterWorkspaceDirectoryRequestPrivate(
    const DeregisterWorkspaceDirectoryRequestPrivate &other, DeregisterWorkspaceDirectoryRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
