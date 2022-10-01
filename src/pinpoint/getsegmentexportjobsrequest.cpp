// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentexportjobsrequest.h"
#include "getsegmentexportjobsrequest_p.h"
#include "getsegmentexportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsRequest
 * \brief The GetSegmentExportJobsRequest class provides an interface for Pinpoint GetSegmentExportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentExportJobsRequest::GetSegmentExportJobsRequest(const GetSegmentExportJobsRequest &other)
    : PinpointRequest(new GetSegmentExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentExportJobsRequest object.
 */
GetSegmentExportJobsRequest::GetSegmentExportJobsRequest()
    : PinpointRequest(new GetSegmentExportJobsRequestPrivate(PinpointRequest::GetSegmentExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsRequestPrivate
 * \brief The GetSegmentExportJobsRequestPrivate class provides private implementation for GetSegmentExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentExportJobsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentExportJobsRequestPrivate::GetSegmentExportJobsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentExportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentExportJobsRequest
 * class' copy constructor.
 */
GetSegmentExportJobsRequestPrivate::GetSegmentExportJobsRequestPrivate(
    const GetSegmentExportJobsRequestPrivate &other, GetSegmentExportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
