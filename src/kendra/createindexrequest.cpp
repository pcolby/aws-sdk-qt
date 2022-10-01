// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createindexrequest.h"
#include "createindexrequest_p.h"
#include "createindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateIndexRequest
 * \brief The CreateIndexRequest class provides an interface for Kendra CreateIndex requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createIndex
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIndexRequest::CreateIndexRequest(const CreateIndexRequest &other)
    : KendraRequest(new CreateIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIndexRequest object.
 */
CreateIndexRequest::CreateIndexRequest()
    : KendraRequest(new CreateIndexRequestPrivate(KendraRequest::CreateIndexAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreateIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateIndexRequestPrivate
 * \brief The CreateIndexRequestPrivate class provides private implementation for CreateIndexRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateIndexRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const KendraRequest::Action action, CreateIndexRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIndexRequest
 * class' copy constructor.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const CreateIndexRequestPrivate &other, CreateIndexRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
