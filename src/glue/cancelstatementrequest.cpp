// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
