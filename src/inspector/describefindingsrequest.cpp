// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefindingsrequest.h"
#include "describefindingsrequest_p.h"
#include "describefindingsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeFindingsRequest
 * \brief The DescribeFindingsRequest class provides an interface for Inspector DescribeFindings requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeFindings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFindingsRequest::DescribeFindingsRequest(const DescribeFindingsRequest &other)
    : InspectorRequest(new DescribeFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFindingsRequest object.
 */
DescribeFindingsRequest::DescribeFindingsRequest()
    : InspectorRequest(new DescribeFindingsRequestPrivate(InspectorRequest::DescribeFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFindingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeFindingsRequestPrivate
 * \brief The DescribeFindingsRequestPrivate class provides private implementation for DescribeFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeFindingsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeFindingsRequestPrivate::DescribeFindingsRequestPrivate(
    const InspectorRequest::Action action, DescribeFindingsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFindingsRequest
 * class' copy constructor.
 */
DescribeFindingsRequestPrivate::DescribeFindingsRequestPrivate(
    const DescribeFindingsRequestPrivate &other, DescribeFindingsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
