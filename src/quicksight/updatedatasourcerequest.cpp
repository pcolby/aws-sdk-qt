// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasourcerequest.h"
#include "updatedatasourcerequest_p.h"
#include "updatedatasourceresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSourceRequest
 * \brief The UpdateDataSourceRequest class provides an interface for QuickSight UpdateDataSource requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest(const UpdateDataSourceRequest &other)
    : QuickSightRequest(new UpdateDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSourceRequest object.
 */
UpdateDataSourceRequest::UpdateDataSourceRequest()
    : QuickSightRequest(new UpdateDataSourceRequestPrivate(QuickSightRequest::UpdateDataSourceAction, this))
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
 * \class QtAws::QuickSight::UpdateDataSourceRequestPrivate
 * \brief The UpdateDataSourceRequestPrivate class provides private implementation for UpdateDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSourceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDataSourceRequestPrivate::UpdateDataSourceRequestPrivate(
    const QuickSightRequest::Action action, UpdateDataSourceRequest * const q)
    : QuickSightRequestPrivate(action, q)
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
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
