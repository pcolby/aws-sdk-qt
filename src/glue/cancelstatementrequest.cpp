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

#include "cancelstatementrequest.h"
#include "cancelstatementrequest_p.h"
#include "cancelstatementresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CancelStatementRequest
 * \brief The CancelStatementRequest class provides an interface for Glue CancelStatement requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::cancelStatement
 */

/*!
 * Constructs a copy of \a other.
 */
CancelStatementRequest::CancelStatementRequest(const CancelStatementRequest &other)
    : GlueRequest(new CancelStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelStatementRequest object.
 */
CancelStatementRequest::CancelStatementRequest()
    : GlueRequest(new CancelStatementRequestPrivate(GlueRequest::CancelStatementAction, this))
{

}

/*!
 * \reimp
 */
bool CancelStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelStatementRequest::response(QNetworkReply * const reply) const
{
    return new CancelStatementResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CancelStatementRequestPrivate
 * \brief The CancelStatementRequestPrivate class provides private implementation for CancelStatementRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CancelStatementRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CancelStatementRequestPrivate::CancelStatementRequestPrivate(
    const GlueRequest::Action action, CancelStatementRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelStatementRequest
 * class' copy constructor.
 */
CancelStatementRequestPrivate::CancelStatementRequestPrivate(
    const CancelStatementRequestPrivate &other, CancelStatementRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
