/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
