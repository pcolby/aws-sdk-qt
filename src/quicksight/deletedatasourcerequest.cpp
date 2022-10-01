// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourcerequest.h"
#include "deletedatasourcerequest_p.h"
#include "deletedatasourceresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDataSourceRequest
 * \brief The DeleteDataSourceRequest class provides an interface for QuickSight DeleteDataSource requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest(const DeleteDataSourceRequest &other)
    : QuickSightRequest(new DeleteDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataSourceRequest object.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest()
    : QuickSightRequest(new DeleteDataSourceRequestPrivate(QuickSightRequest::DeleteDataSourceAction, this))
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
 * \class QtAws::QuickSight::DeleteDataSourceRequestPrivate
 * \brief The DeleteDataSourceRequestPrivate class provides private implementation for DeleteDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDataSourceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const QuickSightRequest::Action action, DeleteDataSourceRequest * const q)
    : QuickSightRequestPrivate(action, q)
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
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
