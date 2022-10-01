// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprincipalmappingrequest.h"
#include "describeprincipalmappingrequest_p.h"
#include "describeprincipalmappingresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingRequest
 * \brief The DescribePrincipalMappingRequest class provides an interface for Kendra DescribePrincipalMapping requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describePrincipalMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePrincipalMappingRequest::DescribePrincipalMappingRequest(const DescribePrincipalMappingRequest &other)
    : KendraRequest(new DescribePrincipalMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePrincipalMappingRequest object.
 */
DescribePrincipalMappingRequest::DescribePrincipalMappingRequest()
    : KendraRequest(new DescribePrincipalMappingRequestPrivate(KendraRequest::DescribePrincipalMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePrincipalMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePrincipalMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePrincipalMappingRequest::response(QNetworkReply * const reply) const
{
    return new DescribePrincipalMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingRequestPrivate
 * \brief The DescribePrincipalMappingRequestPrivate class provides private implementation for DescribePrincipalMappingRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribePrincipalMappingRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribePrincipalMappingRequestPrivate::DescribePrincipalMappingRequestPrivate(
    const KendraRequest::Action action, DescribePrincipalMappingRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePrincipalMappingRequest
 * class' copy constructor.
 */
DescribePrincipalMappingRequestPrivate::DescribePrincipalMappingRequestPrivate(
    const DescribePrincipalMappingRequestPrivate &other, DescribePrincipalMappingRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
