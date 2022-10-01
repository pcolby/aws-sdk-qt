// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createparalleldatarequest.h"
#include "createparalleldatarequest_p.h"
#include "createparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::CreateParallelDataRequest
 * \brief The CreateParallelDataRequest class provides an interface for Translate CreateParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::createParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
CreateParallelDataRequest::CreateParallelDataRequest(const CreateParallelDataRequest &other)
    : TranslateRequest(new CreateParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateParallelDataRequest object.
 */
CreateParallelDataRequest::CreateParallelDataRequest()
    : TranslateRequest(new CreateParallelDataRequestPrivate(TranslateRequest::CreateParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool CreateParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new CreateParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::CreateParallelDataRequestPrivate
 * \brief The CreateParallelDataRequestPrivate class provides private implementation for CreateParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a CreateParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
CreateParallelDataRequestPrivate::CreateParallelDataRequestPrivate(
    const TranslateRequest::Action action, CreateParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateParallelDataRequest
 * class' copy constructor.
 */
CreateParallelDataRequestPrivate::CreateParallelDataRequestPrivate(
    const CreateParallelDataRequestPrivate &other, CreateParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
