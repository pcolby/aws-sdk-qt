// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
