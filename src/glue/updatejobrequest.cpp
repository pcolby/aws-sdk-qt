// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejobrequest.h"
#include "updatejobrequest_p.h"
#include "updatejobresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateJobRequest
 * \brief The UpdateJobRequest class provides an interface for Glue UpdateJob requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobRequest::UpdateJobRequest(const UpdateJobRequest &other)
    : GlueRequest(new UpdateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobRequest object.
 */
UpdateJobRequest::UpdateJobRequest()
    : GlueRequest(new UpdateJobRequestPrivate(GlueRequest::UpdateJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateJobRequestPrivate
 * \brief The UpdateJobRequestPrivate class provides private implementation for UpdateJobRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateJobRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const GlueRequest::Action action, UpdateJobRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobRequest
 * class' copy constructor.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const UpdateJobRequestPrivate &other, UpdateJobRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
