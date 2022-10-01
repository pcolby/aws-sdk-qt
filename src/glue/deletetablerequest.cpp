// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetablerequest.h"
#include "deletetablerequest_p.h"
#include "deletetableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableRequest
 * \brief The DeleteTableRequest class provides an interface for Glue DeleteTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTable
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTableRequest::DeleteTableRequest(const DeleteTableRequest &other)
    : GlueRequest(new DeleteTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTableRequest object.
 */
DeleteTableRequest::DeleteTableRequest()
    : GlueRequest(new DeleteTableRequestPrivate(GlueRequest::DeleteTableAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTableRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteTableRequestPrivate
 * \brief The DeleteTableRequestPrivate class provides private implementation for DeleteTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteTableRequestPrivate::DeleteTableRequestPrivate(
    const GlueRequest::Action action, DeleteTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTableRequest
 * class' copy constructor.
 */
DeleteTableRequestPrivate::DeleteTableRequestPrivate(
    const DeleteTableRequestPrivate &other, DeleteTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
