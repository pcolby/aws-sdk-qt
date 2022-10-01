// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getparalleldatarequest.h"
#include "getparalleldatarequest_p.h"
#include "getparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetParallelDataRequest
 * \brief The GetParallelDataRequest class provides an interface for Translate GetParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
GetParallelDataRequest::GetParallelDataRequest(const GetParallelDataRequest &other)
    : TranslateRequest(new GetParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetParallelDataRequest object.
 */
GetParallelDataRequest::GetParallelDataRequest()
    : TranslateRequest(new GetParallelDataRequestPrivate(TranslateRequest::GetParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new GetParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::GetParallelDataRequestPrivate
 * \brief The GetParallelDataRequestPrivate class provides private implementation for GetParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
GetParallelDataRequestPrivate::GetParallelDataRequestPrivate(
    const TranslateRequest::Action action, GetParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetParallelDataRequest
 * class' copy constructor.
 */
GetParallelDataRequestPrivate::GetParallelDataRequestPrivate(
    const GetParallelDataRequestPrivate &other, GetParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
