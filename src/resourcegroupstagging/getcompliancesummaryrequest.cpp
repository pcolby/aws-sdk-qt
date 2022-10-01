// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompliancesummaryrequest.h"
#include "getcompliancesummaryrequest_p.h"
#include "getcompliancesummaryresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetComplianceSummaryRequest
 * \brief The GetComplianceSummaryRequest class provides an interface for ResourceGroupsTagging GetComplianceSummary requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getComplianceSummary
 */

/*!
 * Constructs a copy of \a other.
 */
GetComplianceSummaryRequest::GetComplianceSummaryRequest(const GetComplianceSummaryRequest &other)
    : ResourceGroupsTaggingRequest(new GetComplianceSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComplianceSummaryRequest object.
 */
GetComplianceSummaryRequest::GetComplianceSummaryRequest()
    : ResourceGroupsTaggingRequest(new GetComplianceSummaryRequestPrivate(ResourceGroupsTaggingRequest::GetComplianceSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool GetComplianceSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComplianceSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComplianceSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetComplianceSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetComplianceSummaryRequestPrivate
 * \brief The GetComplianceSummaryRequestPrivate class provides private implementation for GetComplianceSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetComplianceSummaryRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
GetComplianceSummaryRequestPrivate::GetComplianceSummaryRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, GetComplianceSummaryRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComplianceSummaryRequest
 * class' copy constructor.
 */
GetComplianceSummaryRequestPrivate::GetComplianceSummaryRequestPrivate(
    const GetComplianceSummaryRequestPrivate &other, GetComplianceSummaryRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
