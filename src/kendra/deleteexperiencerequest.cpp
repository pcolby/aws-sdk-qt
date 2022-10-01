// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperiencerequest.h"
#include "deleteexperiencerequest_p.h"
#include "deleteexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteExperienceRequest
 * \brief The DeleteExperienceRequest class provides an interface for Kendra DeleteExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteExperience
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExperienceRequest::DeleteExperienceRequest(const DeleteExperienceRequest &other)
    : KendraRequest(new DeleteExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExperienceRequest object.
 */
DeleteExperienceRequest::DeleteExperienceRequest()
    : KendraRequest(new DeleteExperienceRequestPrivate(KendraRequest::DeleteExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExperienceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteExperienceRequestPrivate
 * \brief The DeleteExperienceRequestPrivate class provides private implementation for DeleteExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteExperienceRequestPrivate::DeleteExperienceRequestPrivate(
    const KendraRequest::Action action, DeleteExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExperienceRequest
 * class' copy constructor.
 */
DeleteExperienceRequestPrivate::DeleteExperienceRequestPrivate(
    const DeleteExperienceRequestPrivate &other, DeleteExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
