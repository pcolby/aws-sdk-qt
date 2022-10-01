// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterulegroupsnamespacerequest.h"
#include "deleterulegroupsnamespacerequest_p.h"
#include "deleterulegroupsnamespaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteRuleGroupsNamespaceRequest
 * \brief The DeleteRuleGroupsNamespaceRequest class provides an interface for Amp DeleteRuleGroupsNamespace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteRuleGroupsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRuleGroupsNamespaceRequest::DeleteRuleGroupsNamespaceRequest(const DeleteRuleGroupsNamespaceRequest &other)
    : AmpRequest(new DeleteRuleGroupsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRuleGroupsNamespaceRequest object.
 */
DeleteRuleGroupsNamespaceRequest::DeleteRuleGroupsNamespaceRequest()
    : AmpRequest(new DeleteRuleGroupsNamespaceRequestPrivate(AmpRequest::DeleteRuleGroupsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRuleGroupsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRuleGroupsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRuleGroupsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRuleGroupsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DeleteRuleGroupsNamespaceRequestPrivate
 * \brief The DeleteRuleGroupsNamespaceRequestPrivate class provides private implementation for DeleteRuleGroupsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteRuleGroupsNamespaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DeleteRuleGroupsNamespaceRequestPrivate::DeleteRuleGroupsNamespaceRequestPrivate(
    const AmpRequest::Action action, DeleteRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRuleGroupsNamespaceRequest
 * class' copy constructor.
 */
DeleteRuleGroupsNamespaceRequestPrivate::DeleteRuleGroupsNamespaceRequestPrivate(
    const DeleteRuleGroupsNamespaceRequestPrivate &other, DeleteRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
