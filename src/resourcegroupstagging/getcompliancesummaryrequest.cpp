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
