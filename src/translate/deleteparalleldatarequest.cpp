// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteparalleldatarequest.h"
#include "deleteparalleldatarequest_p.h"
#include "deleteparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteParallelDataRequest
 * \brief The DeleteParallelDataRequest class provides an interface for Translate DeleteParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteParallelDataRequest::DeleteParallelDataRequest(const DeleteParallelDataRequest &other)
    : TranslateRequest(new DeleteParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteParallelDataRequest object.
 */
DeleteParallelDataRequest::DeleteParallelDataRequest()
    : TranslateRequest(new DeleteParallelDataRequestPrivate(TranslateRequest::DeleteParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::DeleteParallelDataRequestPrivate
 * \brief The DeleteParallelDataRequestPrivate class provides private implementation for DeleteParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
DeleteParallelDataRequestPrivate::DeleteParallelDataRequestPrivate(
    const TranslateRequest::Action action, DeleteParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteParallelDataRequest
 * class' copy constructor.
 */
DeleteParallelDataRequestPrivate::DeleteParallelDataRequestPrivate(
    const DeleteParallelDataRequestPrivate &other, DeleteParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
