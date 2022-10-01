// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobrequest.h"
#include "createjobrequest_p.h"
#include "createjobresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateJobRequest
 * \brief The CreateJobRequest class provides an interface for MediaConvert CreateJob requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobRequest::CreateJobRequest(const CreateJobRequest &other)
    : MediaConvertRequest(new CreateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobRequest object.
 */
CreateJobRequest::CreateJobRequest()
    : MediaConvertRequest(new CreateJobRequestPrivate(MediaConvertRequest::CreateJobAction, this))
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
 * \class QtAws::MediaConvert::CreateJobRequestPrivate
 * \brief The CreateJobRequestPrivate class provides private implementation for CreateJobRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateJobRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const MediaConvertRequest::Action action, CreateJobRequest * const q)
    : MediaConvertRequestPrivate(action, q)
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
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
