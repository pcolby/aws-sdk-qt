// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportjobsrequest.h"
#include "getexportjobsrequest_p.h"
#include "getexportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobsRequest
 * \brief The GetExportJobsRequest class provides an interface for Pinpoint GetExportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportJobsRequest::GetExportJobsRequest(const GetExportJobsRequest &other)
    : PinpointRequest(new GetExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportJobsRequest object.
 */
GetExportJobsRequest::GetExportJobsRequest()
    : PinpointRequest(new GetExportJobsRequestPrivate(PinpointRequest::GetExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetExportJobsRequestPrivate
 * \brief The GetExportJobsRequestPrivate class provides private implementation for GetExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetExportJobsRequestPrivate::GetExportJobsRequestPrivate(
    const PinpointRequest::Action action, GetExportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportJobsRequest
 * class' copy constructor.
 */
GetExportJobsRequestPrivate::GetExportJobsRequestPrivate(
    const GetExportJobsRequestPrivate &other, GetExportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
