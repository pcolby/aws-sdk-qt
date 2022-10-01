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

#include "runstatementrequest.h"
#include "runstatementrequest_p.h"
#include "runstatementresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RunStatementRequest
 * \brief The RunStatementRequest class provides an interface for Glue RunStatement requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::runStatement
 */

/*!
 * Constructs a copy of \a other.
 */
RunStatementRequest::RunStatementRequest(const RunStatementRequest &other)
    : GlueRequest(new RunStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RunStatementRequest object.
 */
RunStatementRequest::RunStatementRequest()
    : GlueRequest(new RunStatementRequestPrivate(GlueRequest::RunStatementAction, this))
{

}

/*!
 * \reimp
 */
bool RunStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RunStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RunStatementRequest::response(QNetworkReply * const reply) const
{
    return new RunStatementResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::RunStatementRequestPrivate
 * \brief The RunStatementRequestPrivate class provides private implementation for RunStatementRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RunStatementRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
RunStatementRequestPrivate::RunStatementRequestPrivate(
    const GlueRequest::Action action, RunStatementRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RunStatementRequest
 * class' copy constructor.
 */
RunStatementRequestPrivate::RunStatementRequestPrivate(
    const RunStatementRequestPrivate &other, RunStatementRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
