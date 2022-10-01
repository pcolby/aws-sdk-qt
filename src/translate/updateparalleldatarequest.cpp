// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateparalleldatarequest.h"
#include "updateparalleldatarequest_p.h"
#include "updateparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::UpdateParallelDataRequest
 * \brief The UpdateParallelDataRequest class provides an interface for Translate UpdateParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::updateParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateParallelDataRequest::UpdateParallelDataRequest(const UpdateParallelDataRequest &other)
    : TranslateRequest(new UpdateParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateParallelDataRequest object.
 */
UpdateParallelDataRequest::UpdateParallelDataRequest()
    : TranslateRequest(new UpdateParallelDataRequestPrivate(TranslateRequest::UpdateParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::UpdateParallelDataRequestPrivate
 * \brief The UpdateParallelDataRequestPrivate class provides private implementation for UpdateParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a UpdateParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
UpdateParallelDataRequestPrivate::UpdateParallelDataRequestPrivate(
    const TranslateRequest::Action action, UpdateParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateParallelDataRequest
 * class' copy constructor.
 */
UpdateParallelDataRequestPrivate::UpdateParallelDataRequestPrivate(
    const UpdateParallelDataRequestPrivate &other, UpdateParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
