/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
