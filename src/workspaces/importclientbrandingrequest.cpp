// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importclientbrandingrequest.h"
#include "importclientbrandingrequest_p.h"
#include "importclientbrandingresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ImportClientBrandingRequest
 * \brief The ImportClientBrandingRequest class provides an interface for WorkSpaces ImportClientBranding requests.
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
 * \sa WorkSpacesClient::importClientBranding
 */

/*!
 * Constructs a copy of \a other.
 */
ImportClientBrandingRequest::ImportClientBrandingRequest(const ImportClientBrandingRequest &other)
    : WorkSpacesRequest(new ImportClientBrandingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportClientBrandingRequest object.
 */
ImportClientBrandingRequest::ImportClientBrandingRequest()
    : WorkSpacesRequest(new ImportClientBrandingRequestPrivate(WorkSpacesRequest::ImportClientBrandingAction, this))
{

}

/*!
 * \reimp
 */
bool ImportClientBrandingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportClientBrandingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportClientBrandingRequest::response(QNetworkReply * const reply) const
{
    return new ImportClientBrandingResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ImportClientBrandingRequestPrivate
 * \brief The ImportClientBrandingRequestPrivate class provides private implementation for ImportClientBrandingRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ImportClientBrandingRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ImportClientBrandingRequestPrivate::ImportClientBrandingRequestPrivate(
    const WorkSpacesRequest::Action action, ImportClientBrandingRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportClientBrandingRequest
 * class' copy constructor.
 */
ImportClientBrandingRequestPrivate::ImportClientBrandingRequestPrivate(
    const ImportClientBrandingRequestPrivate &other, ImportClientBrandingRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
