// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomentitytyperequest.h"
#include "deletecustomentitytyperequest_p.h"
#include "deletecustomentitytyperesponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteCustomEntityTypeRequest
 * \brief The DeleteCustomEntityTypeRequest class provides an interface for Glue DeleteCustomEntityType requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteCustomEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomEntityTypeRequest::DeleteCustomEntityTypeRequest(const DeleteCustomEntityTypeRequest &other)
    : GlueRequest(new DeleteCustomEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomEntityTypeRequest object.
 */
DeleteCustomEntityTypeRequest::DeleteCustomEntityTypeRequest()
    : GlueRequest(new DeleteCustomEntityTypeRequestPrivate(GlueRequest::DeleteCustomEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteCustomEntityTypeRequestPrivate
 * \brief The DeleteCustomEntityTypeRequestPrivate class provides private implementation for DeleteCustomEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteCustomEntityTypeRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteCustomEntityTypeRequestPrivate::DeleteCustomEntityTypeRequestPrivate(
    const GlueRequest::Action action, DeleteCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomEntityTypeRequest
 * class' copy constructor.
 */
DeleteCustomEntityTypeRequestPrivate::DeleteCustomEntityTypeRequestPrivate(
    const DeleteCustomEntityTypeRequestPrivate &other, DeleteCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
