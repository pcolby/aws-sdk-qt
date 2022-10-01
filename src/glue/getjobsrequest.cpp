// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobsrequest.h"
#include "getjobsrequest_p.h"
#include "getjobsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobsRequest
 * \brief The GetJobsRequest class provides an interface for Glue GetJobs requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobsRequest::GetJobsRequest(const GetJobsRequest &other)
    : GlueRequest(new GetJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobsRequest object.
 */
GetJobsRequest::GetJobsRequest()
    : GlueRequest(new GetJobsRequestPrivate(GlueRequest::GetJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobsRequestPrivate
 * \brief The GetJobsRequestPrivate class provides private implementation for GetJobsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobsRequestPrivate::GetJobsRequestPrivate(
    const GlueRequest::Action action, GetJobsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobsRequest
 * class' copy constructor.
 */
GetJobsRequestPrivate::GetJobsRequestPrivate(
    const GetJobsRequestPrivate &other, GetJobsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
