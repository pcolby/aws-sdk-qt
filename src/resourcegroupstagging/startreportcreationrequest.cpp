// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreportcreationrequest.h"
#include "startreportcreationrequest_p.h"
#include "startreportcreationresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::StartReportCreationRequest
 * \brief The StartReportCreationRequest class provides an interface for ResourceGroupsTagging StartReportCreation requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::startReportCreation
 */

/*!
 * Constructs a copy of \a other.
 */
StartReportCreationRequest::StartReportCreationRequest(const StartReportCreationRequest &other)
    : ResourceGroupsTaggingRequest(new StartReportCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReportCreationRequest object.
 */
StartReportCreationRequest::StartReportCreationRequest()
    : ResourceGroupsTaggingRequest(new StartReportCreationRequestPrivate(ResourceGroupsTaggingRequest::StartReportCreationAction, this))
{

}

/*!
 * \reimp
 */
bool StartReportCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReportCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReportCreationRequest::response(QNetworkReply * const reply) const
{
    return new StartReportCreationResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::StartReportCreationRequestPrivate
 * \brief The StartReportCreationRequestPrivate class provides private implementation for StartReportCreationRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a StartReportCreationRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
StartReportCreationRequestPrivate::StartReportCreationRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, StartReportCreationRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReportCreationRequest
 * class' copy constructor.
 */
StartReportCreationRequestPrivate::StartReportCreationRequestPrivate(
    const StartReportCreationRequestPrivate &other, StartReportCreationRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
