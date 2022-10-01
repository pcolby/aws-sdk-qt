// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasourcerequest.h"
#include "updatedatasourcerequest_p.h"
#include "updatedatasourceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateDataSourceRequest
 * \brief The UpdateDataSourceRequest class provides an interface for Kendra UpdateDataSource requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest(const UpdateDataSourceRequest &other)
    : KendraRequest(new UpdateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSourceRequest object.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest()
    : KendraRequest(new UpdateDataSourceRequestPrivate(KendraRequest::UpdateDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateDataSourceRequestPrivate
 * \brief The UpdateDataSourceRequestPrivate class provides private implementation for UpdateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateDataSourceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const KendraRequest::Action action, UpdateDataSourceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSourceRequest
 * class' copy constructor.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const UpdateDataSourceRequestPrivate &other, UpdateDataSourceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
