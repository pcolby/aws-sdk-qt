// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrulegroupsnamespacerequest.h"
#include "createrulegroupsnamespacerequest_p.h"
#include "createrulegroupsnamespaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateRuleGroupsNamespaceRequest
 * \brief The CreateRuleGroupsNamespaceRequest class provides an interface for Amp CreateRuleGroupsNamespace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createRuleGroupsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRuleGroupsNamespaceRequest::CreateRuleGroupsNamespaceRequest(const CreateRuleGroupsNamespaceRequest &other)
    : AmpRequest(new CreateRuleGroupsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRuleGroupsNamespaceRequest object.
 */
CreateRuleGroupsNamespaceRequest::CreateRuleGroupsNamespaceRequest()
    : AmpRequest(new CreateRuleGroupsNamespaceRequestPrivate(AmpRequest::CreateRuleGroupsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRuleGroupsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRuleGroupsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRuleGroupsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateRuleGroupsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::CreateRuleGroupsNamespaceRequestPrivate
 * \brief The CreateRuleGroupsNamespaceRequestPrivate class provides private implementation for CreateRuleGroupsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateRuleGroupsNamespaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
CreateRuleGroupsNamespaceRequestPrivate::CreateRuleGroupsNamespaceRequestPrivate(
    const AmpRequest::Action action, CreateRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRuleGroupsNamespaceRequest
 * class' copy constructor.
 */
CreateRuleGroupsNamespaceRequestPrivate::CreateRuleGroupsNamespaceRequestPrivate(
    const CreateRuleGroupsNamespaceRequestPrivate &other, CreateRuleGroupsNamespaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
