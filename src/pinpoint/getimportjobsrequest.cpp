// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportjobsrequest.h"
#include "getimportjobsrequest_p.h"
#include "getimportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobsRequest
 * \brief The GetImportJobsRequest class provides an interface for Pinpoint GetImportJobs requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportJobsRequest::GetImportJobsRequest(const GetImportJobsRequest &other)
    : PinpointRequest(new GetImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportJobsRequest object.
 */
GetImportJobsRequest::GetImportJobsRequest()
    : PinpointRequest(new GetImportJobsRequestPrivate(PinpointRequest::GetImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetImportJobsRequestPrivate
 * \brief The GetImportJobsRequestPrivate class provides private implementation for GetImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetImportJobsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetImportJobsRequestPrivate::GetImportJobsRequestPrivate(
    const PinpointRequest::Action action, GetImportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobsRequest
 * class' copy constructor.
 */
GetImportJobsRequestPrivate::GetImportJobsRequestPrivate(
    const GetImportJobsRequestPrivate &other, GetImportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
