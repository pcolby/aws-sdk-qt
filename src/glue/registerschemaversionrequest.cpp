// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerschemaversionrequest.h"
#include "registerschemaversionrequest_p.h"
#include "registerschemaversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RegisterSchemaVersionRequest
 * \brief The RegisterSchemaVersionRequest class provides an interface for Glue RegisterSchemaVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::registerSchemaVersion
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterSchemaVersionRequest::RegisterSchemaVersionRequest(const RegisterSchemaVersionRequest &other)
    : GlueRequest(new RegisterSchemaVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterSchemaVersionRequest object.
 */
RegisterSchemaVersionRequest::RegisterSchemaVersionRequest()
    : GlueRequest(new RegisterSchemaVersionRequestPrivate(GlueRequest::RegisterSchemaVersionAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterSchemaVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterSchemaVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterSchemaVersionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterSchemaVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::RegisterSchemaVersionRequestPrivate
 * \brief The RegisterSchemaVersionRequestPrivate class provides private implementation for RegisterSchemaVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RegisterSchemaVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
RegisterSchemaVersionRequestPrivate::RegisterSchemaVersionRequestPrivate(
    const GlueRequest::Action action, RegisterSchemaVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterSchemaVersionRequest
 * class' copy constructor.
 */
RegisterSchemaVersionRequestPrivate::RegisterSchemaVersionRequestPrivate(
    const RegisterSchemaVersionRequestPrivate &other, RegisterSchemaVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
