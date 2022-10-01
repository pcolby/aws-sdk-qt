// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschemarequest.h"
#include "createschemarequest_p.h"
#include "createschemaresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSchemaRequest
 * \brief The CreateSchemaRequest class provides an interface for Glue CreateSchema requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createSchema
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSchemaRequest::CreateSchemaRequest(const CreateSchemaRequest &other)
    : GlueRequest(new CreateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSchemaRequest object.
 */
CreateSchemaRequest::CreateSchemaRequest()
    : GlueRequest(new CreateSchemaRequestPrivate(GlueRequest::CreateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateSchemaRequestPrivate
 * \brief The CreateSchemaRequestPrivate class provides private implementation for CreateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSchemaRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const GlueRequest::Action action, CreateSchemaRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSchemaRequest
 * class' copy constructor.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CreateSchemaRequestPrivate &other, CreateSchemaRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
