// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulegroupsnamespacesrequest.h"
#include "listrulegroupsnamespacesrequest_p.h"
#include "listrulegroupsnamespacesresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::ListRuleGroupsNamespacesRequest
 * \brief The ListRuleGroupsNamespacesRequest class provides an interface for Amp ListRuleGroupsNamespaces requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::listRuleGroupsNamespaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListRuleGroupsNamespacesRequest::ListRuleGroupsNamespacesRequest(const ListRuleGroupsNamespacesRequest &other)
    : AmpRequest(new ListRuleGroupsNamespacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRuleGroupsNamespacesRequest object.
 */
ListRuleGroupsNamespacesRequest::ListRuleGroupsNamespacesRequest()
    : AmpRequest(new ListRuleGroupsNamespacesRequestPrivate(AmpRequest::ListRuleGroupsNamespacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRuleGroupsNamespacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRuleGroupsNamespacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRuleGroupsNamespacesRequest::response(QNetworkReply * const reply) const
{
    return new ListRuleGroupsNamespacesResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::ListRuleGroupsNamespacesRequestPrivate
 * \brief The ListRuleGroupsNamespacesRequestPrivate class provides private implementation for ListRuleGroupsNamespacesRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a ListRuleGroupsNamespacesRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
ListRuleGroupsNamespacesRequestPrivate::ListRuleGroupsNamespacesRequestPrivate(
    const AmpRequest::Action action, ListRuleGroupsNamespacesRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRuleGroupsNamespacesRequest
 * class' copy constructor.
 */
ListRuleGroupsNamespacesRequestPrivate::ListRuleGroupsNamespacesRequestPrivate(
    const ListRuleGroupsNamespacesRequestPrivate &other, ListRuleGroupsNamespacesRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
