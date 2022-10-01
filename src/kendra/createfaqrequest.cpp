// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfaqrequest.h"
#include "createfaqrequest_p.h"
#include "createfaqresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateFaqRequest
 * \brief The CreateFaqRequest class provides an interface for Kendra CreateFaq requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createFaq
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFaqRequest::CreateFaqRequest(const CreateFaqRequest &other)
    : KendraRequest(new CreateFaqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFaqRequest object.
 */
CreateFaqRequest::CreateFaqRequest()
    : KendraRequest(new CreateFaqRequestPrivate(KendraRequest::CreateFaqAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFaqRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFaqResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFaqRequest::response(QNetworkReply * const reply) const
{
    return new CreateFaqResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateFaqRequestPrivate
 * \brief The CreateFaqRequestPrivate class provides private implementation for CreateFaqRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateFaqRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateFaqRequestPrivate::CreateFaqRequestPrivate(
    const KendraRequest::Action action, CreateFaqRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFaqRequest
 * class' copy constructor.
 */
CreateFaqRequestPrivate::CreateFaqRequestPrivate(
    const CreateFaqRequestPrivate &other, CreateFaqRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
