// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
