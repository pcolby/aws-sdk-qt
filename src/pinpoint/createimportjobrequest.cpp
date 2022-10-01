// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimportjobrequest.h"
#include "createimportjobrequest_p.h"
#include "createimportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateImportJobRequest
 * \brief The CreateImportJobRequest class provides an interface for Pinpoint CreateImportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImportJobRequest::CreateImportJobRequest(const CreateImportJobRequest &other)
    : PinpointRequest(new CreateImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImportJobRequest object.
 */
CreateImportJobRequest::CreateImportJobRequest()
    : PinpointRequest(new CreateImportJobRequestPrivate(PinpointRequest::CreateImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateImportJobRequestPrivate
 * \brief The CreateImportJobRequestPrivate class provides private implementation for CreateImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateImportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const PinpointRequest::Action action, CreateImportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImportJobRequest
 * class' copy constructor.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const CreateImportJobRequestPrivate &other, CreateImportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
