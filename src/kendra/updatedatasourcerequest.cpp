/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatedatasourcerequest.h"
#include "updatedatasourcerequest_p.h"
#include "updatedatasourceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::UpdateDataSourceRequest
 * \brief The UpdateDataSourceRequest class provides an interface for kendra UpdateDataSource requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::updateDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest(const UpdateDataSourceRequest &other)
    : kendraRequest(new UpdateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSourceRequest object.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest()
    : kendraRequest(new UpdateDataSourceRequestPrivate(kendraRequest::UpdateDataSourceAction, this))
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
 * \class QtAws::kendra::UpdateDataSourceRequestPrivate
 * \brief The UpdateDataSourceRequestPrivate class provides private implementation for UpdateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a UpdateDataSourceRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const kendraRequest::Action action, UpdateDataSourceRequest * const q)
    : kendraRequestPrivate(action, q)
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
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
