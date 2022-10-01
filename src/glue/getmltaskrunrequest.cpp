// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltaskrunrequest.h"
#include "getmltaskrunrequest_p.h"
#include "getmltaskrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTaskRunRequest
 * \brief The GetMLTaskRunRequest class provides an interface for Glue GetMLTaskRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTaskRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLTaskRunRequest::GetMLTaskRunRequest(const GetMLTaskRunRequest &other)
    : GlueRequest(new GetMLTaskRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLTaskRunRequest object.
 */
GetMLTaskRunRequest::GetMLTaskRunRequest()
    : GlueRequest(new GetMLTaskRunRequestPrivate(GlueRequest::GetMLTaskRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLTaskRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLTaskRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLTaskRunRequest::response(QNetworkReply * const reply) const
{
    return new GetMLTaskRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMLTaskRunRequestPrivate
 * \brief The GetMLTaskRunRequestPrivate class provides private implementation for GetMLTaskRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTaskRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMLTaskRunRequestPrivate::GetMLTaskRunRequestPrivate(
    const GlueRequest::Action action, GetMLTaskRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLTaskRunRequest
 * class' copy constructor.
 */
GetMLTaskRunRequestPrivate::GetMLTaskRunRequestPrivate(
    const GetMLTaskRunRequestPrivate &other, GetMLTaskRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
