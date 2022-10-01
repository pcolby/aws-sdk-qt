// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobrequest.h"
#include "createjobrequest_p.h"
#include "createjobresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateJobRequest
 * \brief The CreateJobRequest class provides an interface for Glue CreateJob requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobRequest::CreateJobRequest(const CreateJobRequest &other)
    : GlueRequest(new CreateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobRequest object.
 */
CreateJobRequest::CreateJobRequest()
    : GlueRequest(new CreateJobRequestPrivate(GlueRequest::CreateJobAction, this))
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
 * \class QtAws::Glue::CreateJobRequestPrivate
 * \brief The CreateJobRequestPrivate class provides private implementation for CreateJobRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateJobRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const GlueRequest::Action action, CreateJobRequest * const q)
    : GlueRequestPrivate(action, q)
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
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
