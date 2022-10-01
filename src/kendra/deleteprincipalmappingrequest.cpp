// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprincipalmappingrequest.h"
#include "deleteprincipalmappingrequest_p.h"
#include "deleteprincipalmappingresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingRequest
 * \brief The DeletePrincipalMappingRequest class provides an interface for Kendra DeletePrincipalMapping requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deletePrincipalMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePrincipalMappingRequest::DeletePrincipalMappingRequest(const DeletePrincipalMappingRequest &other)
    : KendraRequest(new DeletePrincipalMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePrincipalMappingRequest object.
 */
DeletePrincipalMappingRequest::DeletePrincipalMappingRequest()
    : KendraRequest(new DeletePrincipalMappingRequestPrivate(KendraRequest::DeletePrincipalMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePrincipalMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePrincipalMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePrincipalMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeletePrincipalMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingRequestPrivate
 * \brief The DeletePrincipalMappingRequestPrivate class provides private implementation for DeletePrincipalMappingRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeletePrincipalMappingRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeletePrincipalMappingRequestPrivate::DeletePrincipalMappingRequestPrivate(
    const KendraRequest::Action action, DeletePrincipalMappingRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePrincipalMappingRequest
 * class' copy constructor.
 */
DeletePrincipalMappingRequestPrivate::DeletePrincipalMappingRequestPrivate(
    const DeletePrincipalMappingRequestPrivate &other, DeletePrincipalMappingRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
