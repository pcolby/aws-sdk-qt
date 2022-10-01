// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "migrateworkspacerequest.h"
#include "migrateworkspacerequest_p.h"
#include "migrateworkspaceresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::MigrateWorkspaceRequest
 * \brief The MigrateWorkspaceRequest class provides an interface for WorkSpaces MigrateWorkspace requests.
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
 * \sa WorkSpacesClient::migrateWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
MigrateWorkspaceRequest::MigrateWorkspaceRequest(const MigrateWorkspaceRequest &other)
    : WorkSpacesRequest(new MigrateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MigrateWorkspaceRequest object.
 */
MigrateWorkspaceRequest::MigrateWorkspaceRequest()
    : WorkSpacesRequest(new MigrateWorkspaceRequestPrivate(WorkSpacesRequest::MigrateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool MigrateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MigrateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MigrateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new MigrateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::MigrateWorkspaceRequestPrivate
 * \brief The MigrateWorkspaceRequestPrivate class provides private implementation for MigrateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a MigrateWorkspaceRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
MigrateWorkspaceRequestPrivate::MigrateWorkspaceRequestPrivate(
    const WorkSpacesRequest::Action action, MigrateWorkspaceRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MigrateWorkspaceRequest
 * class' copy constructor.
 */
MigrateWorkspaceRequestPrivate::MigrateWorkspaceRequestPrivate(
    const MigrateWorkspaceRequestPrivate &other, MigrateWorkspaceRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
