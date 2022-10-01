// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethesaurusrequest.h"
#include "updatethesaurusrequest_p.h"
#include "updatethesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateThesaurusRequest
 * \brief The UpdateThesaurusRequest class provides an interface for Kendra UpdateThesaurus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThesaurusRequest::UpdateThesaurusRequest(const UpdateThesaurusRequest &other)
    : KendraRequest(new UpdateThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThesaurusRequest object.
 */
UpdateThesaurusRequest::UpdateThesaurusRequest()
    : KendraRequest(new UpdateThesaurusRequestPrivate(KendraRequest::UpdateThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateThesaurusRequestPrivate
 * \brief The UpdateThesaurusRequestPrivate class provides private implementation for UpdateThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateThesaurusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateThesaurusRequestPrivate::UpdateThesaurusRequestPrivate(
    const KendraRequest::Action action, UpdateThesaurusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThesaurusRequest
 * class' copy constructor.
 */
UpdateThesaurusRequestPrivate::UpdateThesaurusRequestPrivate(
    const UpdateThesaurusRequestPrivate &other, UpdateThesaurusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
