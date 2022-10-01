// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetrequest.h"
#include "createdatasetrequest_p.h"
#include "createdatasetresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateDataSetRequest
 * \brief The CreateDataSetRequest class provides an interface for QuickSight CreateDataSet requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createDataSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSetRequest::CreateDataSetRequest(const CreateDataSetRequest &other)
    : QuickSightRequest(new CreateDataSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSetRequest object.
 */
CreateDataSetRequest::CreateDataSetRequest()
    : QuickSightRequest(new CreateDataSetRequestPrivate(QuickSightRequest::CreateDataSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSetResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateDataSetRequestPrivate
 * \brief The CreateDataSetRequestPrivate class provides private implementation for CreateDataSetRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateDataSetRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateDataSetRequestPrivate::CreateDataSetRequestPrivate(
    const QuickSightRequest::Action action, CreateDataSetRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSetRequest
 * class' copy constructor.
 */
CreateDataSetRequestPrivate::CreateDataSetRequestPrivate(
    const CreateDataSetRequestPrivate &other, CreateDataSetRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
