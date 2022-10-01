// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listparalleldatarequest.h"
#include "listparalleldatarequest_p.h"
#include "listparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListParallelDataRequest
 * \brief The ListParallelDataRequest class provides an interface for Translate ListParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
ListParallelDataRequest::ListParallelDataRequest(const ListParallelDataRequest &other)
    : TranslateRequest(new ListParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListParallelDataRequest object.
 */
ListParallelDataRequest::ListParallelDataRequest()
    : TranslateRequest(new ListParallelDataRequestPrivate(TranslateRequest::ListParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool ListParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new ListParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ListParallelDataRequestPrivate
 * \brief The ListParallelDataRequestPrivate class provides private implementation for ListParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ListParallelDataRequestPrivate::ListParallelDataRequestPrivate(
    const TranslateRequest::Action action, ListParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListParallelDataRequest
 * class' copy constructor.
 */
ListParallelDataRequestPrivate::ListParallelDataRequestPrivate(
    const ListParallelDataRequestPrivate &other, ListParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
