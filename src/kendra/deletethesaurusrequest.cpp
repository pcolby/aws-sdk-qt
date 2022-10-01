// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethesaurusrequest.h"
#include "deletethesaurusrequest_p.h"
#include "deletethesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteThesaurusRequest
 * \brief The DeleteThesaurusRequest class provides an interface for Kendra DeleteThesaurus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThesaurusRequest::DeleteThesaurusRequest(const DeleteThesaurusRequest &other)
    : KendraRequest(new DeleteThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThesaurusRequest object.
 */
DeleteThesaurusRequest::DeleteThesaurusRequest()
    : KendraRequest(new DeleteThesaurusRequestPrivate(KendraRequest::DeleteThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteThesaurusRequestPrivate
 * \brief The DeleteThesaurusRequestPrivate class provides private implementation for DeleteThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteThesaurusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteThesaurusRequestPrivate::DeleteThesaurusRequestPrivate(
    const KendraRequest::Action action, DeleteThesaurusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThesaurusRequest
 * class' copy constructor.
 */
DeleteThesaurusRequestPrivate::DeleteThesaurusRequestPrivate(
    const DeleteThesaurusRequestPrivate &other, DeleteThesaurusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
