// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourcerequest.h"
#include "deletedatasourcerequest_p.h"
#include "deletedatasourceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteDataSourceRequest
 * \brief The DeleteDataSourceRequest class provides an interface for Kendra DeleteDataSource requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest(const DeleteDataSourceRequest &other)
    : KendraRequest(new DeleteDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataSourceRequest object.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest()
    : KendraRequest(new DeleteDataSourceRequestPrivate(KendraRequest::DeleteDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteDataSourceRequestPrivate
 * \brief The DeleteDataSourceRequestPrivate class provides private implementation for DeleteDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteDataSourceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const KendraRequest::Action action, DeleteDataSourceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataSourceRequest
 * class' copy constructor.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const DeleteDataSourceRequestPrivate &other, DeleteDataSourceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
