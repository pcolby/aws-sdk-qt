// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionaliasesrequest.h"
#include "describeconnectionaliasesrequest_p.h"
#include "describeconnectionaliasesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasesRequest
 * \brief The DescribeConnectionAliasesRequest class provides an interface for WorkSpaces DescribeConnectionAliases requests.
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
 * \sa WorkSpacesClient::describeConnectionAliases
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectionAliasesRequest::DescribeConnectionAliasesRequest(const DescribeConnectionAliasesRequest &other)
    : WorkSpacesRequest(new DescribeConnectionAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectionAliasesRequest object.
 */
DescribeConnectionAliasesRequest::DescribeConnectionAliasesRequest()
    : WorkSpacesRequest(new DescribeConnectionAliasesRequestPrivate(WorkSpacesRequest::DescribeConnectionAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectionAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectionAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectionAliasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasesRequestPrivate
 * \brief The DescribeConnectionAliasesRequestPrivate class provides private implementation for DescribeConnectionAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeConnectionAliasesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeConnectionAliasesRequestPrivate::DescribeConnectionAliasesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeConnectionAliasesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionAliasesRequest
 * class' copy constructor.
 */
DescribeConnectionAliasesRequestPrivate::DescribeConnectionAliasesRequestPrivate(
    const DescribeConnectionAliasesRequestPrivate &other, DescribeConnectionAliasesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
