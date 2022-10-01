// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefaqrequest.h"
#include "deletefaqrequest_p.h"
#include "deletefaqresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteFaqRequest
 * \brief The DeleteFaqRequest class provides an interface for Kendra DeleteFaq requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteFaq
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFaqRequest::DeleteFaqRequest(const DeleteFaqRequest &other)
    : KendraRequest(new DeleteFaqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFaqRequest object.
 */
DeleteFaqRequest::DeleteFaqRequest()
    : KendraRequest(new DeleteFaqRequestPrivate(KendraRequest::DeleteFaqAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFaqRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFaqResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFaqRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFaqResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteFaqRequestPrivate
 * \brief The DeleteFaqRequestPrivate class provides private implementation for DeleteFaqRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteFaqRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteFaqRequestPrivate::DeleteFaqRequestPrivate(
    const KendraRequest::Action action, DeleteFaqRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFaqRequest
 * class' copy constructor.
 */
DeleteFaqRequestPrivate::DeleteFaqRequestPrivate(
    const DeleteFaqRequestPrivate &other, DeleteFaqRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
