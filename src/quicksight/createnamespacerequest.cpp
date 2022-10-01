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

#include "createnamespacerequest.h"
#include "createnamespacerequest_p.h"
#include "createnamespaceresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateNamespaceRequest
 * \brief The CreateNamespaceRequest class provides an interface for QuickSight CreateNamespace requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNamespaceRequest::CreateNamespaceRequest(const CreateNamespaceRequest &other)
    : QuickSightRequest(new CreateNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNamespaceRequest object.
 */
CreateNamespaceRequest::CreateNamespaceRequest()
    : QuickSightRequest(new CreateNamespaceRequestPrivate(QuickSightRequest::CreateNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateNamespaceRequestPrivate
 * \brief The CreateNamespaceRequestPrivate class provides private implementation for CreateNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateNamespaceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateNamespaceRequestPrivate::CreateNamespaceRequestPrivate(
    const QuickSightRequest::Action action, CreateNamespaceRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNamespaceRequest
 * class' copy constructor.
 */
CreateNamespaceRequestPrivate::CreateNamespaceRequestPrivate(
    const CreateNamespaceRequestPrivate &other, CreateNamespaceRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
