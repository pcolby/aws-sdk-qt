// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexportjobrequest.h"
#include "createexportjobrequest_p.h"
#include "createexportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateExportJobRequest
 * \brief The CreateExportJobRequest class provides an interface for Pinpoint CreateExportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExportJobRequest::CreateExportJobRequest(const CreateExportJobRequest &other)
    : PinpointRequest(new CreateExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExportJobRequest object.
 */
CreateExportJobRequest::CreateExportJobRequest()
    : PinpointRequest(new CreateExportJobRequestPrivate(PinpointRequest::CreateExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateExportJobRequestPrivate
 * \brief The CreateExportJobRequestPrivate class provides private implementation for CreateExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateExportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateExportJobRequestPrivate::CreateExportJobRequestPrivate(
    const PinpointRequest::Action action, CreateExportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExportJobRequest
 * class' copy constructor.
 */
CreateExportJobRequestPrivate::CreateExportJobRequestPrivate(
    const CreateExportJobRequestPrivate &other, CreateExportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
