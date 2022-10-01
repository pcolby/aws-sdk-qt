// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateentitiesfromexperiencerequest.h"
#include "disassociateentitiesfromexperiencerequest_p.h"
#include "disassociateentitiesfromexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociateEntitiesFromExperienceRequest
 * \brief The DisassociateEntitiesFromExperienceRequest class provides an interface for Kendra DisassociateEntitiesFromExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociateEntitiesFromExperience
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateEntitiesFromExperienceRequest::DisassociateEntitiesFromExperienceRequest(const DisassociateEntitiesFromExperienceRequest &other)
    : KendraRequest(new DisassociateEntitiesFromExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateEntitiesFromExperienceRequest object.
 */
DisassociateEntitiesFromExperienceRequest::DisassociateEntitiesFromExperienceRequest()
    : KendraRequest(new DisassociateEntitiesFromExperienceRequestPrivate(KendraRequest::DisassociateEntitiesFromExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateEntitiesFromExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateEntitiesFromExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateEntitiesFromExperienceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateEntitiesFromExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DisassociateEntitiesFromExperienceRequestPrivate
 * \brief The DisassociateEntitiesFromExperienceRequestPrivate class provides private implementation for DisassociateEntitiesFromExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociateEntitiesFromExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DisassociateEntitiesFromExperienceRequestPrivate::DisassociateEntitiesFromExperienceRequestPrivate(
    const KendraRequest::Action action, DisassociateEntitiesFromExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateEntitiesFromExperienceRequest
 * class' copy constructor.
 */
DisassociateEntitiesFromExperienceRequestPrivate::DisassociateEntitiesFromExperienceRequestPrivate(
    const DisassociateEntitiesFromExperienceRequestPrivate &other, DisassociateEntitiesFromExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
