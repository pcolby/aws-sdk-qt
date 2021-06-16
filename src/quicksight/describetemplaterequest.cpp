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

#include "describetemplaterequest.h"
#include "describetemplaterequest_p.h"
#include "describetemplateresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplateRequest
 * \brief The DescribeTemplateRequest class provides an interface for QuickSight DescribeTemplate requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTemplateRequest::DescribeTemplateRequest(const DescribeTemplateRequest &other)
    : QuickSightRequest(new DescribeTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTemplateRequest object.
 */
DescribeTemplateRequest::DescribeTemplateRequest()
    : QuickSightRequest(new DescribeTemplateRequestPrivate(QuickSightRequest::DescribeTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeTemplateRequestPrivate
 * \brief The DescribeTemplateRequestPrivate class provides private implementation for DescribeTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplateRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeTemplateRequestPrivate::DescribeTemplateRequestPrivate(
    const QuickSightRequest::Action action, DescribeTemplateRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTemplateRequest
 * class' copy constructor.
 */
DescribeTemplateRequestPrivate::DescribeTemplateRequestPrivate(
    const DescribeTemplateRequestPrivate &other, DescribeTemplateRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
