// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetemplatealiasrequest.h"
#include "describetemplatealiasrequest_p.h"
#include "describetemplatealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplateAliasRequest
 * \brief The DescribeTemplateAliasRequest class provides an interface for QuickSight DescribeTemplateAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplateAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTemplateAliasRequest::DescribeTemplateAliasRequest(const DescribeTemplateAliasRequest &other)
    : QuickSightRequest(new DescribeTemplateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTemplateAliasRequest object.
 */
DescribeTemplateAliasRequest::DescribeTemplateAliasRequest()
    : QuickSightRequest(new DescribeTemplateAliasRequestPrivate(QuickSightRequest::DescribeTemplateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTemplateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTemplateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTemplateAliasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTemplateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeTemplateAliasRequestPrivate
 * \brief The DescribeTemplateAliasRequestPrivate class provides private implementation for DescribeTemplateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplateAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeTemplateAliasRequestPrivate::DescribeTemplateAliasRequestPrivate(
    const QuickSightRequest::Action action, DescribeTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTemplateAliasRequest
 * class' copy constructor.
 */
DescribeTemplateAliasRequestPrivate::DescribeTemplateAliasRequestPrivate(
    const DescribeTemplateAliasRequestPrivate &other, DescribeTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
