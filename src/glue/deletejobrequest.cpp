// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobrequest.h"
#include "deletejobrequest_p.h"
#include "deletejobresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteJobRequest
 * \brief The DeleteJobRequest class provides an interface for Glue DeleteJob requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobRequest::DeleteJobRequest(const DeleteJobRequest &other)
    : GlueRequest(new DeleteJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobRequest object.
 */
DeleteJobRequest::DeleteJobRequest()
    : GlueRequest(new DeleteJobRequestPrivate(GlueRequest::DeleteJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteJobRequestPrivate
 * \brief The DeleteJobRequestPrivate class provides private implementation for DeleteJobRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteJobRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const GlueRequest::Action action, DeleteJobRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobRequest
 * class' copy constructor.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DeleteJobRequestPrivate &other, DeleteJobRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
