// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateschemarequest.h"
#include "updateschemarequest_p.h"
#include "updateschemaresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateSchemaRequest
 * \brief The UpdateSchemaRequest class provides an interface for Glue UpdateSchema requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateSchema
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSchemaRequest::UpdateSchemaRequest(const UpdateSchemaRequest &other)
    : GlueRequest(new UpdateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSchemaRequest object.
 */
UpdateSchemaRequest::UpdateSchemaRequest()
    : GlueRequest(new UpdateSchemaRequestPrivate(GlueRequest::UpdateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateSchemaRequestPrivate
 * \brief The UpdateSchemaRequestPrivate class provides private implementation for UpdateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateSchemaRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateSchemaRequestPrivate::UpdateSchemaRequestPrivate(
    const GlueRequest::Action action, UpdateSchemaRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSchemaRequest
 * class' copy constructor.
 */
UpdateSchemaRequestPrivate::UpdateSchemaRequestPrivate(
    const UpdateSchemaRequestPrivate &other, UpdateSchemaRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
