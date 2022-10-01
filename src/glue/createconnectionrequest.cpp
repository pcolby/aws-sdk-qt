// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectionrequest.h"
#include "createconnectionrequest_p.h"
#include "createconnectionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateConnectionRequest
 * \brief The CreateConnectionRequest class provides an interface for Glue CreateConnection requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectionRequest::CreateConnectionRequest(const CreateConnectionRequest &other)
    : GlueRequest(new CreateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectionRequest object.
 */
CreateConnectionRequest::CreateConnectionRequest()
    : GlueRequest(new CreateConnectionRequestPrivate(GlueRequest::CreateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateConnectionRequestPrivate
 * \brief The CreateConnectionRequestPrivate class provides private implementation for CreateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateConnectionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const GlueRequest::Action action, CreateConnectionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectionRequest
 * class' copy constructor.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const CreateConnectionRequestPrivate &other, CreateConnectionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
