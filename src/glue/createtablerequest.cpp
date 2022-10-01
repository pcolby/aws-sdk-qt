// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtablerequest.h"
#include "createtablerequest_p.h"
#include "createtableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateTableRequest
 * \brief The CreateTableRequest class provides an interface for Glue CreateTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createTable
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTableRequest::CreateTableRequest(const CreateTableRequest &other)
    : GlueRequest(new CreateTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTableRequest object.
 */
CreateTableRequest::CreateTableRequest()
    : GlueRequest(new CreateTableRequestPrivate(GlueRequest::CreateTableAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTableRequest::response(QNetworkReply * const reply) const
{
    return new CreateTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateTableRequestPrivate
 * \brief The CreateTableRequestPrivate class provides private implementation for CreateTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateTableRequestPrivate::CreateTableRequestPrivate(
    const GlueRequest::Action action, CreateTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTableRequest
 * class' copy constructor.
 */
CreateTableRequestPrivate::CreateTableRequestPrivate(
    const CreateTableRequestPrivate &other, CreateTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
