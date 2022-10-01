// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
