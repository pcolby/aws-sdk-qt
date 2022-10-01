// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstatementrequest.h"
#include "getstatementrequest_p.h"
#include "getstatementresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetStatementRequest
 * \brief The GetStatementRequest class provides an interface for Glue GetStatement requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getStatement
 */

/*!
 * Constructs a copy of \a other.
 */
GetStatementRequest::GetStatementRequest(const GetStatementRequest &other)
    : GlueRequest(new GetStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStatementRequest object.
 */
GetStatementRequest::GetStatementRequest()
    : GlueRequest(new GetStatementRequestPrivate(GlueRequest::GetStatementAction, this))
{

}

/*!
 * \reimp
 */
bool GetStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStatementRequest::response(QNetworkReply * const reply) const
{
    return new GetStatementResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetStatementRequestPrivate
 * \brief The GetStatementRequestPrivate class provides private implementation for GetStatementRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetStatementRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetStatementRequestPrivate::GetStatementRequestPrivate(
    const GlueRequest::Action action, GetStatementRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStatementRequest
 * class' copy constructor.
 */
GetStatementRequestPrivate::GetStatementRequestPrivate(
    const GetStatementRequestPrivate &other, GetStatementRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
