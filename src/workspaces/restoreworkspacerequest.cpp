// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoreworkspacerequest.h"
#include "restoreworkspacerequest_p.h"
#include "restoreworkspaceresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RestoreWorkspaceRequest
 * \brief The RestoreWorkspaceRequest class provides an interface for WorkSpaces RestoreWorkspace requests.
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
 * \sa WorkSpacesClient::restoreWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreWorkspaceRequest::RestoreWorkspaceRequest(const RestoreWorkspaceRequest &other)
    : WorkSpacesRequest(new RestoreWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreWorkspaceRequest object.
 */
RestoreWorkspaceRequest::RestoreWorkspaceRequest()
    : WorkSpacesRequest(new RestoreWorkspaceRequestPrivate(WorkSpacesRequest::RestoreWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new RestoreWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::RestoreWorkspaceRequestPrivate
 * \brief The RestoreWorkspaceRequestPrivate class provides private implementation for RestoreWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RestoreWorkspaceRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
RestoreWorkspaceRequestPrivate::RestoreWorkspaceRequestPrivate(
    const WorkSpacesRequest::Action action, RestoreWorkspaceRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreWorkspaceRequest
 * class' copy constructor.
 */
RestoreWorkspaceRequestPrivate::RestoreWorkspaceRequestPrivate(
    const RestoreWorkspaceRequestPrivate &other, RestoreWorkspaceRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
