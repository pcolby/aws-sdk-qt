// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyaccountrequest.h"
#include "modifyaccountrequest_p.h"
#include "modifyaccountresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyAccountRequest
 * \brief The ModifyAccountRequest class provides an interface for WorkSpaces ModifyAccount requests.
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
 * \sa WorkSpacesClient::modifyAccount
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyAccountRequest::ModifyAccountRequest(const ModifyAccountRequest &other)
    : WorkSpacesRequest(new ModifyAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyAccountRequest object.
 */
ModifyAccountRequest::ModifyAccountRequest()
    : WorkSpacesRequest(new ModifyAccountRequestPrivate(WorkSpacesRequest::ModifyAccountAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyAccountRequest::response(QNetworkReply * const reply) const
{
    return new ModifyAccountResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyAccountRequestPrivate
 * \brief The ModifyAccountRequestPrivate class provides private implementation for ModifyAccountRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyAccountRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyAccountRequestPrivate::ModifyAccountRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyAccountRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyAccountRequest
 * class' copy constructor.
 */
ModifyAccountRequestPrivate::ModifyAccountRequestPrivate(
    const ModifyAccountRequestPrivate &other, ModifyAccountRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
