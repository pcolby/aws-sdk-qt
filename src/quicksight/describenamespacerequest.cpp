// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenamespacerequest.h"
#include "describenamespacerequest_p.h"
#include "describenamespaceresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeNamespaceRequest
 * \brief The DescribeNamespaceRequest class provides an interface for QuickSight DescribeNamespace requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNamespaceRequest::DescribeNamespaceRequest(const DescribeNamespaceRequest &other)
    : QuickSightRequest(new DescribeNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNamespaceRequest object.
 */
DescribeNamespaceRequest::DescribeNamespaceRequest()
    : QuickSightRequest(new DescribeNamespaceRequestPrivate(QuickSightRequest::DescribeNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeNamespaceRequestPrivate
 * \brief The DescribeNamespaceRequestPrivate class provides private implementation for DescribeNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeNamespaceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeNamespaceRequestPrivate::DescribeNamespaceRequestPrivate(
    const QuickSightRequest::Action action, DescribeNamespaceRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNamespaceRequest
 * class' copy constructor.
 */
DescribeNamespaceRequestPrivate::DescribeNamespaceRequestPrivate(
    const DescribeNamespaceRequestPrivate &other, DescribeNamespaceRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
