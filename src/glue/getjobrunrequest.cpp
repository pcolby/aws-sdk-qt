// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrunrequest.h"
#include "getjobrunrequest_p.h"
#include "getjobrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRunRequest
 * \brief The GetJobRunRequest class provides an interface for Glue GetJobRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobRunRequest::GetJobRunRequest(const GetJobRunRequest &other)
    : GlueRequest(new GetJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobRunRequest object.
 */
GetJobRunRequest::GetJobRunRequest()
    : GlueRequest(new GetJobRunRequestPrivate(GlueRequest::GetJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRunRequest::response(QNetworkReply * const reply) const
{
    return new GetJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobRunRequestPrivate
 * \brief The GetJobRunRequestPrivate class provides private implementation for GetJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobRunRequestPrivate::GetJobRunRequestPrivate(
    const GlueRequest::Action action, GetJobRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobRunRequest
 * class' copy constructor.
 */
GetJobRunRequestPrivate::GetJobRunRequestPrivate(
    const GetJobRunRequestPrivate &other, GetJobRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
