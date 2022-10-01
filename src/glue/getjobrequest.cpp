// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrequest.h"
#include "getjobrequest_p.h"
#include "getjobresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRequest
 * \brief The GetJobRequest class provides an interface for Glue GetJob requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobRequest::GetJobRequest(const GetJobRequest &other)
    : GlueRequest(new GetJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobRequest object.
 */
GetJobRequest::GetJobRequest()
    : GlueRequest(new GetJobRequestPrivate(GlueRequest::GetJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRequest::response(QNetworkReply * const reply) const
{
    return new GetJobResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobRequestPrivate
 * \brief The GetJobRequestPrivate class provides private implementation for GetJobRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GlueRequest::Action action, GetJobRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobRequest
 * class' copy constructor.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GetJobRequestPrivate &other, GetJobRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
