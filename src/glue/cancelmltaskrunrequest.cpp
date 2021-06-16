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

#include "cancelmltaskrunrequest.h"
#include "cancelmltaskrunrequest_p.h"
#include "cancelmltaskrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CancelMLTaskRunRequest
 * \brief The CancelMLTaskRunRequest class provides an interface for Glue CancelMLTaskRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::cancelMLTaskRun
 */

/*!
 * Constructs a copy of \a other.
 */
CancelMLTaskRunRequest::CancelMLTaskRunRequest(const CancelMLTaskRunRequest &other)
    : GlueRequest(new CancelMLTaskRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelMLTaskRunRequest object.
 */
CancelMLTaskRunRequest::CancelMLTaskRunRequest()
    : GlueRequest(new CancelMLTaskRunRequestPrivate(GlueRequest::CancelMLTaskRunAction, this))
{

}

/*!
 * \reimp
 */
bool CancelMLTaskRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelMLTaskRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelMLTaskRunRequest::response(QNetworkReply * const reply) const
{
    return new CancelMLTaskRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CancelMLTaskRunRequestPrivate
 * \brief The CancelMLTaskRunRequestPrivate class provides private implementation for CancelMLTaskRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CancelMLTaskRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CancelMLTaskRunRequestPrivate::CancelMLTaskRunRequestPrivate(
    const GlueRequest::Action action, CancelMLTaskRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelMLTaskRunRequest
 * class' copy constructor.
 */
CancelMLTaskRunRequestPrivate::CancelMLTaskRunRequestPrivate(
    const CancelMLTaskRunRequestPrivate &other, CancelMLTaskRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
