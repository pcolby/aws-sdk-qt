// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefolderpermissionsrequest.h"
#include "describefolderpermissionsrequest_p.h"
#include "describefolderpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderPermissionsRequest
 * \brief The DescribeFolderPermissionsRequest class provides an interface for QuickSight DescribeFolderPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolderPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFolderPermissionsRequest::DescribeFolderPermissionsRequest(const DescribeFolderPermissionsRequest &other)
    : QuickSightRequest(new DescribeFolderPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFolderPermissionsRequest object.
 */
DescribeFolderPermissionsRequest::DescribeFolderPermissionsRequest()
    : QuickSightRequest(new DescribeFolderPermissionsRequestPrivate(QuickSightRequest::DescribeFolderPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFolderPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFolderPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFolderPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFolderPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeFolderPermissionsRequestPrivate
 * \brief The DescribeFolderPermissionsRequestPrivate class provides private implementation for DescribeFolderPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeFolderPermissionsRequestPrivate::DescribeFolderPermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeFolderPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFolderPermissionsRequest
 * class' copy constructor.
 */
DescribeFolderPermissionsRequestPrivate::DescribeFolderPermissionsRequestPrivate(
    const DescribeFolderPermissionsRequestPrivate &other, DescribeFolderPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
