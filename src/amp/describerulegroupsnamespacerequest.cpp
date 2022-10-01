// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerulegroupsnamespacerequest.h"
#include "describerulegroupsnamespacerequest_p.h"
#include "describerulegroupsnamespaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeRuleGroupsNamespaceRequest
 * \brief The DescribeRuleGroupsNamespaceRequest class provides an interface for Amp DescribeRuleGroupsNamespace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeRuleGroupsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRuleGroupsNamespaceRequest::DescribeRuleGroupsNamespaceRequest(const DescribeRuleGroupsNamespaceRequest &other)
    : AmpRequest(new DescribeRuleGroupsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRuleGroupsNamespaceRequest object.
 */
DescribeRuleGroupsNamespaceRequest::DescribeRuleGroupsNamespaceRequest()
    : AmpRequest(new DescribeRuleGroupsNamespaceRequestPrivate(AmpRequest::DescribeRuleGroupsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRuleGroupsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRuleGroupsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRuleGroupsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRuleGroupsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DescribeRuleGroupsNamespaceRequestPrivate
 * \brief The DescribeRuleGroupsNamespaceRequestPrivate class provides private implementation for DescribeRuleGroupsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeRuleGroupsNamespaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DescribeRuleGroupsNamespaceRequestPrivate::DescribeRuleGroupsNamespaceRequestPrivate(
    const AmpRequest::Action action, DescribeRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRuleGroupsNamespaceRequest
 * class' copy constructor.
 */
DescribeRuleGroupsNamespaceRequestPrivate::DescribeRuleGroupsNamespaceRequestPrivate(
    const DescribeRuleGroupsNamespaceRequestPrivate &other, DescribeRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
