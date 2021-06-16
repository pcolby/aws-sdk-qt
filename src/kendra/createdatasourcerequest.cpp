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

#include "createdatasourcerequest.h"
#include "createdatasourcerequest_p.h"
#include "createdatasourceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::CreateDataSourceRequest
 * \brief The CreateDataSourceRequest class provides an interface for kendra CreateDataSource requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::createDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceRequest::CreateDataSourceRequest(const CreateDataSourceRequest &other)
    : kendraRequest(new CreateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceRequest object.
 */
CreateDataSourceRequest::CreateDataSourceRequest()
    : kendraRequest(new CreateDataSourceRequestPrivate(kendraRequest::CreateDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::CreateDataSourceRequestPrivate
 * \brief The CreateDataSourceRequestPrivate class provides private implementation for CreateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a CreateDataSourceRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const kendraRequest::Action action, CreateDataSourceRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceRequest
 * class' copy constructor.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const CreateDataSourceRequestPrivate &other, CreateDataSourceRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
