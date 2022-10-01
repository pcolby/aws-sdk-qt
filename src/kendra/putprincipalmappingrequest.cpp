// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprincipalmappingrequest.h"
#include "putprincipalmappingrequest_p.h"
#include "putprincipalmappingresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::PutPrincipalMappingRequest
 * \brief The PutPrincipalMappingRequest class provides an interface for Kendra PutPrincipalMapping requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::putPrincipalMapping
 */

/*!
 * Constructs a copy of \a other.
 */
PutPrincipalMappingRequest::PutPrincipalMappingRequest(const PutPrincipalMappingRequest &other)
    : KendraRequest(new PutPrincipalMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPrincipalMappingRequest object.
 */
PutPrincipalMappingRequest::PutPrincipalMappingRequest()
    : KendraRequest(new PutPrincipalMappingRequestPrivate(KendraRequest::PutPrincipalMappingAction, this))
{

}

/*!
 * \reimp
 */
bool PutPrincipalMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPrincipalMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPrincipalMappingRequest::response(QNetworkReply * const reply) const
{
    return new PutPrincipalMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::PutPrincipalMappingRequestPrivate
 * \brief The PutPrincipalMappingRequestPrivate class provides private implementation for PutPrincipalMappingRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a PutPrincipalMappingRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
PutPrincipalMappingRequestPrivate::PutPrincipalMappingRequestPrivate(
    const KendraRequest::Action action, PutPrincipalMappingRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPrincipalMappingRequest
 * class' copy constructor.
 */
PutPrincipalMappingRequestPrivate::PutPrincipalMappingRequestPrivate(
    const PutPrincipalMappingRequestPrivate &other, PutPrincipalMappingRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
