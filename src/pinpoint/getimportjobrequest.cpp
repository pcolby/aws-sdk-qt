// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportjobrequest.h"
#include "getimportjobrequest_p.h"
#include "getimportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobRequest
 * \brief The GetImportJobRequest class provides an interface for Pinpoint GetImportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportJobRequest::GetImportJobRequest(const GetImportJobRequest &other)
    : PinpointRequest(new GetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportJobRequest object.
 */
GetImportJobRequest::GetImportJobRequest()
    : PinpointRequest(new GetImportJobRequestPrivate(PinpointRequest::GetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetImportJobRequestPrivate
 * \brief The GetImportJobRequestPrivate class provides private implementation for GetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetImportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const PinpointRequest::Action action, GetImportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobRequest
 * class' copy constructor.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const GetImportJobRequestPrivate &other, GetImportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
