// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrulegroupsnamespacerequest.h"
#include "putrulegroupsnamespacerequest_p.h"
#include "putrulegroupsnamespaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::PutRuleGroupsNamespaceRequest
 * \brief The PutRuleGroupsNamespaceRequest class provides an interface for Amp PutRuleGroupsNamespace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::putRuleGroupsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
PutRuleGroupsNamespaceRequest::PutRuleGroupsNamespaceRequest(const PutRuleGroupsNamespaceRequest &other)
    : AmpRequest(new PutRuleGroupsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRuleGroupsNamespaceRequest object.
 */
PutRuleGroupsNamespaceRequest::PutRuleGroupsNamespaceRequest()
    : AmpRequest(new PutRuleGroupsNamespaceRequestPrivate(AmpRequest::PutRuleGroupsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool PutRuleGroupsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRuleGroupsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRuleGroupsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new PutRuleGroupsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::PutRuleGroupsNamespaceRequestPrivate
 * \brief The PutRuleGroupsNamespaceRequestPrivate class provides private implementation for PutRuleGroupsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a PutRuleGroupsNamespaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
PutRuleGroupsNamespaceRequestPrivate::PutRuleGroupsNamespaceRequestPrivate(
    const AmpRequest::Action action, PutRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRuleGroupsNamespaceRequest
 * class' copy constructor.
 */
PutRuleGroupsNamespaceRequestPrivate::PutRuleGroupsNamespaceRequestPrivate(
    const PutRuleGroupsNamespaceRequestPrivate &other, PutRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
