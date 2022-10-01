// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaversionrequest.h"
#include "getschemaversionrequest_p.h"
#include "getschemaversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionRequest
 * \brief The GetSchemaVersionRequest class provides an interface for Glue GetSchemaVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaVersionRequest::GetSchemaVersionRequest(const GetSchemaVersionRequest &other)
    : GlueRequest(new GetSchemaVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaVersionRequest object.
 */
GetSchemaVersionRequest::GetSchemaVersionRequest()
    : GlueRequest(new GetSchemaVersionRequestPrivate(GlueRequest::GetSchemaVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSchemaVersionRequestPrivate
 * \brief The GetSchemaVersionRequestPrivate class provides private implementation for GetSchemaVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSchemaVersionRequestPrivate::GetSchemaVersionRequestPrivate(
    const GlueRequest::Action action, GetSchemaVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaVersionRequest
 * class' copy constructor.
 */
GetSchemaVersionRequestPrivate::GetSchemaVersionRequestPrivate(
    const GetSchemaVersionRequestPrivate &other, GetSchemaVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
