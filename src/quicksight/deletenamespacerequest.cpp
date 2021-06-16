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

#include "deletenamespacerequest.h"
#include "deletenamespacerequest_p.h"
#include "deletenamespaceresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteNamespaceRequest
 * \brief The DeleteNamespaceRequest class provides an interface for QuickSight DeleteNamespace requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest(const DeleteNamespaceRequest &other)
    : QuickSightRequest(new DeleteNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNamespaceRequest object.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest()
    : QuickSightRequest(new DeleteNamespaceRequestPrivate(QuickSightRequest::DeleteNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteNamespaceRequestPrivate
 * \brief The DeleteNamespaceRequestPrivate class provides private implementation for DeleteNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteNamespaceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const QuickSightRequest::Action action, DeleteNamespaceRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNamespaceRequest
 * class' copy constructor.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const DeleteNamespaceRequestPrivate &other, DeleteNamespaceRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
