// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
