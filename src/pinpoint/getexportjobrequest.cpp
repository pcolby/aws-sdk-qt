// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportjobrequest.h"
#include "getexportjobrequest_p.h"
#include "getexportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobRequest
 * \brief The GetExportJobRequest class provides an interface for Pinpoint GetExportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportJobRequest::GetExportJobRequest(const GetExportJobRequest &other)
    : PinpointRequest(new GetExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportJobRequest object.
 */
GetExportJobRequest::GetExportJobRequest()
    : PinpointRequest(new GetExportJobRequestPrivate(PinpointRequest::GetExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportJobRequest::response(QNetworkReply * const reply) const
{
    return new GetExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetExportJobRequestPrivate
 * \brief The GetExportJobRequestPrivate class provides private implementation for GetExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetExportJobRequestPrivate::GetExportJobRequestPrivate(
    const PinpointRequest::Action action, GetExportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportJobRequest
 * class' copy constructor.
 */
GetExportJobRequestPrivate::GetExportJobRequestPrivate(
    const GetExportJobRequestPrivate &other, GetExportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
