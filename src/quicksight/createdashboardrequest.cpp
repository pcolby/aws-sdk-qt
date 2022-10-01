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

#include "createdashboardrequest.h"
#include "createdashboardrequest_p.h"
#include "createdashboardresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateDashboardRequest
 * \brief The CreateDashboardRequest class provides an interface for QuickSight CreateDashboard requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDashboardRequest::CreateDashboardRequest(const CreateDashboardRequest &other)
    : QuickSightRequest(new CreateDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDashboardRequest object.
 */
CreateDashboardRequest::CreateDashboardRequest()
    : QuickSightRequest(new CreateDashboardRequestPrivate(QuickSightRequest::CreateDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDashboardRequest::response(QNetworkReply * const reply) const
{
    return new CreateDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateDashboardRequestPrivate
 * \brief The CreateDashboardRequestPrivate class provides private implementation for CreateDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateDashboardRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateDashboardRequestPrivate::CreateDashboardRequestPrivate(
    const QuickSightRequest::Action action, CreateDashboardRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDashboardRequest
 * class' copy constructor.
 */
CreateDashboardRequestPrivate::CreateDashboardRequestPrivate(
    const CreateDashboardRequestPrivate &other, CreateDashboardRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
