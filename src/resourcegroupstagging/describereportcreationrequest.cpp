// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportcreationrequest.h"
#include "describereportcreationrequest_p.h"
#include "describereportcreationresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::DescribeReportCreationRequest
 * \brief The DescribeReportCreationRequest class provides an interface for ResourceGroupsTagging DescribeReportCreation requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::describeReportCreation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportCreationRequest::DescribeReportCreationRequest(const DescribeReportCreationRequest &other)
    : ResourceGroupsTaggingRequest(new DescribeReportCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportCreationRequest object.
 */
DescribeReportCreationRequest::DescribeReportCreationRequest()
    : ResourceGroupsTaggingRequest(new DescribeReportCreationRequestPrivate(ResourceGroupsTaggingRequest::DescribeReportCreationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReportCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportCreationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportCreationResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::DescribeReportCreationRequestPrivate
 * \brief The DescribeReportCreationRequestPrivate class provides private implementation for DescribeReportCreationRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a DescribeReportCreationRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
DescribeReportCreationRequestPrivate::DescribeReportCreationRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, DescribeReportCreationRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportCreationRequest
 * class' copy constructor.
 */
DescribeReportCreationRequestPrivate::DescribeReportCreationRequestPrivate(
    const DescribeReportCreationRequestPrivate &other, DescribeReportCreationRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
