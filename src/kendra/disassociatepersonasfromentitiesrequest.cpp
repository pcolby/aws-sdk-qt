// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatepersonasfromentitiesrequest.h"
#include "disassociatepersonasfromentitiesrequest_p.h"
#include "disassociatepersonasfromentitiesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesRequest
 * \brief The DisassociatePersonasFromEntitiesRequest class provides an interface for Kendra DisassociatePersonasFromEntities requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociatePersonasFromEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociatePersonasFromEntitiesRequest::DisassociatePersonasFromEntitiesRequest(const DisassociatePersonasFromEntitiesRequest &other)
    : KendraRequest(new DisassociatePersonasFromEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociatePersonasFromEntitiesRequest object.
 */
DisassociatePersonasFromEntitiesRequest::DisassociatePersonasFromEntitiesRequest()
    : KendraRequest(new DisassociatePersonasFromEntitiesRequestPrivate(KendraRequest::DisassociatePersonasFromEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociatePersonasFromEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociatePersonasFromEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociatePersonasFromEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociatePersonasFromEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesRequestPrivate
 * \brief The DisassociatePersonasFromEntitiesRequestPrivate class provides private implementation for DisassociatePersonasFromEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociatePersonasFromEntitiesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DisassociatePersonasFromEntitiesRequestPrivate::DisassociatePersonasFromEntitiesRequestPrivate(
    const KendraRequest::Action action, DisassociatePersonasFromEntitiesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociatePersonasFromEntitiesRequest
 * class' copy constructor.
 */
DisassociatePersonasFromEntitiesRequestPrivate::DisassociatePersonasFromEntitiesRequestPrivate(
    const DisassociatePersonasFromEntitiesRequestPrivate &other, DisassociatePersonasFromEntitiesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
