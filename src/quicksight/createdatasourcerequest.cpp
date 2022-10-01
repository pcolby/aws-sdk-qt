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
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateDataSourceRequest
 * \brief The CreateDataSourceRequest class provides an interface for QuickSight CreateDataSource requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceRequest::CreateDataSourceRequest(const CreateDataSourceRequest &other)
    : QuickSightRequest(new CreateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceRequest object.
 */
CreateDataSourceRequest::CreateDataSourceRequest()
    : QuickSightRequest(new CreateDataSourceRequestPrivate(QuickSightRequest::CreateDataSourceAction, this))
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
 * \class QtAws::QuickSight::CreateDataSourceRequestPrivate
 * \brief The CreateDataSourceRequestPrivate class provides private implementation for CreateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateDataSourceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateDataSourceRequestPrivate::CreateDataSourceRequestPrivate(
    const QuickSightRequest::Action action, CreateDataSourceRequest * const q)
    : QuickSightRequestPrivate(action, q)
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
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
