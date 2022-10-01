// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentimportjobsrequest.h"
#include "getsegmentimportjobsrequest_p.h"
#include "getsegmentimportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentImportJobsRequest
 * \brief The GetSegmentImportJobsRequest class provides an interface for Pinpoint GetSegmentImportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentImportJobsRequest::GetSegmentImportJobsRequest(const GetSegmentImportJobsRequest &other)
    : PinpointRequest(new GetSegmentImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentImportJobsRequest object.
 */
GetSegmentImportJobsRequest::GetSegmentImportJobsRequest()
    : PinpointRequest(new GetSegmentImportJobsRequestPrivate(PinpointRequest::GetSegmentImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentImportJobsRequestPrivate
 * \brief The GetSegmentImportJobsRequestPrivate class provides private implementation for GetSegmentImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentImportJobsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentImportJobsRequestPrivate::GetSegmentImportJobsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentImportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentImportJobsRequest
 * class' copy constructor.
 */
GetSegmentImportJobsRequestPrivate::GetSegmentImportJobsRequestPrivate(
    const GetSegmentImportJobsRequestPrivate &other, GetSegmentImportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
