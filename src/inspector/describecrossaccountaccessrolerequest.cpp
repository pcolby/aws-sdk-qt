// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecrossaccountaccessrolerequest.h"
#include "describecrossaccountaccessrolerequest_p.h"
#include "describecrossaccountaccessroleresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeCrossAccountAccessRoleRequest
 * \brief The DescribeCrossAccountAccessRoleRequest class provides an interface for Inspector DescribeCrossAccountAccessRole requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeCrossAccountAccessRole
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCrossAccountAccessRoleRequest::DescribeCrossAccountAccessRoleRequest(const DescribeCrossAccountAccessRoleRequest &other)
    : InspectorRequest(new DescribeCrossAccountAccessRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCrossAccountAccessRoleRequest object.
 */
DescribeCrossAccountAccessRoleRequest::DescribeCrossAccountAccessRoleRequest()
    : InspectorRequest(new DescribeCrossAccountAccessRoleRequestPrivate(InspectorRequest::DescribeCrossAccountAccessRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCrossAccountAccessRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCrossAccountAccessRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCrossAccountAccessRoleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCrossAccountAccessRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeCrossAccountAccessRoleRequestPrivate
 * \brief The DescribeCrossAccountAccessRoleRequestPrivate class provides private implementation for DescribeCrossAccountAccessRoleRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeCrossAccountAccessRoleRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeCrossAccountAccessRoleRequestPrivate::DescribeCrossAccountAccessRoleRequestPrivate(
    const InspectorRequest::Action action, DescribeCrossAccountAccessRoleRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCrossAccountAccessRoleRequest
 * class' copy constructor.
 */
DescribeCrossAccountAccessRoleRequestPrivate::DescribeCrossAccountAccessRoleRequestPrivate(
    const DescribeCrossAccountAccessRoleRequestPrivate &other, DescribeCrossAccountAccessRoleRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
