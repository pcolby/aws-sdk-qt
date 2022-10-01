// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaversionsdiffrequest.h"
#include "getschemaversionsdiffrequest_p.h"
#include "getschemaversionsdiffresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffRequest
 * \brief The GetSchemaVersionsDiffRequest class provides an interface for Glue GetSchemaVersionsDiff requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaVersionsDiff
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaVersionsDiffRequest::GetSchemaVersionsDiffRequest(const GetSchemaVersionsDiffRequest &other)
    : GlueRequest(new GetSchemaVersionsDiffRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaVersionsDiffRequest object.
 */
GetSchemaVersionsDiffRequest::GetSchemaVersionsDiffRequest()
    : GlueRequest(new GetSchemaVersionsDiffRequestPrivate(GlueRequest::GetSchemaVersionsDiffAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaVersionsDiffRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaVersionsDiffResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaVersionsDiffRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaVersionsDiffResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffRequestPrivate
 * \brief The GetSchemaVersionsDiffRequestPrivate class provides private implementation for GetSchemaVersionsDiffRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionsDiffRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSchemaVersionsDiffRequestPrivate::GetSchemaVersionsDiffRequestPrivate(
    const GlueRequest::Action action, GetSchemaVersionsDiffRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaVersionsDiffRequest
 * class' copy constructor.
 */
GetSchemaVersionsDiffRequestPrivate::GetSchemaVersionsDiffRequestPrivate(
    const GetSchemaVersionsDiffRequestPrivate &other, GetSchemaVersionsDiffRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
