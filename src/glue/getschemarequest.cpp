// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemarequest.h"
#include "getschemarequest_p.h"
#include "getschemaresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaRequest
 * \brief The GetSchemaRequest class provides an interface for Glue GetSchema requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchema
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaRequest::GetSchemaRequest(const GetSchemaRequest &other)
    : GlueRequest(new GetSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaRequest object.
 */
GetSchemaRequest::GetSchemaRequest()
    : GlueRequest(new GetSchemaRequestPrivate(GlueRequest::GetSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSchemaRequestPrivate
 * \brief The GetSchemaRequestPrivate class provides private implementation for GetSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSchemaRequestPrivate::GetSchemaRequestPrivate(
    const GlueRequest::Action action, GetSchemaRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaRequest
 * class' copy constructor.
 */
GetSchemaRequestPrivate::GetSchemaRequestPrivate(
    const GetSchemaRequestPrivate &other, GetSchemaRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
