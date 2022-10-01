// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listterminologiesrequest.h"
#include "listterminologiesrequest_p.h"
#include "listterminologiesresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListTerminologiesRequest
 * \brief The ListTerminologiesRequest class provides an interface for Translate ListTerminologies requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listTerminologies
 */

/*!
 * Constructs a copy of \a other.
 */
ListTerminologiesRequest::ListTerminologiesRequest(const ListTerminologiesRequest &other)
    : TranslateRequest(new ListTerminologiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTerminologiesRequest object.
 */
ListTerminologiesRequest::ListTerminologiesRequest()
    : TranslateRequest(new ListTerminologiesRequestPrivate(TranslateRequest::ListTerminologiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTerminologiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTerminologiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTerminologiesRequest::response(QNetworkReply * const reply) const
{
    return new ListTerminologiesResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ListTerminologiesRequestPrivate
 * \brief The ListTerminologiesRequestPrivate class provides private implementation for ListTerminologiesRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListTerminologiesRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ListTerminologiesRequestPrivate::ListTerminologiesRequestPrivate(
    const TranslateRequest::Action action, ListTerminologiesRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTerminologiesRequest
 * class' copy constructor.
 */
ListTerminologiesRequestPrivate::ListTerminologiesRequestPrivate(
    const ListTerminologiesRequestPrivate &other, ListTerminologiesRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
