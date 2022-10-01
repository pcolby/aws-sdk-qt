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

#include "describefolderrequest.h"
#include "describefolderrequest_p.h"
#include "describefolderresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderRequest
 * \brief The DescribeFolderRequest class provides an interface for QuickSight DescribeFolder requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolder
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFolderRequest::DescribeFolderRequest(const DescribeFolderRequest &other)
    : QuickSightRequest(new DescribeFolderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFolderRequest object.
 */
DescribeFolderRequest::DescribeFolderRequest()
    : QuickSightRequest(new DescribeFolderRequestPrivate(QuickSightRequest::DescribeFolderAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFolderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFolderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFolderRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFolderResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeFolderRequestPrivate
 * \brief The DescribeFolderRequestPrivate class provides private implementation for DescribeFolderRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeFolderRequestPrivate::DescribeFolderRequestPrivate(
    const QuickSightRequest::Action action, DescribeFolderRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFolderRequest
 * class' copy constructor.
 */
DescribeFolderRequestPrivate::DescribeFolderRequestPrivate(
    const DescribeFolderRequestPrivate &other, DescribeFolderRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
