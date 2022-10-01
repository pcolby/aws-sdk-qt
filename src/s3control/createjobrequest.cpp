// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobrequest.h"
#include "createjobrequest_p.h"
#include "createjobresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateJobRequest
 * \brief The CreateJobRequest class provides an interface for S3Control CreateJob requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobRequest::CreateJobRequest(const CreateJobRequest &other)
    : S3ControlRequest(new CreateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobRequest object.
 */
CreateJobRequest::CreateJobRequest()
    : S3ControlRequest(new CreateJobRequestPrivate(S3ControlRequest::CreateJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::CreateJobRequestPrivate
 * \brief The CreateJobRequestPrivate class provides private implementation for CreateJobRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateJobRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const S3ControlRequest::Action action, CreateJobRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateJobRequest
 * class' copy constructor.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const CreateJobRequestPrivate &other, CreateJobRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
