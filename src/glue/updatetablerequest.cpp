// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetablerequest.h"
#include "updatetablerequest_p.h"
#include "updatetableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateTableRequest
 * \brief The UpdateTableRequest class provides an interface for Glue UpdateTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateTable
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTableRequest::UpdateTableRequest(const UpdateTableRequest &other)
    : GlueRequest(new UpdateTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTableRequest object.
 */
UpdateTableRequest::UpdateTableRequest()
    : GlueRequest(new UpdateTableRequestPrivate(GlueRequest::UpdateTableAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateTableRequestPrivate
 * \brief The UpdateTableRequestPrivate class provides private implementation for UpdateTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateTableRequestPrivate::UpdateTableRequestPrivate(
    const GlueRequest::Action action, UpdateTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTableRequest
 * class' copy constructor.
 */
UpdateTableRequestPrivate::UpdateTableRequestPrivate(
    const UpdateTableRequestPrivate &other, UpdateTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
