// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateentitiestoexperiencerequest.h"
#include "associateentitiestoexperiencerequest_p.h"
#include "associateentitiestoexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::AssociateEntitiesToExperienceRequest
 * \brief The AssociateEntitiesToExperienceRequest class provides an interface for Kendra AssociateEntitiesToExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::associateEntitiesToExperience
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateEntitiesToExperienceRequest::AssociateEntitiesToExperienceRequest(const AssociateEntitiesToExperienceRequest &other)
    : KendraRequest(new AssociateEntitiesToExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateEntitiesToExperienceRequest object.
 */
AssociateEntitiesToExperienceRequest::AssociateEntitiesToExperienceRequest()
    : KendraRequest(new AssociateEntitiesToExperienceRequestPrivate(KendraRequest::AssociateEntitiesToExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateEntitiesToExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateEntitiesToExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateEntitiesToExperienceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateEntitiesToExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::AssociateEntitiesToExperienceRequestPrivate
 * \brief The AssociateEntitiesToExperienceRequestPrivate class provides private implementation for AssociateEntitiesToExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a AssociateEntitiesToExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
AssociateEntitiesToExperienceRequestPrivate::AssociateEntitiesToExperienceRequestPrivate(
    const KendraRequest::Action action, AssociateEntitiesToExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateEntitiesToExperienceRequest
 * class' copy constructor.
 */
AssociateEntitiesToExperienceRequestPrivate::AssociateEntitiesToExperienceRequestPrivate(
    const AssociateEntitiesToExperienceRequestPrivate &other, AssociateEntitiesToExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
