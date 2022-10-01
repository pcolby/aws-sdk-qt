// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefolderresolvedpermissionsrequest.h"
#include "describefolderresolvedpermissionsrequest_p.h"
#include "describefolderresolvedpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderResolvedPermissionsRequest
 * \brief The DescribeFolderResolvedPermissionsRequest class provides an interface for QuickSight DescribeFolderResolvedPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolderResolvedPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFolderResolvedPermissionsRequest::DescribeFolderResolvedPermissionsRequest(const DescribeFolderResolvedPermissionsRequest &other)
    : QuickSightRequest(new DescribeFolderResolvedPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFolderResolvedPermissionsRequest object.
 */
DescribeFolderResolvedPermissionsRequest::DescribeFolderResolvedPermissionsRequest()
    : QuickSightRequest(new DescribeFolderResolvedPermissionsRequestPrivate(QuickSightRequest::DescribeFolderResolvedPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFolderResolvedPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFolderResolvedPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFolderResolvedPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFolderResolvedPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeFolderResolvedPermissionsRequestPrivate
 * \brief The DescribeFolderResolvedPermissionsRequestPrivate class provides private implementation for DescribeFolderResolvedPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderResolvedPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeFolderResolvedPermissionsRequestPrivate::DescribeFolderResolvedPermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeFolderResolvedPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFolderResolvedPermissionsRequest
 * class' copy constructor.
 */
DescribeFolderResolvedPermissionsRequestPrivate::DescribeFolderResolvedPermissionsRequestPrivate(
    const DescribeFolderResolvedPermissionsRequestPrivate &other, DescribeFolderResolvedPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
