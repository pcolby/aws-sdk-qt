// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclientbrandingrequest.h"
#include "describeclientbrandingrequest_p.h"
#include "describeclientbrandingresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeClientBrandingRequest
 * \brief The DescribeClientBrandingRequest class provides an interface for WorkSpaces DescribeClientBranding requests.
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
 * \sa WorkSpacesClient::describeClientBranding
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClientBrandingRequest::DescribeClientBrandingRequest(const DescribeClientBrandingRequest &other)
    : WorkSpacesRequest(new DescribeClientBrandingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClientBrandingRequest object.
 */
DescribeClientBrandingRequest::DescribeClientBrandingRequest()
    : WorkSpacesRequest(new DescribeClientBrandingRequestPrivate(WorkSpacesRequest::DescribeClientBrandingAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClientBrandingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClientBrandingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClientBrandingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClientBrandingResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeClientBrandingRequestPrivate
 * \brief The DescribeClientBrandingRequestPrivate class provides private implementation for DescribeClientBrandingRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeClientBrandingRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeClientBrandingRequestPrivate::DescribeClientBrandingRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeClientBrandingRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClientBrandingRequest
 * class' copy constructor.
 */
DescribeClientBrandingRequestPrivate::DescribeClientBrandingRequestPrivate(
    const DescribeClientBrandingRequestPrivate &other, DescribeClientBrandingRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
